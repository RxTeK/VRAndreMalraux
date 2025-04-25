/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 * All rights reserved.
 *
 * Licensed under the Oculus SDK License Agreement (the "License");
 * you may not use the Oculus SDK except in compliance with the License,
 * which is provided at the time of installation or download, or which
 * otherwise accompanies this software in either electronic or hard copy form.
 *
 * You may obtain a copy of the License at
 *
 * https://developer.oculus.com/licenses/oculussdk/
 *
 * Unless required by applicable law or agreed to in writing, the Oculus SDK
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "Rig/IsdkHandRigComponent.h"

#include "EnhancedInputComponent.h"
#include "IsdkHandData.h"
#include "IsdkHandMeshComponent.h"
#include "Rig/IsdkHandVisualsRigComponent.h"
#include "Components/SkinnedMeshComponent.h"
#include "DataSources/IsdkSyntheticHand.h"
#include "HandPoseDetection/IsdkHandFingerPinchGrabRecognizer.h"
#include "HandPoseDetection/IsdkHandPalmGrabRecognizer.h"
#include "Kismet/KismetMathLibrary.h"
#include "Rig/IsdkInputActionsRigComponent.h"
#include "Rig/IsdkPokeInteractionRigComponent.h"
#include "Utilities/IsdkXRUtils.h"

UIsdkHandRigComponent::UIsdkHandRigComponent() : UIsdkHandRigComponent(EIsdkHandedness::Left) {}

UIsdkHandRigComponent::UIsdkHandRigComponent(EIsdkHandedness InHandedness)
{
  PrimaryComponentTick.bCanEverTick = true;
  PrimaryComponentTick.TickGroup = TG_PrePhysics;

  Handedness = InHandedness;
  HandVisuals = CreateOptionalDefaultSubobject<UIsdkHandVisualsRigComponent>(TEXT("HandVisuals"));
  HandVisuals->SetSubobjectPropertyDefaults(Handedness);

  PinchGrabRecognizer = CreateDefaultSubobject<UIsdkHandFingerPinchGrabRecognizer>(
      TEXT("IsdkHandFingerPinchGrabRecognizer"));
  PalmGrabRecognizer =
      CreateDefaultSubobject<UIsdkHandPalmGrabRecognizer>(TEXT("IsdkHandPalmGrabRecognizer"));

  SetRigComponentDefaults();
}

void UIsdkHandRigComponent::BeginPlay()
{
  Super::BeginPlay();
  if (IsValid(HandVisuals) && !IsValid(HandVisuals->AttachedToMotionController))
  {
    if (HandVisuals->TryAttachToParentMotionController(this))
    {
      OnHandVisualsAttached();
    }
  }
}

void UIsdkHandRigComponent::TickComponent(
    float DeltaTime,
    ELevelTick TickType,
    FActorComponentTickFunction* ThisTickFunction)
{
  Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

  const FIsdkTrackingDataSources* DataSources = nullptr;
  UIsdkTrackedDataSourceRigComponent* Visuals = GetVisuals();
  if (IsValid(Visuals))
  {
    DataSources = &Visuals->GetDataSources();
  }

  TScriptInterface<IIsdkIRootPose> HandRootPose;
  if (DataSources != nullptr)
  {
    HandRootPose = DataSources->HandRootPose;
  }

  // Tick the pinch grab recognizer
  if (IsValid(PinchGrabRecognizer))
  {
    // Update the pinch grab recognizer's wrist forward vector
    if (IsValid(HandRootPose.GetObject()))
    {
      const auto WristTransform = IIsdkIRootPose::Execute_GetRootPose(HandRootPose.GetObject());
      PinchGrabRecognizer->CurrentWristForward =
          UKismetMathLibrary::GetForwardVector(WristTransform.GetRotation().Rotator());
    }

    // Update the pinch grab recognizer's hmd forward vector
    if (IsValid(HmdDataSource.GetObject()))
    {
      FTransform HmdPose;
      bool bIsTracked;
      IIsdkIHmdDataSource::Execute_GetHmdPose(HmdDataSource.GetObject(), HmdPose, bIsTracked);
      PinchGrabRecognizer->CurrentHMDForward =
          UKismetMathLibrary::GetForwardVector(HmdPose.GetRotation().Rotator());
    }
  }

  PinchGrabRecognizer->UpdateState(DeltaTime);

  // Tick the palm grab recognizer
  if (IsValid(PalmGrabRecognizer))
  {
    PalmGrabRecognizer->UpdateState(DeltaTime);
  }
}

