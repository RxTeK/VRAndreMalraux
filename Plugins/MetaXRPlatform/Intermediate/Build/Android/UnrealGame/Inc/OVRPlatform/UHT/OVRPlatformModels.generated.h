// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OVRPlatformModels.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FOvrAchievementDefinition;
struct FOvrAchievementDefinitionPages;
struct FOvrAchievementProgress;
struct FOvrAchievementProgressPages;
struct FOvrApplicationInvite;
struct FOvrApplicationInvitePages;
struct FOvrBlockedUser;
struct FOvrBlockedUserPages;
struct FOvrChallenge;
struct FOvrChallengeEntry;
struct FOvrChallengeEntryPages;
struct FOvrChallengePages;
struct FOvrCowatchViewer;
struct FOvrCowatchViewerPages;
struct FOvrDestination;
struct FOvrDestinationPages;
struct FOvrLeaderboard;
struct FOvrLeaderboardEntry;
struct FOvrLeaderboardEntryPages;
struct FOvrLeaderboardPages;
struct FOvrMicrophone;
struct FOvrPacket;
struct FOvrProduct;
struct FOvrProductPages;
struct FOvrPurchase;
struct FOvrPurchasePages;
struct FOvrUser;
struct FOvrUserCapability;
struct FOvrUserCapabilityPages;
struct FOvrUserPages;
#ifdef OVRPLATFORM_OVRPlatformModels_generated_h
#error "OVRPlatformModels.generated.h already included, missing '#pragma once' in OVRPlatformModels.h"
#endif
#define OVRPLATFORM_OVRPlatformModels_generated_h

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrAbuseReportRecording_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrAbuseReportRecording>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrAchievementDefinition_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrAchievementDefinition>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_86_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrAchievementDefinitionPages_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrAchievementDefinitionPages>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_112_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAchievementDefinitionPages_HasNextPage); \
	DECLARE_FUNCTION(execAchievementDefinitionPages_GetSize); \
	DECLARE_FUNCTION(execAchievementDefinitionPages_GetNextUrl); \
	DECLARE_FUNCTION(execAchievementDefinitionPages_GetElement);


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_112_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOvrAchievementDefinitionPagesMethods(); \
	friend struct Z_Construct_UClass_UOvrAchievementDefinitionPagesMethods_Statics; \
public: \
	DECLARE_CLASS(UOvrAchievementDefinitionPagesMethods, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OVRPlatform"), NO_API) \
	DECLARE_SERIALIZER(UOvrAchievementDefinitionPagesMethods)


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_112_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOvrAchievementDefinitionPagesMethods(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOvrAchievementDefinitionPagesMethods(UOvrAchievementDefinitionPagesMethods&&); \
	UOvrAchievementDefinitionPagesMethods(const UOvrAchievementDefinitionPagesMethods&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOvrAchievementDefinitionPagesMethods); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOvrAchievementDefinitionPagesMethods); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOvrAchievementDefinitionPagesMethods) \
	NO_API virtual ~UOvrAchievementDefinitionPagesMethods();


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_107_PROLOG
#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_112_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_112_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_112_INCLASS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_112_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OVRPLATFORM_API UClass* StaticClass<class UOvrAchievementDefinitionPagesMethods>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_142_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrAchievementProgress_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrAchievementProgress>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_191_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrAchievementProgressPages_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrAchievementProgressPages>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_217_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAchievementProgressPages_HasNextPage); \
	DECLARE_FUNCTION(execAchievementProgressPages_GetSize); \
	DECLARE_FUNCTION(execAchievementProgressPages_GetNextUrl); \
	DECLARE_FUNCTION(execAchievementProgressPages_GetElement);


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_217_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOvrAchievementProgressPagesMethods(); \
	friend struct Z_Construct_UClass_UOvrAchievementProgressPagesMethods_Statics; \
