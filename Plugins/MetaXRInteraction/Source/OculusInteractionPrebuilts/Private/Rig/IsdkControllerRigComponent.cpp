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

#include "Rig/IsdkControllerRigComponent.h"

#include "EnhancedInputComponent.h"
#include "IsdkFunctionLibrary.h"
#include "IsdkHandMeshComponent.h"
#include "Rig/IsdkControllerVisualsRigComponent.h"
#include "Rig/IsdkInputActionsRigComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/SkinnedMeshComponent.h"
#include "Components/SkeletalMeshComponent.h"

void UIsdkControllerRigComponent::OnControllerVisualsAttached()
{
  ControllerVisuals->CreateDataSourcesAsTrackedController();
}

FVector UIsdkControllerRigComponent::GetPalmColliderOffset() const
{
  const auto ControllerHandBehavior = UIsdkFunctionLibrary::GetControllerHandBehavior(GetWorld());
  const bool bUseHandOffset =
      ControllerHandBehavior == EControllerHandBehavior::HandsOnlyAnimated ||
      ControllerHandBehavior == EControllerHandBehavior::HandsOnlyProcedural;

  if (bUseHandOffset)
  {
    return HandPalmColliderOffset;
  }

  return ControllerPalmColliderOffset;
}

USkinnedMeshComponent* UIsdkControllerRigComponent::GetPinchAttachMesh() const
{
  const auto ControllerHandBehavior = UIsdkFunctionLibrary::GetControllerHandBehavior(GetWorld());
  const bool bUseHandMesh = ControllerHandBehavior == EControllerHandBehavior::HandsOnlyAnimated ||
      ControllerHandBehavior == EControllerHandBehavior::HandsOnlyProcedural;

  if (bUseHandMesh)
  {
    if (ControllerHandBehavior == EControllerHandBehavior::HandsOnlyAnimated)
    {
      return ControllerVisuals->GetAnimatedHandMeshComponent();
    }

    return ControllerVisuals->GetPoseableHandMeshComponent();
  }

  return nullptr;
}

void UIsdkControllerRigComponent::BindInputActions(UEnhancedInputComponent* EnhancedInputComponent)
{
  ControllerVisuals->BindInputActions(EnhancedInputComponent, InputActions);

  // Configure pinch grab
  if (IsValid(InputActions->PinchGrabAction))
  {
    EnhancedInputComponent->BindAction(
        InputActions->PinchGrabAction,
        ETriggerEvent::Started,
        this,
        &UIsdkControllerRigComponent::HandlePinchGrabStartedInput);
    EnhancedInputComponent->BindAction(
        InputActions->PinchGrabAction,
        ETriggerEvent::Completed,
        this,
        &UIsdkControllerRigComponent::HandlePinchGrabFinishedInput);
    EnhancedInputComponent->BindAction(
        InputActions->PinchGrabAction,
        ETriggerEvent::Canceled,
        this,
        &UIsdkControllerRigComponent::HandlePinchGrabFinishedInput);
  }

  PinchStrength = &EnhancedInputComponent->BindActionValue(InputActions->SelectStrengthAction);

  // Configure palm grab
  if (IsValid(InputActions->PalmGrabAction))
  {
    EnhancedInputComponent->BindAction(
        InputActions->PalmGrabAction,
        ETriggerEvent::Started,
        this,
        &UIsdkControllerRigComponent::HandlePalmGrabStartedInput);
    EnhancedInputComponent->BindAction(
        InputActions->PalmGrabAction,
        ETriggerEvent::Completed,
        this,
        &UIsdkControllerRigComponent::HandlePalmGrabFinishedInput);
    EnhancedInputComponent->BindAction(
        InputActions->PalmGrabAction,
        ETriggerEvent::Canceled,
        this,
        &UIsdkControllerRigComponent::HandlePalmGrabFinishedInput);
  }
}