void UIsdkHandRigComponent::BindInputActions(UEnhancedInputComponent* EnhancedInputComponent)
{
  PinchStrength = &EnhancedInputComponent->BindActionValue(InputActions->SelectStrengthAction);

  // If we don't have access to meta XR (we're using OpenXR), the pinch input action won't work, so
  // we'll fall back to using the pinch grab recognizer.
  if (!(IsdkXRUtils::IsUsingOpenXR() && PinchGrabRecognizer) &&
      IsValid(InputActions->PinchGrabAction))
  {
    EnhancedInputComponent->BindAction(
        InputActions->PinchGrabAction,
        ETriggerEvent::Started,
        this,
        &UIsdkHandRigComponent::HandlePinchGrabStarted);
    EnhancedInputComponent->BindAction(
        InputActions->PinchGrabAction,
        ETriggerEvent::Completed,
        this,
        &UIsdkHandRigComponent::HandlePinchGrabFinished);
    EnhancedInputComponent->BindAction(
        InputActions->PinchGrabAction,
        ETriggerEvent::Canceled,
        this,
        &UIsdkHandRigComponent::HandlePinchGrabFinished);
  }
}

FVector UIsdkHandRigComponent::GetPalmColliderOffset() const
{
  return HandPalmColliderOffset;
}

USkinnedMeshComponent* UIsdkHandRigComponent::GetPinchAttachMesh() const
{
  return Cast<USkinnedMeshComponent>(HandVisuals->GetSyntheticVisual());
}

void UIsdkHandRigComponent::OnHandVisualsAttached()
{
  HandVisuals->CreateDataSourcesAsTrackedHand();
}

void UIsdkHandRigComponent::UpdateComponentDataSources()
{
  Super::UpdateComponentDataSources();

  const auto DataSources = HandVisuals->GetDataSources();
  PokeInteraction->BindHandDataSources(DataSources, HandVisuals->SyntheticHand);

  if (IsValid(HandVisuals->TrackedHandVisual))
  {
    AddTickPrerequisiteComponent(HandVisuals->TrackedHandVisual);
  }

  PinchGrabRecognizer->HandVisual = HandVisuals->TrackedHandVisual;
  PinchGrabRecognizer->FingerType = EIsdkFingerType::Index;
  PinchGrabRecognizer->PinchGrabStarted.AddDynamic(
      this, &UIsdkHandRigComponent::HandlePinchGrabStarted);
  PinchGrabRecognizer->PinchGrabFinished.AddDynamic(
      this, &UIsdkHandRigComponent::HandlePinchGrabFinished);

  PalmGrabRecognizer->HandVisual = HandVisuals->TrackedHandVisual;
  PalmGrabRecognizer->PalmGrabStarted.AddDynamic(
      this, &UIsdkHandRigComponent::HandlePalmGrabStarted);
  PalmGrabRecognizer->PalmGrabFinished.AddDynamic(
      this, &UIsdkHandRigComponent::HandlePalmGrabFinished);

  // Setting Inbound HandData Reference to our DataSource from HandVisual
  if (IsValid(HandVisuals->SyntheticHand))
  {
    DataSources.DataSourceComponent->SetInboundHandData(
        IIsdkIHandJoints::Execute_GetHandData(HandVisuals->SyntheticHand));
  }
}

float UIsdkHandRigComponent::GetPinchStrength() const
{
  if (IsdkXRUtils::IsUsingOpenXR() && PinchGrabRecognizer)
  {
    return PinchGrabRecognizer->GetPinchStrength();
  }

  if (PinchStrength)
  {
    return PinchStrength->GetValue().Get<float>();
  }

  return 0.f;
}

UIsdkHandVisualsRigComponent* UIsdkHandRigComponent::GetHandVisuals() const
{
  return HandVisuals;
}

UIsdkTrackedDataSourceRigComponent* UIsdkHandRigComponent::GetVisuals() const
{
  return HandVisuals;
}

FName UIsdkHandRigComponent::GetThumbTipSocketName() const
{
  const auto TrackedHandVisual = HandVisuals->TrackedHandVisual;
  if (!TrackedHandVisual)
  {
    return NAME_None;
  }

  return TrackedHandVisual->MappedBoneNames[static_cast<int>(EIsdkHandBones::HandThumbTip)];
}

void UIsdkHandRigComponent::HandlePinchGrabStarted()
{
  OnPinchSelectDelegate.Broadcast(this);
}

void UIsdkHandRigComponent::HandlePinchGrabFinished()
{
  OnPinchUnselectDelegate.Broadcast(this);
}

void UIsdkHandRigComponent::HandlePalmGrabStarted()
{
  OnPalmSelectDelegate.Broadcast(this);
}

void UIsdkHandRigComponent::HandlePalmGrabFinished()
{
  OnPalmUnselectDelegate.Broadcast(this);
}

UIsdkHandRigComponentLeft::UIsdkHandRigComponentLeft() : Super(EIsdkHandedness::Left) {}

UIsdkHandRigComponentRight::UIsdkHandRigComponentRight() : Super(EIsdkHandedness::Right) {}