public: \
	DECLARE_CLASS(UOvrAchievementProgressPagesMethods, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OVRPlatform"), NO_API) \
	DECLARE_SERIALIZER(UOvrAchievementProgressPagesMethods)


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_217_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOvrAchievementProgressPagesMethods(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOvrAchievementProgressPagesMethods(UOvrAchievementProgressPagesMethods&&); \
	UOvrAchievementProgressPagesMethods(const UOvrAchievementProgressPagesMethods&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOvrAchievementProgressPagesMethods); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOvrAchievementProgressPagesMethods); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOvrAchievementProgressPagesMethods) \
	NO_API virtual ~UOvrAchievementProgressPagesMethods();


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_212_PROLOG
#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_217_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_217_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_217_INCLASS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_217_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OVRPLATFORM_API UClass* StaticClass<class UOvrAchievementProgressPagesMethods>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_247_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrAchievementUpdate_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrAchievementUpdate>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_279_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrAppDownloadProgressResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrAppDownloadProgressResult>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_317_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrAppDownloadResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrAppDownloadResult>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_354_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrApplicationVersion_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrApplicationVersion>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_409_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrAssetFileDeleteResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrAssetFileDeleteResult>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_450_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrAssetFileDownloadCancelResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrAssetFileDownloadCancelResult>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_490_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrAssetFileDownloadResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrAssetFileDownloadResult>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_525_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrAssetFileDownloadUpdate_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrAssetFileDownloadUpdate>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_568_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrAvatarEditorResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrAvatarEditorResult>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_595_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrBlockedUser_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrBlockedUser>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_621_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrBlockedUserPages_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrBlockedUserPages>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_647_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBlockedUserPages_HasNextPage); \
	DECLARE_FUNCTION(execBlockedUserPages_GetSize); \
	DECLARE_FUNCTION(execBlockedUserPages_GetNextUrl); \
	DECLARE_FUNCTION(execBlockedUserPages_GetElement);


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_647_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOvrBlockedUserPagesMethods(); \
	friend struct Z_Construct_UClass_UOvrBlockedUserPagesMethods_Statics; \
public: \
	DECLARE_CLASS(UOvrBlockedUserPagesMethods, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OVRPlatform"), NO_API) \
	DECLARE_SERIALIZER(UOvrBlockedUserPagesMethods)


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_647_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOvrBlockedUserPagesMethods(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOvrBlockedUserPagesMethods(UOvrBlockedUserPagesMethods&&); \
	UOvrBlockedUserPagesMethods(const UOvrBlockedUserPagesMethods&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOvrBlockedUserPagesMethods); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOvrBlockedUserPagesMethods); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOvrBlockedUserPagesMethods) \
	NO_API virtual ~UOvrBlockedUserPagesMethods();


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_642_PROLOG
#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_647_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_647_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_647_INCLASS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_647_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OVRPLATFORM_API UClass* StaticClass<class UOvrBlockedUserPagesMethods>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_673_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrContentRating_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrContentRating>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_717_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrCowatchViewer_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrCowatchViewer>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_744_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrCowatchViewerPages_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrCowatchViewerPages>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_770_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCowatchViewerPages_HasNextPage); \
	DECLARE_FUNCTION(execCowatchViewerPages_GetSize); \
	DECLARE_FUNCTION(execCowatchViewerPages_GetNextUrl); \
	DECLARE_FUNCTION(execCowatchViewerPages_GetElement);


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_770_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOvrCowatchViewerPagesMethods(); \
	friend struct Z_Construct_UClass_UOvrCowatchViewerPagesMethods_Statics; \
public: \
	DECLARE_CLASS(UOvrCowatchViewerPagesMethods, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OVRPlatform"), NO_API) \
	DECLARE_SERIALIZER(UOvrCowatchViewerPagesMethods)


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_770_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOvrCowatchViewerPagesMethods(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOvrCowatchViewerPagesMethods(UOvrCowatchViewerPagesMethods&&); \
	UOvrCowatchViewerPagesMethods(const UOvrCowatchViewerPagesMethods&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOvrCowatchViewerPagesMethods); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOvrCowatchViewerPagesMethods); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOvrCowatchViewerPagesMethods) \
	NO_API virtual ~UOvrCowatchViewerPagesMethods();


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_765_PROLOG
#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_770_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_770_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_770_INCLASS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_770_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OVRPLATFORM_API UClass* StaticClass<class UOvrCowatchViewerPagesMethods>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_799_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrCowatchViewerUpdate_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrCowatchViewerUpdate>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_830_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrCowatchingState_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrCowatchingState>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_860_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrDestination_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrDestination>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_902_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrDestinationPages_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrDestinationPages>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_928_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDestinationPages_HasNextPage); \
	DECLARE_FUNCTION(execDestinationPages_GetSize); \
	DECLARE_FUNCTION(execDestinationPages_GetNextUrl); \
	DECLARE_FUNCTION(execDestinationPages_GetElement);


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_928_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOvrDestinationPagesMethods(); \
	friend struct Z_Construct_UClass_UOvrDestinationPagesMethods_Statics; \
