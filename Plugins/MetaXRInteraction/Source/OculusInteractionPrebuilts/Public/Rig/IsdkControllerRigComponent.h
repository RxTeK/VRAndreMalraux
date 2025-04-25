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

#pragma once

#include "CoreMinimal.h"
#include "EnhancedInputComponent.h"
#include "IsdkRigComponent.h"
#include "Subsystem/IsdkITrackingDataSubsystem.h"
#include "IsdkControllerRigComponent.generated.h"

enum class EControllerHandBehavior : uint8;

/**
 * @brief UIsdkControllerRigComponent is the highest level ISDK scene component driving interaction
 * behavior while the user is holder a controller.  It is intended to be placed directly below a
 * motion controller in the scene hierarchy, one for each hand.  The component takes input events
 * from the controller and provides a means for interactors to read those events in a
 * controller/hand agnostic manner.
 */
UCLASS(Abstract, ClassGroup = ("InteractionSDK|Rig"), meta = (BlueprintSpawnableComponent))
class OCULUSINTERACTIONPREBUILTS_API UIsdkControllerRigComponent : public UIsdkRigComponent
{
  GENERATED_BODY()

 public:
  UIsdkControllerRigComponent();
  UIsdkControllerRigComponent(EIsdkHandedness InHandedness);

  virtual void BeginPlay() override;

  UFUNCTION(BlueprintGetter, Category = InteractionSDK)
  UIsdkControllerVisualsRigComponent* GetControllerVisuals() const;

  virtual UIsdkTrackedDataSourceRigComponent* GetVisuals() const override;

  virtual float GetPinchStrength() const override;

 protected:
  virtual void OnControllerVisualsAttached();
  virtual FVector GetPalmColliderOffset() const override;
  virtual USkinnedMeshComponent* GetPinchAttachMesh() const override;

  UPROPERTY(BlueprintGetter = GetControllerVisuals, EditAnywhere, Category = InteractionSDK)
  TObjectPtr<UIsdkControllerVisualsRigComponent> ControllerVisuals;

  FEnhancedInputActionValueBinding* PinchStrength;

  virtual FName GetThumbTipSocketName() const override;

 private:
  virtual void BindInputActions(UEnhancedInputComponent* EnhancedInputComponent) override;
  virtual TSubclassOf<AActor> FindBPFromPath(const FString& Path);

  UFUNCTION()
  void HandleControllerHandBehaviorChanged(
      TScriptInterface<IIsdkITrackingDataSubsystem> IsdkITrackingDataSubsystem,
      EControllerHandBehavior ControllerHandBehavior,
      EControllerHandBehavior ControllerHandBehavior1);

  UFUNCTION()
  void HandlePinchGrabStartedInput();

  UFUNCTION()
  void HandlePinchGrabFinishedInput();

  UFUNCTION()
  void HandlePalmGrabStartedInput();

  UFUNCTION()
  void HandlePalmGrabFinishedInput();
};

UCLASS(
    Blueprintable,
    ClassGroup = ("InteractionSDK|Rig"),
    meta = (BlueprintSpawnableComponent, DisplayName = "ISDK Controller Rig Left"))
class OCULUSINTERACTIONPREBUILTS_API UIsdkControllerRigComponentLeft
    : public UIsdkControllerRigComponent
{
  GENERATED_BODY()

 public:
  UIsdkControllerRigComponentLeft();
};

UCLASS(
    Blueprintable,
    ClassGroup = ("InteractionSDK|Rig"),
    meta = (BlueprintSpawnableComponent, DisplayName = "ISDK Controller Rig Right"))
class OCULUSINTERACTIONPREBUILTS_API UIsdkControllerRigComponentRight
    : public UIsdkControllerRigComponent
{
  GENERATED_BODY()

 public:
  UIsdkControllerRigComponentRight();
};
