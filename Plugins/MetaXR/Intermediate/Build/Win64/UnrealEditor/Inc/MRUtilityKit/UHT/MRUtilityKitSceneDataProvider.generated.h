// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MRUtilityKitSceneDataProvider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MRUTILITYKIT_MRUtilityKitSceneDataProvider_generated_h
#error "MRUtilityKitSceneDataProvider.generated.h already included, missing '#pragma once' in MRUtilityKitSceneDataProvider.h"
#endif
#define MRUTILITYKIT_MRUtilityKitSceneDataProvider_generated_h

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitSceneDataProvider_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRoom);


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitSceneDataProvider_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMRUKSceneDataProvider(); \
	friend struct Z_Construct_UClass_AMRUKSceneDataProvider_Statics; \
public: \
	DECLARE_CLASS(AMRUKSceneDataProvider, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MRUtilityKit"), NO_API) \
	DECLARE_SERIALIZER(AMRUKSceneDataProvider)


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitSceneDataProvider_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMRUKSceneDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMRUKSceneDataProvider(AMRUKSceneDataProvider&&); \
	AMRUKSceneDataProvider(const AMRUKSceneDataProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMRUKSceneDataProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMRUKSceneDataProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMRUKSceneDataProvider) \
	NO_API virtual ~AMRUKSceneDataProvider();


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitSceneDataProvider_h_10_PROLOG
#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitSceneDataProvider_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitSceneDataProvider_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitSceneDataProvider_h_18_INCLASS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitSceneDataProvider_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MRUTILITYKIT_API UClass* StaticClass<class AMRUKSceneDataProvider>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitSceneDataProvider_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FJSONData_Statics; \
	MRUTILITYKIT_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> MRUTILITYKIT_API UScriptStruct* StaticStruct<struct FJSONData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitSceneDataProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