public: \
	DECLARE_CLASS(UOvrDestinationPagesMethods, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OVRPlatform"), NO_API) \
	DECLARE_SERIALIZER(UOvrDestinationPagesMethods)


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_928_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOvrDestinationPagesMethods(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOvrDestinationPagesMethods(UOvrDestinationPagesMethods&&); \
	UOvrDestinationPagesMethods(const UOvrDestinationPagesMethods&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOvrDestinationPagesMethods); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOvrDestinationPagesMethods); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOvrDestinationPagesMethods) \
	NO_API virtual ~UOvrDestinationPagesMethods();


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_923_PROLOG
#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_928_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_928_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_928_INCLASS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_928_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OVRPLATFORM_API UClass* StaticClass<class UOvrDestinationPagesMethods>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_958_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrError_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrError>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_1022_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrGroupPresenceJoinIntent_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrGroupPresenceJoinIntent>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_1071_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrGroupPresenceLeaveIntent_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrGroupPresenceLeaveIntent>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_1117_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrHttpTransferUpdate_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrHttpTransferUpdate>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_1156_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrInstalledApplication_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrInstalledApplication>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_1206_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrInvitePanelResultInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrInvitePanelResultInfo>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_1238_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrLanguagePackInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrLanguagePackInfo>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_1274_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrAssetDetails_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrAssetDetails>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_1335_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrLaunchBlockFlowResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrLaunchBlockFlowResult>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_1374_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrLaunchFriendRequestFlowResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrLaunchFriendRequestFlowResult>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_1408_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrLaunchReportFlowResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrLaunchReportFlowResult>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_1442_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrLaunchUnblockFlowResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrLaunchUnblockFlowResult>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_1477_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrLeaderboard_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrLeaderboard>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_1508_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrLeaderboardPages_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrLeaderboardPages>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_1534_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLeaderboardPages_HasNextPage); \
	DECLARE_FUNCTION(execLeaderboardPages_GetSize); \
	DECLARE_FUNCTION(execLeaderboardPages_GetNextUrl); \
	DECLARE_FUNCTION(execLeaderboardPages_GetElement);


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_1534_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOvrLeaderboardPagesMethods(); \
	friend struct Z_Construct_UClass_UOvrLeaderboardPagesMethods_Statics; \
public: \
	DECLARE_CLASS(UOvrLeaderboardPagesMethods, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OVRPlatform"), NO_API) \
	DECLARE_SERIALIZER(UOvrLeaderboardPagesMethods)


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_1534_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOvrLeaderboardPagesMethods(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOvrLeaderboardPagesMethods(UOvrLeaderboardPagesMethods&&); \
	UOvrLeaderboardPagesMethods(const UOvrLeaderboardPagesMethods&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOvrLeaderboardPagesMethods); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOvrLeaderboardPagesMethods); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOvrLeaderboardPagesMethods) \
	NO_API virtual ~UOvrLeaderboardPagesMethods();


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_1529_PROLOG
#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_1534_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_1534_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_1534_INCLASS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_1534_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OVRPLATFORM_API UClass* StaticClass<class UOvrLeaderboardPagesMethods>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_1563_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrLeaderboardUpdateStatus_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrLeaderboardUpdateStatus>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_1598_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrLinkedAccount_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrLinkedAccount>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_1643_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrLivestreamingApplicationStatus_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrLivestreamingApplicationStatus>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_1671_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrLivestreamingStartResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrLivestreamingStartResult>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_1703_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrLivestreamingStatus_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrLivestreamingStatus>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_1751_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrLivestreamingVideoStats_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrLivestreamingVideoStats>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_1787_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrManagedInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrManagedInfo>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_1869_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrMicrophone_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrMicrophone>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_1895_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMicrophone_Stop); \
	DECLARE_FUNCTION(execMicrophone_Start); \
	DECLARE_FUNCTION(execMicrophone_SetAcceptableRecordingDelayHint);


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_1895_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOvrMicrophoneMethods(); \
	friend struct Z_Construct_UClass_UOvrMicrophoneMethods_Statics; \
