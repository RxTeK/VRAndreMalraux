// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OVRPlatformPageRequests.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class EOvrBidirectionalArrayIteratorInputPins : uint8;
enum class EOvrForwardArrayIteratorInputPins : uint8;
enum class EOvrPageRequestOutputPins : uint8;
struct FLatentActionInfo;
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
struct FOvrProduct;
struct FOvrProductPages;
struct FOvrPurchase;
struct FOvrPurchasePages;
struct FOvrUser;
struct FOvrUserCapability;
struct FOvrUserCapabilityPages;
struct FOvrUserPages;
#ifdef OVRPLATFORM_OVRPlatformPageRequests_generated_h
#error "OVRPlatformPageRequests.generated.h already included, missing '#pragma once' in OVRPlatformPageRequests.h"
#endif
#define OVRPLATFORM_OVRPlatformPageRequests_generated_h

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformPageRequests_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFetchUserCapabilityPage); \
	DECLARE_FUNCTION(execFetchUserPage); \
	DECLARE_FUNCTION(execFetchPurchasePage); \
	DECLARE_FUNCTION(execFetchProductPage); \
	DECLARE_FUNCTION(execFetchLeaderboardEntryPage); \
	DECLARE_FUNCTION(execFetchLeaderboardPage); \
	DECLARE_FUNCTION(execFetchDestinationPage); \
	DECLARE_FUNCTION(execFetchCowatchViewerPage); \
	DECLARE_FUNCTION(execFetchChallengeEntryPage); \
	DECLARE_FUNCTION(execFetchChallengePage); \
	DECLARE_FUNCTION(execFetchBlockedUserPage); \
	DECLARE_FUNCTION(execFetchApplicationInvitePage); \
	DECLARE_FUNCTION(execFetchAchievementProgressPage); \
	DECLARE_FUNCTION(execFetchAchievementDefinitionPage);


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformPageRequests_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOvrPageRequestsBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UOvrPageRequestsBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UOvrPageRequestsBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OVRPlatform"), NO_API) \
	DECLARE_SERIALIZER(UOvrPageRequestsBlueprintLibrary)


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformPageRequests_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOvrPageRequestsBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOvrPageRequestsBlueprintLibrary(UOvrPageRequestsBlueprintLibrary&&); \
	UOvrPageRequestsBlueprintLibrary(const UOvrPageRequestsBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOvrPageRequestsBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOvrPageRequestsBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOvrPageRequestsBlueprintLibrary) \
	NO_API virtual ~UOvrPageRequestsBlueprintLibrary();


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformPageRequests_h_37_PROLOG
#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformPageRequests_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformPageRequests_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformPageRequests_h_44_INCLASS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformPageRequests_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OVRPLATFORM_API UClass* StaticClass<class UOvrPageRequestsBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformPageRequests_h


#define FOREACH_ENUM_EOVRFORWARDARRAYITERATORINPUTPINS(op) \
	op(EOvrForwardArrayIteratorInputPins::Execute) \
	op(EOvrForwardArrayIteratorInputPins::NextPage) 

enum class EOvrForwardArrayIteratorInputPins : uint8;
template<> struct TIsUEnumClass<EOvrForwardArrayIteratorInputPins> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrForwardArrayIteratorInputPins>();

#define FOREACH_ENUM_EOVRBIDIRECTIONALARRAYITERATORINPUTPINS(op) \
	op(EOvrBidirectionalArrayIteratorInputPins::Execute) \
	op(EOvrBidirectionalArrayIteratorInputPins::NextPage) \
	op(EOvrBidirectionalArrayIteratorInputPins::PreviousPage) 

enum class EOvrBidirectionalArrayIteratorInputPins : uint8;
template<> struct TIsUEnumClass<EOvrBidirectionalArrayIteratorInputPins> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrBidirectionalArrayIteratorInputPins>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
