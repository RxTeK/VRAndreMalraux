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
#include "Subsystem/IsdkWidgetSubsystem.h"
#include "IsdkRigComponent.generated.h"

class UIsdkRigComponent;
class UIsdkInteractionGroupRigComponent;
class UIsdkInputActionsRigComponent;
class UIsdkGrabInteractionRigComponent;
class UIsdkPokeInteractionRigComponent;
class UIsdkRayInteractionRigComponent;
class UIsdkControllerVisualsRigComponent;
class UIsdkHandVisualsRigComponent;
class UIsdkRayInteractor;
class UIsdkPokeLimiterVisual;
class UIsdkPokeInteractor;
class UIsdkGrabberComponent;
class UIsdkHandFingerPinchGrabRecognizer;
class UIsdkRigModifier;
class UIsdkTrackedDataSourceRigComponent;
class UEnhancedInputComponent;
class IIsdkIHmdDataSource;
enum class EIsdkHandBones : uint8;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FIsdkRigComponentLifecycleEvent);

const static FName NAME_isdk_PointerPoseSocket(TEXT("PointerPose"));

/**
 * A prebuilt collection of interactors for a single hand.
 *
 * The IsdkLegacyRigHand itself is an abstract class; there are derived types for Left and Right
 * hands that can be instantiated directly. The derived types set appropriate default values for
 * bones and meshes.
 *
 * To customize bone mappings, hand meshes or the behavior of the interactors, either:
 * - If placing an instance of an IsdkLegacyRigHand derived actor in the level: change the desired
 *   component properties directly in the details panel of the actor.
 * - If spawning an IsdkLegacyRigHand derived actor via a Child Actor Component in an actor: change
 * the desired component properties in the "Child Actor Template / InteractionSDK" sub-section.
 */

DECLARE_MULTICAST_DELEGATE_OneParam(FIsdkRigComponentSelectDelegate, UIsdkRigComponent*);

/**
 * UIsdkRigComponent is an abstract base class used to initialize the base components necessary
 * for interaction.  It also provides an interface for interactors to get input from controllers
 * / hands, agnostic of which is actively being used.
 */
UCLASS(
    Abstract,
    Blueprintable,
    ClassGroup = ("InteractionSDK|Rig"),
    meta = (BlueprintSpawnableComponent, DisplayName = "ISDK Rig Component"))
class OCULUSINTERACTIONPREBUILTS_API UIsdkRigComponent : public USceneComponent
{
  GENERATED_BODY()

  friend class FIsdkTestControllerVisualsCreateDataSources;
  friend class FIsdkTestHandVisualsCreateDataSources;
  friend class FIsdkTestRigHandCheckInteractorEnabledValue;

 public:
  // Default constructor required for Unreal object system.
  UIsdkRigComponent();

  // UActorComponent implementation Begin
  virtual void BeginPlay() override;
  virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
  // UActorComponent implementation End

  // USceneComponent implementation Begin
  virtual bool HasAnySockets() const override;
  virtual void QuerySupportedSockets(
      TArray<FComponentSocketDescription>& OutSockets) const override;
  virtual FTransform GetSocketTransform(
      FName InSocketName,
      ERelativeTransformSpace TransformSpace = RTS_World) const override;
  virtual bool DoesSocketExist(FName InSocketName) const override;
  // USceneComponent implementation End

  static FName GetPointerPoseSocketName();

  FIsdkRigComponentSelectDelegate OnPinchSelectDelegate;
  FIsdkRigComponentSelectDelegate OnPinchUnselectDelegate;
  FIsdkRigComponentSelectDelegate OnPalmSelectDelegate;
  FIsdkRigComponentSelectDelegate OnPalmUnselectDelegate;

  virtual float GetPinchStrength() const PURE_VIRTUAL(GetPinchStrength, return 0.f;);

  UFUNCTION(BlueprintGetter, Category = InteractionSDK)
  UIsdkPokeInteractor* GetPokeInteractor() const;

  UFUNCTION(BlueprintGetter, Category = InteractionSDK)
  UIsdkRayInteractor* GetRayInteractor() const;

  UFUNCTION(BlueprintGetter, Category = InteractionSDK)
  UIsdkPokeLimiterVisual* GetPokeLimiterVisual() const;

  UFUNCTION(BlueprintGetter, Category = InteractionSDK)
  UIsdkGrabberComponent* GetGrabber() const;

  UFUNCTION(BlueprintGetter, Category = InteractionSDK)
  UIsdkRayInteractionRigComponent* GetRayInteraction() const;

  UFUNCTION(BlueprintGetter, Category = InteractionSDK)
  UIsdkPokeInteractionRigComponent* GetPokeInteraction() const;

  UFUNCTION(BlueprintGetter, Category = InteractionSDK)
  UIsdkGrabInteractionRigComponent* GetGrabInteraction() const;

  UFUNCTION(BlueprintGetter, Category = InteractionSDK)
  UIsdkInputActionsRigComponent* GetInputActions() const;

  UFUNCTION(BlueprintGetter, Category = InteractionSDK)
  UIsdkInteractionGroupRigComponent* GetInteractionGroup() const;

  UFUNCTION(BlueprintGetter, Category = InteractionSDK)
  const FIsdkVirtualUserInfo& GetWidgetVirtualUser() const;

  UFUNCTION(BlueprintSetter, Category = InteractionSDK)
  void SetWidgetVirtualUser(const FIsdkVirtualUserInfo& InWidgetVirtualUser);