public: \
	DECLARE_CLASS(UOvrMicrophoneMethods, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OVRPlatform"), NO_API) \
	DECLARE_SERIALIZER(UOvrMicrophoneMethods)


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_1895_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOvrMicrophoneMethods(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOvrMicrophoneMethods(UOvrMicrophoneMethods&&); \
	UOvrMicrophoneMethods(const UOvrMicrophoneMethods&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOvrMicrophoneMethods); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOvrMicrophoneMethods); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOvrMicrophoneMethods) \
	NO_API virtual ~UOvrMicrophoneMethods();


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_1892_PROLOG
#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_1895_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_1895_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_1895_INCLASS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_1895_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OVRPLATFORM_API UClass* StaticClass<class UOvrMicrophoneMethods>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_2000_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrMicrophoneAvailabilityState_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrMicrophoneAvailabilityState>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_2030_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrNetSyncConnection_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrNetSyncConnection>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_2088_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrNetSyncSession_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrNetSyncSession>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_2135_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrNetSyncSessionsChangedNotification_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrNetSyncSessionsChangedNotification>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_2167_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrNetSyncSetSessionPropertyResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrNetSyncSetSessionPropertyResult>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_2195_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrNetSyncVoipAttenuationValue_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrNetSyncVoipAttenuationValue>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_2229_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrOrgScopedID_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrOrgScopedID>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_2259_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrPacket_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrPacket>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_2298_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPacket_Free);


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_2298_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOvrPacketMethods(); \
	friend struct Z_Construct_UClass_UOvrPacketMethods_Statics; \
public: \
	DECLARE_CLASS(UOvrPacketMethods, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OVRPlatform"), NO_API) \
	DECLARE_SERIALIZER(UOvrPacketMethods)


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_2298_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOvrPacketMethods(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOvrPacketMethods(UOvrPacketMethods&&); \
	UOvrPacketMethods(const UOvrPacketMethods&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOvrPacketMethods); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOvrPacketMethods); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOvrPacketMethods) \
	NO_API virtual ~UOvrPacketMethods();


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_2295_PROLOG
#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_2298_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_2298_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_2298_INCLASS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_2298_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OVRPLATFORM_API UClass* StaticClass<class UOvrPacketMethods>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_2318_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrPartyID_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrPartyID>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_2346_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrPartyUpdateNotification_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrPartyUpdateNotification>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_2408_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrPid_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrPid>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_2432_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrPlatformInitialize_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrPlatformInitialize>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_2479_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrPrice_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrPrice>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_2511_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrPaidOffer_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrPaidOffer>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_2557_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrPurchase_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrPurchase>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_2604_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrPurchasePages_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrPurchasePages>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_2630_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPurchasePages_HasNextPage); \
	DECLARE_FUNCTION(execPurchasePages_GetSize); \
	DECLARE_FUNCTION(execPurchasePages_GetNextUrl); \
	DECLARE_FUNCTION(execPurchasePages_GetElement);


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_2630_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOvrPurchasePagesMethods(); \
	friend struct Z_Construct_UClass_UOvrPurchasePagesMethods_Statics; \
public: \
	DECLARE_CLASS(UOvrPurchasePagesMethods, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OVRPlatform"), NO_API) \
	DECLARE_SERIALIZER(UOvrPurchasePagesMethods)


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_2630_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOvrPurchasePagesMethods(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOvrPurchasePagesMethods(UOvrPurchasePagesMethods&&); \
	UOvrPurchasePagesMethods(const UOvrPurchasePagesMethods&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOvrPurchasePagesMethods); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOvrPurchasePagesMethods); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOvrPurchasePagesMethods) \
	NO_API virtual ~UOvrPurchasePagesMethods();


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_2625_PROLOG
#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_2630_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_2630_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_2630_INCLASS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_2630_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OVRPLATFORM_API UClass* StaticClass<class UOvrPurchasePagesMethods>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_2660_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrPushNotificationResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrPushNotificationResult>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_2688_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrRejoinDialogResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrRejoinDialogResult>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_2712_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrSdkAccount_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrSdkAccount>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_2748_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrShareMediaResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrShareMediaResult>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_2783_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrSupplementaryMetric_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrSupplementaryMetric>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_2811_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrSystemVoipState_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrSystemVoipState>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_2857_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrTrialOffer_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrTrialOffer>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_2917_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrBillingPlan_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrBillingPlan>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_2948_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrProduct_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrProduct>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3011_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrProductPages_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrProductPages>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3037_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execProductPages_HasNextPage); \
	DECLARE_FUNCTION(execProductPages_GetSize); \
	DECLARE_FUNCTION(execProductPages_GetNextUrl); \
	DECLARE_FUNCTION(execProductPages_GetElement);


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3037_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOvrProductPagesMethods(); \
	friend struct Z_Construct_UClass_UOvrProductPagesMethods_Statics; \