FName UIsdkControllerRigComponent::GetThumbTipSocketName() const
{
  const auto PoseableHandMesh = ControllerVisuals->GetPoseableHandMeshComponent();
  if (!IsValid(PoseableHandMesh))
  {
    return NAME_None;
  }

  return PoseableHandMesh->MappedBoneNames[static_cast<int>(EIsdkHandBones::HandThumbTip)];
}

TSubclassOf<AActor> UIsdkControllerRigComponent::FindBPFromPath(const FString& Path)
{
  ConstructorHelpers::FClassFinder<AActor> ClassFinder(*Path);
  if (ClassFinder.Succeeded())
  {
    return ClassFinder.Class;
  }

  return nullptr;
}

void UIsdkControllerRigComponent::HandleControllerHandBehaviorChanged(
    TScriptInterface<IIsdkITrackingDataSubsystem> IsdkITrackingDataSubsystem,
    EControllerHandBehavior ControllerHandBehavior,
    EControllerHandBehavior ControllerHandBehavior1)
{
  // Interactors may need to have their attach components / sockets updated when controller hand
  // behavior changes (for instance, hand-only interactor colliders should be placed differently
  // from behaviors which include a controller mesh)
  UpdateComponentDataSources();
}

void UIsdkControllerRigComponent::HandlePinchGrabStartedInput()
{
  OnPinchSelectDelegate.Broadcast(this);
}

void UIsdkControllerRigComponent::HandlePinchGrabFinishedInput()
{
  OnPinchUnselectDelegate.Broadcast(this);
}

void UIsdkControllerRigComponent::HandlePalmGrabStartedInput()
{
  OnPalmSelectDelegate.Broadcast(this);
}

void UIsdkControllerRigComponent::HandlePalmGrabFinishedInput()
{
  OnPalmUnselectDelegate.Broadcast(this);
}

UIsdkControllerRigComponentLeft::UIsdkControllerRigComponentLeft()
    : UIsdkControllerRigComponent(EIsdkHandedness::Left)
{
}

UIsdkControllerRigComponentRight::UIsdkControllerRigComponentRight()
    : UIsdkControllerRigComponent(EIsdkHandedness::Right)
{
}

UIsdkControllerRigComponent::UIsdkControllerRigComponent()
    : UIsdkControllerRigComponent(EIsdkHandedness::Left)
{
}

UIsdkControllerRigComponent::UIsdkControllerRigComponent(EIsdkHandedness InHandedness)
{
  Handedness = InHandedness;
  ControllerVisuals =
      CreateOptionalDefaultSubobject<UIsdkControllerVisualsRigComponent>(TEXT("ControllerVisuals"));
  if (IsValid(ControllerVisuals))
  {
    ControllerVisuals->SetSubobjectPropertyDefaults(Handedness);
  }
  SetRigComponentDefaults();
}

void UIsdkControllerRigComponent::BeginPlay()
{
  Super::BeginPlay();

  if (IsValid(ControllerVisuals) && !IsValid(ControllerVisuals->AttachedToMotionController))
  {
    if (ControllerVisuals->TryAttachToParentMotionController(this))
    {
      OnControllerVisualsAttached();
    }
  }

  const auto Delegate = UIsdkFunctionLibrary::GetControllerHandBehaviorDelegate(GetWorld());

  if (!Delegate)
  {
    return;
  }

  Delegate->AddUObject(this, &UIsdkControllerRigComponent::HandleControllerHandBehaviorChanged);
}

UIsdkControllerVisualsRigComponent* UIsdkControllerRigComponent::GetControllerVisuals() const
{
  return ControllerVisuals;
}

UIsdkTrackedDataSourceRigComponent* UIsdkControllerRigComponent::GetVisuals() const
{
  return ControllerVisuals;
}

float UIsdkControllerRigComponent::GetPinchStrength() const
{
  if (PinchStrength)
  {
    return PinchStrength->GetValue().Get<float>();
  }

  return 0.f;
}