  /* Returns all of the active rig modifiers successfully spawned from RigModifiersToSpawn*/
  UFUNCTION(BlueprintGetter, Category = InteractionSDK)
  const TArray<UIsdkRigModifier*>& GetActiveRigModifiers() const;

  /* Returns true if HMD DataSource is valid and returns reference to it */
  UFUNCTION(BlueprintCallable, Category = InteractionSDK)
  bool GetHmdDataSource(TScriptInterface<IIsdkIHmdDataSource>& HmdDataSourceOut) const;

  virtual UIsdkTrackedDataSourceRigComponent* GetVisuals() const;

  // DataSourcesReady is broadcast when HMD and hand/controller data are valid and ready to be used
  UPROPERTY(BlueprintAssignable, Category = InteractionSDK)
  FIsdkRigComponentLifecycleEvent DataSourcesReady;

  EIsdkHandedness GetHandedness() const;

 protected:
  virtual void UpdateComponentDataSources();
  virtual void RegisterInteractorWidgetIndices();
  virtual void UnregisterInteractorWidgetIndices();
  virtual FVector GetPalmColliderOffset() const;
  virtual USkinnedMeshComponent* GetPinchAttachMesh() const;
  virtual void BindInputActions(UEnhancedInputComponent* EnhancedInputComponent) {}

  void SetRigComponentDefaults();

  // Attempts to find another already created HmdDataSource on other RigComponents. If unable,
  // creates one. Sets either result to member variable.
  void InitializeHmdDataSource();

  /**
   * @brief When true, during BeginPlay this actor will bind the configured input actions to the
   * PlayerController at index 0.
   * If false, a manual call to BindInputActionEvents must be made to bind the input actions.
   */
  UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = InteractionSDK)
  bool bAutoBindInputActions = true;

  /**
   * Handedness indicates which hand this rig component belongs to
   */
  UPROPERTY(BlueprintReadOnly, Category = InteractionSDK)
  EIsdkHandedness Handedness = EIsdkHandedness::Left;

  /**
   * RayInteractorSocket indicates which bone the ray interactor will attach to on either the
   * synthetic hand mesh (if using hands) or on the poseable hand mesh (if using controller hands)
   */
  UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "InteractionSDK|Customization")
  EIsdkHandBones RayInteractorSocket;

  /**
   * PokeInteractorSocket indicates which bone the poke interactor will attach to on either the
   * synthetic hand mesh (if using hands) or on the poseable hand mesh (if using controller hands)
   */
  UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "InteractionSDK|Customization")
  EIsdkHandBones PokeInteractorSocket;

  /**
   * GrabberSocket indicates which bone the grabber component will attach to on either the
   * synthetic hand mesh (if using hands) or on the poseable hand mesh (if using controller hands)
   */
  UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "InteractionSDK|Customization")
  EIsdkHandBones GrabberSocket;

  /* All Rig Modifiers that this Rig Component should spawn and initialize */
  UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = InteractionSDK)
  TArray<TSubclassOf<UIsdkRigModifier>> RigModifiersToSpawn;

  static const FVector ControllerPalmColliderOffset;
  static const FVector HandPalmColliderOffset;

  /**
   * RayInteraction is a reference to this rig component's RayInteractionRigComponent, which binds
   * hand and controller input to ray interactions
   */
  UPROPERTY(BlueprintGetter = GetRayInteraction, EditAnywhere, Category = InteractionSDK)
  TObjectPtr<UIsdkRayInteractionRigComponent> RayInteraction;

  /**
   * PokeInteraction is a reference to this rig component's PokeInteractionRigComponent, which binds
   * hand and controller input to poke interactions
   */
  UPROPERTY(BlueprintGetter = GetPokeInteraction, EditAnywhere, Category = InteractionSDK)
  TObjectPtr<UIsdkPokeInteractionRigComponent> PokeInteraction;

  /**
   * GrabInteraction is a reference to this rig component's GrabInteractionRigComponent, which binds
   * hand and controller input to grab interactions
   */
  UPROPERTY(BlueprintGetter = GetGrabInteraction, EditAnywhere, Category = InteractionSDK)
  TObjectPtr<UIsdkGrabInteractionRigComponent> GrabInteraction;

  /**
   * InputActions is a reference to this rig component's InputActionsRigComponent, which is used
   * to store input actions used for interaction
   */
  UPROPERTY(BlueprintGetter = GetInputActions, EditAnywhere, Category = InteractionSDK)
  TObjectPtr<UIsdkInputActionsRigComponent> InputActions;

  /**
   * InteractionGroup is a reference to this rig component's InteractionGroupComponent, which is
   * used to help drive which interactors are enabled and disabled.
   */
  UPROPERTY(BlueprintGetter = GetInteractionGroup, EditAnywhere, Category = InteractionSDK)
  TObjectPtr<UIsdkInteractionGroupRigComponent> InteractionGroup;

  /**
   * WidgetVirtualUser is used with UI interactions to determine which hand is interacting with
   * a widget.
   */
  UPROPERTY(
      BlueprintGetter = GetWidgetVirtualUser,
      BlueprintSetter = SetWidgetVirtualUser,
      EditAnywhere,
      Category = InteractionSDK,
      meta = (ExposeOnSpawn = true))
  FIsdkVirtualUserInfo WidgetVirtualUser;

  UPROPERTY()
  TArray<UIsdkRigModifier*> ActiveRigModifiers;

  UPROPERTY()
  TScriptInterface<IIsdkIHmdDataSource> HmdDataSource;

  virtual FName GetThumbTipSocketName() const;

  UFUNCTION()
  void HandleVisualsDataSourcesCreatedEvent();

 private:
  void CreateInteractionGroupConditionals();
};