public: \
	DECLARE_CLASS(UOvrProductPagesMethods, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OVRPlatform"), NO_API) \
	DECLARE_SERIALIZER(UOvrProductPagesMethods)


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3037_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOvrProductPagesMethods(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOvrProductPagesMethods(UOvrProductPagesMethods&&); \
	UOvrProductPagesMethods(const UOvrProductPagesMethods&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOvrProductPagesMethods); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOvrProductPagesMethods); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOvrProductPagesMethods) \
	NO_API virtual ~UOvrProductPagesMethods();


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3032_PROLOG
#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3037_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3037_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3037_INCLASS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3037_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OVRPLATFORM_API UClass* StaticClass<class UOvrProductPagesMethods>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3068_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrUser_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrUser>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3151_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrApplicationInvite_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrApplicationInvite>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3203_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrApplicationInvitePages_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrApplicationInvitePages>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3229_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplicationInvitePages_HasNextPage); \
	DECLARE_FUNCTION(execApplicationInvitePages_GetSize); \
	DECLARE_FUNCTION(execApplicationInvitePages_GetNextUrl); \
	DECLARE_FUNCTION(execApplicationInvitePages_GetElement);


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3229_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOvrApplicationInvitePagesMethods(); \
	friend struct Z_Construct_UClass_UOvrApplicationInvitePagesMethods_Statics; \
public: \
	DECLARE_CLASS(UOvrApplicationInvitePagesMethods, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OVRPlatform"), NO_API) \
	DECLARE_SERIALIZER(UOvrApplicationInvitePagesMethods)


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3229_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOvrApplicationInvitePagesMethods(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOvrApplicationInvitePagesMethods(UOvrApplicationInvitePagesMethods&&); \
	UOvrApplicationInvitePagesMethods(const UOvrApplicationInvitePagesMethods&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOvrApplicationInvitePagesMethods); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOvrApplicationInvitePagesMethods); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOvrApplicationInvitePagesMethods) \
	NO_API virtual ~UOvrApplicationInvitePagesMethods();


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3224_PROLOG
#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3229_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3229_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3229_INCLASS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3229_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OVRPLATFORM_API UClass* StaticClass<class UOvrApplicationInvitePagesMethods>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3258_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrChallengeEntry_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrChallengeEntry>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3308_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrChallengeEntryPages_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrChallengeEntryPages>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3334_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execChallengeEntryPages_HasPreviousPage); \
	DECLARE_FUNCTION(execChallengeEntryPages_HasNextPage); \
	DECLARE_FUNCTION(execChallengeEntryPages_GetTotalCount); \
	DECLARE_FUNCTION(execChallengeEntryPages_GetSize); \
	DECLARE_FUNCTION(execChallengeEntryPages_GetPreviousUrl); \
	DECLARE_FUNCTION(execChallengeEntryPages_GetNextUrl); \
	DECLARE_FUNCTION(execChallengeEntryPages_GetElement);


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3334_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOvrChallengeEntryPagesMethods(); \
	friend struct Z_Construct_UClass_UOvrChallengeEntryPagesMethods_Statics; \
