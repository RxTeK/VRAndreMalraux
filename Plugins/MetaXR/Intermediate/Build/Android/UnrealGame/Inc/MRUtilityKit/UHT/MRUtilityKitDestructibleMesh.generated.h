// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MRUtilityKitDestructibleMesh.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMRUKDestructibleGlobalMesh;
class AMRUKRoom;
class UPrimitiveComponent;
#ifdef MRUTILITYKIT_MRUtilityKitDestructibleMesh_generated_h
#error "MRUtilityKitDestructibleMesh.generated.h already included, missing '#pragma once' in MRUtilityKitDestructibleMesh.h"
#endif
#define MRUTILITYKIT_MRUtilityKitDestructibleMesh_generated_h

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_23_DELEGATE \
static void FOnMeshesGenerated_DelegateWrapper(const FMulticastScriptDelegate& OnMeshesGenerated);


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMRUKDestructibleMeshComponent(); \
	friend struct Z_Construct_UClass_UMRUKDestructibleMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UMRUKDestructibleMeshComponent, UProceduralMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MRUtilityKit"), NO_API) \
	DECLARE_SERIALIZER(UMRUKDestructibleMeshComponent)


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMRUKDestructibleMeshComponent(UMRUKDestructibleMeshComponent&&); \
	UMRUKDestructibleMeshComponent(const UMRUKDestructibleMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMRUKDestructibleMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMRUKDestructibleMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMRUKDestructibleMeshComponent) \
	NO_API virtual ~UMRUKDestructibleMeshComponent();


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_17_PROLOG
#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_20_INCLASS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MRUTILITYKIT_API UClass* StaticClass<class UMRUKDestructibleMeshComponent>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveGlobalMeshSegment); \
	DECLARE_FUNCTION(execCreateDestructibleMesh);


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMRUKDestructibleGlobalMesh(); \
	friend struct Z_Construct_UClass_AMRUKDestructibleGlobalMesh_Statics; \
public: \
	DECLARE_CLASS(AMRUKDestructibleGlobalMesh, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MRUtilityKit"), NO_API) \
	DECLARE_SERIALIZER(AMRUKDestructibleGlobalMesh)


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_74_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMRUKDestructibleGlobalMesh(AMRUKDestructibleGlobalMesh&&); \
	AMRUKDestructibleGlobalMesh(const AMRUKDestructibleGlobalMesh&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMRUKDestructibleGlobalMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMRUKDestructibleGlobalMesh); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMRUKDestructibleGlobalMesh) \
	NO_API virtual ~AMRUKDestructibleGlobalMesh();


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_71_PROLOG
#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_74_INCLASS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_74_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MRUTILITYKIT_API UClass* StaticClass<class AMRUKDestructibleGlobalMesh>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_133_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRoomRemoved); \
	DECLARE_FUNCTION(execOnRoomCreated); \
	DECLARE_FUNCTION(execAddDestructibleGlobalMesh); \
	DECLARE_FUNCTION(execFindDestructibleMeshForRoom);


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_133_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMRUKDestructibleGlobalMeshSpawner(); \
	friend struct Z_Construct_UClass_AMRUKDestructibleGlobalMeshSpawner_Statics; \
public: \
	DECLARE_CLASS(AMRUKDestructibleGlobalMeshSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MRUtilityKit"), NO_API) \
	DECLARE_SERIALIZER(AMRUKDestructibleGlobalMeshSpawner)


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_133_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMRUKDestructibleGlobalMeshSpawner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMRUKDestructibleGlobalMeshSpawner(AMRUKDestructibleGlobalMeshSpawner&&); \
	AMRUKDestructibleGlobalMeshSpawner(const AMRUKDestructibleGlobalMeshSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMRUKDestructibleGlobalMeshSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMRUKDestructibleGlobalMeshSpawner); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMRUKDestructibleGlobalMeshSpawner) \
	NO_API virtual ~AMRUKDestructibleGlobalMeshSpawner();


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_130_PROLOG
#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_133_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_133_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_133_INCLASS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_133_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MRUTILITYKIT_API UClass* StaticClass<class AMRUKDestructibleGlobalMeshSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
