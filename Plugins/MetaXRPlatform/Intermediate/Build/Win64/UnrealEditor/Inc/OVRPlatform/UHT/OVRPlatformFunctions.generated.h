// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OVRPlatformFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EOvrLaunchResult : uint8;
enum class EOvrSystemVoipStatus : uint8;
enum class EOvrVoipBitrate : uint8;
enum class EOvrVoipDtxState : uint8;
enum class EOvrVoipMuteState : uint8;
enum class EOvrVoipSampleRate : uint8;
struct FOvrId;
struct FOvrLaunchDetails;
struct FOvrVoipOptions;
#ifdef OVRPLATFORM_OVRPlatformFunctions_generated_h
#error "OVRPlatformFunctions.generated.h already included, missing '#pragma once' in OVRPlatformFunctions.h"
#endif
#define OVRPLATFORM_OVRPlatformFunctions_generated_h

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformFunctions_h_17_DELEGATE \
OVRPLATFORM_API void FOvrVoipFilterCallback_DelegateWrapper(const FScriptDelegate& OvrVoipFilterCallback, const TArray<int32>& pcmData, int32 frequency, int32 numChannels);


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformFunctions_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPlatform_SetDeveloperAccessToken); \
	DECLARE_FUNCTION(execPlatform_GetLoggedInUserLocale); \
	DECLARE_FUNCTION(execPlatform_GetLoggedInUserID); \
	DECLARE_FUNCTION(execPlatform_IsInitialized); \
	DECLARE_FUNCTION(execVoip_Stop); \
	DECLARE_FUNCTION(execVoip_Start); \
	DECLARE_FUNCTION(execVoip_SetOutputSampleRate); \
	DECLARE_FUNCTION(execVoip_SetNewConnectionOptions); \
	DECLARE_FUNCTION(execVoip_SetMicrophoneMuted); \
	DECLARE_FUNCTION(execVoip_GetSystemVoipStatus); \
	DECLARE_FUNCTION(execVoip_GetSystemVoipMicrophoneMuted); \
	DECLARE_FUNCTION(execVoip_GetSyncTimestampDifference); \
	DECLARE_FUNCTION(execVoip_GetSyncTimestamp); \
	DECLARE_FUNCTION(execVoip_GetRemoteBitrate); \
	DECLARE_FUNCTION(execVoip_GetPCMSize); \
	DECLARE_FUNCTION(execVoip_GetOutputBufferMaxSize); \
	DECLARE_FUNCTION(execVoip_GetLocalBitrate); \
	DECLARE_FUNCTION(execVoip_GetIsConnectionUsingDtx); \
	DECLARE_FUNCTION(execVoip_Accept); \
	DECLARE_FUNCTION(execApplicationLifecycle_LogDeeplinkResult); \
	DECLARE_FUNCTION(execApplicationLifecycle_GetLaunchDetails);


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformFunctions_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOvrFunctionsBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UOvrFunctionsBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UOvrFunctionsBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OVRPlatform"), NO_API) \
	DECLARE_SERIALIZER(UOvrFunctionsBlueprintLibrary)


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformFunctions_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOvrFunctionsBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOvrFunctionsBlueprintLibrary(UOvrFunctionsBlueprintLibrary&&); \
	UOvrFunctionsBlueprintLibrary(const UOvrFunctionsBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOvrFunctionsBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOvrFunctionsBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOvrFunctionsBlueprintLibrary) \
	NO_API virtual ~UOvrFunctionsBlueprintLibrary();


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformFunctions_h_19_PROLOG
#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformFunctions_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformFunctions_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformFunctions_h_26_INCLASS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformFunctions_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OVRPLATFORM_API UClass* StaticClass<class UOvrFunctionsBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