public: \
	DECLARE_CLASS(UOvrChallengeEntryPagesMethods, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OVRPlatform"), NO_API) \
	DECLARE_SERIALIZER(UOvrChallengeEntryPagesMethods)


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3334_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOvrChallengeEntryPagesMethods(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOvrChallengeEntryPagesMethods(UOvrChallengeEntryPagesMethods&&); \
	UOvrChallengeEntryPagesMethods(const UOvrChallengeEntryPagesMethods&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOvrChallengeEntryPagesMethods); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOvrChallengeEntryPagesMethods); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOvrChallengeEntryPagesMethods) \
	NO_API virtual ~UOvrChallengeEntryPagesMethods();


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3329_PROLOG
#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3334_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3334_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3334_INCLASS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3334_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OVRPLATFORM_API UClass* StaticClass<class UOvrChallengeEntryPagesMethods>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3380_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrLeaderboardEntry_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrLeaderboardEntry>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3450_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrLeaderboardEntryPages_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrLeaderboardEntryPages>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3476_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLeaderboardEntryPages_HasPreviousPage); \
	DECLARE_FUNCTION(execLeaderboardEntryPages_HasNextPage); \
	DECLARE_FUNCTION(execLeaderboardEntryPages_GetTotalCount); \
	DECLARE_FUNCTION(execLeaderboardEntryPages_GetSize); \
	DECLARE_FUNCTION(execLeaderboardEntryPages_GetPreviousUrl); \
	DECLARE_FUNCTION(execLeaderboardEntryPages_GetNextUrl); \
	DECLARE_FUNCTION(execLeaderboardEntryPages_GetElement);


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3476_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOvrLeaderboardEntryPagesMethods(); \
	friend struct Z_Construct_UClass_UOvrLeaderboardEntryPagesMethods_Statics; \
public: \
	DECLARE_CLASS(UOvrLeaderboardEntryPagesMethods, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OVRPlatform"), NO_API) \
	DECLARE_SERIALIZER(UOvrLeaderboardEntryPagesMethods)


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3476_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOvrLeaderboardEntryPagesMethods(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOvrLeaderboardEntryPagesMethods(UOvrLeaderboardEntryPagesMethods&&); \
	UOvrLeaderboardEntryPagesMethods(const UOvrLeaderboardEntryPagesMethods&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOvrLeaderboardEntryPagesMethods); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOvrLeaderboardEntryPagesMethods); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOvrLeaderboardEntryPagesMethods) \
	NO_API virtual ~UOvrLeaderboardEntryPagesMethods();


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3471_PROLOG
#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3476_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3476_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3476_INCLASS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3476_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OVRPLATFORM_API UClass* StaticClass<class UOvrLeaderboardEntryPagesMethods>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3532_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrSendInvitesResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrSendInvitesResult>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3560_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrUserAccountAgeCategory_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrUserAccountAgeCategory>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3583_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrUserPages_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrUserPages>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3609_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUserPages_HasNextPage); \
	DECLARE_FUNCTION(execUserPages_GetSize); \
	DECLARE_FUNCTION(execUserPages_GetNextUrl); \
	DECLARE_FUNCTION(execUserPages_GetElement);


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3609_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOvrUserPagesMethods(); \
	friend struct Z_Construct_UClass_UOvrUserPagesMethods_Statics; \
public: \
	DECLARE_CLASS(UOvrUserPagesMethods, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OVRPlatform"), NO_API) \
	DECLARE_SERIALIZER(UOvrUserPagesMethods)


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3609_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOvrUserPagesMethods(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOvrUserPagesMethods(UOvrUserPagesMethods&&); \
	UOvrUserPagesMethods(const UOvrUserPagesMethods&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOvrUserPagesMethods); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOvrUserPagesMethods); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOvrUserPagesMethods) \
	NO_API virtual ~UOvrUserPagesMethods();


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3604_PROLOG
#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3609_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3609_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3609_INCLASS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3609_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OVRPLATFORM_API UClass* StaticClass<class UOvrUserPagesMethods>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3642_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrChallenge_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrChallenge>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3716_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrChallengePages_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrChallengePages>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3742_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execChallengePages_HasPreviousPage); \
	DECLARE_FUNCTION(execChallengePages_HasNextPage); \
	DECLARE_FUNCTION(execChallengePages_GetTotalCount); \
	DECLARE_FUNCTION(execChallengePages_GetSize); \
	DECLARE_FUNCTION(execChallengePages_GetPreviousUrl); \
	DECLARE_FUNCTION(execChallengePages_GetNextUrl); \
	DECLARE_FUNCTION(execChallengePages_GetElement);


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3742_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOvrChallengePagesMethods(); \
	friend struct Z_Construct_UClass_UOvrChallengePagesMethods_Statics; \
