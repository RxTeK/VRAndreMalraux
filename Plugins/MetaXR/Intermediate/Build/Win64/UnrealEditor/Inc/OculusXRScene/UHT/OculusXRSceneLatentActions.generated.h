// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRSceneLatentActions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UOculusXRAsyncAction_LaunchCaptureFlow;
struct FOculusXRUInt64;
#ifdef OCULUSXRSCENE_OculusXRSceneLatentActions_generated_h
#error "OculusXRSceneLatentActions.generated.h already included, missing '#pragma once' in OculusXRSceneLatentActions.h"
#endif
#define OCULUSXRSCENE_OculusXRSceneLatentActions_generated_h

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneLatentActions_h_15_DELEGATE \
static void FOculusXRAsyncAction_CaptureFlowFinished_DelegateWrapper(const FMulticastScriptDelegate& OculusXRAsyncAction_CaptureFlowFinished);


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneLatentActions_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnCaptureFinish); \
	DECLARE_FUNCTION(execLaunchCaptureFlowAsync);


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneLatentActions_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRAsyncAction_LaunchCaptureFlow(); \
	friend struct Z_Construct_UClass_UOculusXRAsyncAction_LaunchCaptureFlow_Statics; \
public: \
	DECLARE_CLASS(UOculusXRAsyncAction_LaunchCaptureFlow, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRScene"), NO_API) \
	DECLARE_SERIALIZER(UOculusXRAsyncAction_LaunchCaptureFlow)


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneLatentActions_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRAsyncAction_LaunchCaptureFlow(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOculusXRAsyncAction_LaunchCaptureFlow(UOculusXRAsyncAction_LaunchCaptureFlow&&); \
	UOculusXRAsyncAction_LaunchCaptureFlow(const UOculusXRAsyncAction_LaunchCaptureFlow&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRAsyncAction_LaunchCaptureFlow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRAsyncAction_LaunchCaptureFlow); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRAsyncAction_LaunchCaptureFlow) \
	NO_API virtual ~UOculusXRAsyncAction_LaunchCaptureFlow();


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneLatentActions_h_10_PROLOG
#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneLatentActions_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneLatentActions_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneLatentActions_h_13_INCLASS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneLatentActions_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSXRSCENE_API UClass* StaticClass<class UOculusXRAsyncAction_LaunchCaptureFlow>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneLatentActions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
