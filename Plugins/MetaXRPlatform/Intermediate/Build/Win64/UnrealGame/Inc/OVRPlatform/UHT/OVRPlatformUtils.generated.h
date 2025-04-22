// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OVRPlatformUtils.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FOvrId;
#ifdef OVRPLATFORM_OVRPlatformUtils_generated_h
#error "OVRPlatformUtils.generated.h already included, missing '#pragma once' in OVRPlatformUtils.h"
#endif
#define OVRPLATFORM_OVRPlatformUtils_generated_h

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformUtils_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMakeRandomSessionId); \
	DECLARE_FUNCTION(execEqualEqual_OvrIdOvrId); \
	DECLARE_FUNCTION(execConv_Int64ToOvrId); \
	DECLARE_FUNCTION(execConv_OvrIdToString);


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformUtils_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOvrPlatformUtilsLibrary(); \
	friend struct Z_Construct_UClass_UOvrPlatformUtilsLibrary_Statics; \
public: \
	DECLARE_CLASS(UOvrPlatformUtilsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OVRPlatform"), NO_API) \
	DECLARE_SERIALIZER(UOvrPlatformUtilsLibrary)


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformUtils_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOvrPlatformUtilsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOvrPlatformUtilsLibrary(UOvrPlatformUtilsLibrary&&); \
	UOvrPlatformUtilsLibrary(const UOvrPlatformUtilsLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOvrPlatformUtilsLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOvrPlatformUtilsLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOvrPlatformUtilsLibrary) \
	NO_API virtual ~UOvrPlatformUtilsLibrary();


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformUtils_h_10_PROLOG
#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformUtils_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformUtils_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformUtils_h_13_INCLASS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformUtils_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OVRPLATFORM_API UClass* StaticClass<class UOvrPlatformUtilsLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformUtils_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