public: \
	DECLARE_CLASS(UOvrChallengePagesMethods, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OVRPlatform"), NO_API) \
	DECLARE_SERIALIZER(UOvrChallengePagesMethods)


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3742_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOvrChallengePagesMethods(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOvrChallengePagesMethods(UOvrChallengePagesMethods&&); \
	UOvrChallengePagesMethods(const UOvrChallengePagesMethods&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOvrChallengePagesMethods); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOvrChallengePagesMethods); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOvrChallengePagesMethods) \
	NO_API virtual ~UOvrChallengePagesMethods();


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3737_PROLOG
#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3742_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3742_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3742_INCLASS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3742_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OVRPLATFORM_API UClass* StaticClass<class UOvrChallengePagesMethods>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3799_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrLaunchDetails_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrLaunchDetails>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3866_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrLaunchInvitePanelFlowResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrLaunchInvitePanelFlowResult>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3894_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrParty_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrParty>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3934_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrUserCapability_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrUserCapability>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_3982_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrUserCapabilityPages_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrUserCapabilityPages>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_4008_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUserCapabilityPages_HasNextPage); \
	DECLARE_FUNCTION(execUserCapabilityPages_GetSize); \
	DECLARE_FUNCTION(execUserCapabilityPages_GetNextUrl); \
	DECLARE_FUNCTION(execUserCapabilityPages_GetElement);


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_4008_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOvrUserCapabilityPagesMethods(); \
	friend struct Z_Construct_UClass_UOvrUserCapabilityPagesMethods_Statics; \
public: \
	DECLARE_CLASS(UOvrUserCapabilityPagesMethods, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OVRPlatform"), NO_API) \
	DECLARE_SERIALIZER(UOvrUserCapabilityPagesMethods)


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_4008_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOvrUserCapabilityPagesMethods(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOvrUserCapabilityPagesMethods(UOvrUserCapabilityPagesMethods&&); \
	UOvrUserCapabilityPagesMethods(const UOvrUserCapabilityPagesMethods&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOvrUserCapabilityPagesMethods); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOvrUserCapabilityPagesMethods); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOvrUserCapabilityPagesMethods) \
	NO_API virtual ~UOvrUserCapabilityPagesMethods();


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_4003_PROLOG
#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_4008_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_4008_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_4008_INCLASS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_4008_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OVRPLATFORM_API UClass* StaticClass<class UOvrUserCapabilityPagesMethods>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_4038_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrUserDataStoreUpdateResponse_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrUserDataStoreUpdateResponse>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_4070_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrUserProof_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrUserProof>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_4094_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrUserReportID_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrUserReportID>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_4124_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrVoipDecoder_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrVoipDecoder>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_4149_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOvrVoipDecoderMethods(); \
	friend struct Z_Construct_UClass_UOvrVoipDecoderMethods_Statics; \
public: \
	DECLARE_CLASS(UOvrVoipDecoderMethods, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OVRPlatform"), NO_API) \
	DECLARE_SERIALIZER(UOvrVoipDecoderMethods)


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_4149_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOvrVoipDecoderMethods(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOvrVoipDecoderMethods(UOvrVoipDecoderMethods&&); \
	UOvrVoipDecoderMethods(const UOvrVoipDecoderMethods&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOvrVoipDecoderMethods); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOvrVoipDecoderMethods); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOvrVoipDecoderMethods) \
	NO_API virtual ~UOvrVoipDecoderMethods();


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_4146_PROLOG
#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_4149_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_4149_INCLASS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_4149_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OVRPLATFORM_API UClass* StaticClass<class UOvrVoipDecoderMethods>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_4176_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOvrVoipEncoder_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OVRPLATFORM_API UScriptStruct* StaticStruct<struct FOvrVoipEncoder>();

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_4202_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOvrVoipEncoderMethods(); \
	friend struct Z_Construct_UClass_UOvrVoipEncoderMethods_Statics; \
public: \
	DECLARE_CLASS(UOvrVoipEncoderMethods, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OVRPlatform"), NO_API) \
	DECLARE_SERIALIZER(UOvrVoipEncoderMethods)


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_4202_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOvrVoipEncoderMethods(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOvrVoipEncoderMethods(UOvrVoipEncoderMethods&&); \
	UOvrVoipEncoderMethods(const UOvrVoipEncoderMethods&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOvrVoipEncoderMethods); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOvrVoipEncoderMethods); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOvrVoipEncoderMethods) \
	NO_API virtual ~UOvrVoipEncoderMethods();


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_4199_PROLOG
#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_4202_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_4202_INCLASS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h_4202_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OVRPLATFORM_API UClass* StaticClass<class UOvrVoipEncoderMethods>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformModels_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
