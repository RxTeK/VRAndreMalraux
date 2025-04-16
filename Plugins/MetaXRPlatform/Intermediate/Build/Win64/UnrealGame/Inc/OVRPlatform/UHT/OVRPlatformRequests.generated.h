// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OVRPlatformRequests.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class EOvrAppAgeCategory : uint8;
enum class EOvrLeaderboardFilterType : uint8;
enum class EOvrLeaderboardStartAt : uint8;
enum class EOvrMediaContentType : uint8;
enum class EOvrReportRequestResponse : uint8;
enum class EOvrRequestOutputPins : uint8;
struct FLatentActionInfo;
struct FOvrAchievementDefinitionPages;
struct FOvrAchievementProgressPages;
struct FOvrAchievementUpdate;
struct FOvrAppDownloadProgressResult;
struct FOvrAppDownloadResult;
struct FOvrApplicationInvitePages;
struct FOvrApplicationOptions;
struct FOvrApplicationVersion;
struct FOvrAssetDetails;
struct FOvrAssetFileDeleteResult;
struct FOvrAssetFileDownloadCancelResult;
struct FOvrAssetFileDownloadResult;
struct FOvrAvatarEditorOptions;
struct FOvrAvatarEditorResult;
struct FOvrBlockedUserPages;
struct FOvrChallenge;
struct FOvrChallengeEntryPages;
struct FOvrChallengeOptions;
struct FOvrChallengePages;
struct FOvrCowatchingState;
struct FOvrCowatchViewerPages;
struct FOvrDestinationPages;
struct FOvrGroupPresenceOptions;
struct FOvrId;
struct FOvrInviteOptions;
struct FOvrInvitePanelResultInfo;
struct FOvrLaunchBlockFlowResult;
struct FOvrLaunchFriendRequestFlowResult;
struct FOvrLaunchUnblockFlowResult;
struct FOvrLeaderboardEntryPages;
struct FOvrLeaderboardPages;
struct FOvrLeaderboardUpdateStatus;
struct FOvrLinkedAccount;
struct FOvrMicrophoneAvailabilityState;
struct FOvrMultiplayerErrorOptions;
struct FOvrOrgScopedID;
struct FOvrParty;
struct FOvrProductPages;
struct FOvrPurchase;
struct FOvrPurchasePages;
struct FOvrPushNotificationResult;
struct FOvrRejoinDialogResult;
struct FOvrRichPresenceOptions;
struct FOvrRosterOptions;
struct FOvrSdkAccount;
struct FOvrSendInvitesResult;
struct FOvrShareMediaResult;
struct FOvrSystemVoipState;
struct FOvrUser;
struct FOvrUserAccountAgeCategory;
struct FOvrUserOptions;
struct FOvrUserPages;
struct FOvrUserProof;
#ifdef OVRPLATFORM_OVRPlatformRequests_generated_h
#error "OVRPlatformRequests.generated.h already included, missing '#pragma once' in OVRPlatformRequests.h"
#endif
#define OVRPLATFORM_OVRPlatformRequests_generated_h

#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformRequests_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execVoip_SetSystemVoipSuppressed); \
	DECLARE_FUNCTION(execVoip_GetMicrophoneAvailability); \
	DECLARE_FUNCTION(execUserAgeCategory_Report); \
	DECLARE_FUNCTION(execUserAgeCategory_Get); \
	DECLARE_FUNCTION(execUser_LaunchUnblockFlow); \
	DECLARE_FUNCTION(execUser_LaunchFriendRequestFlow); \
	DECLARE_FUNCTION(execUser_LaunchBlockFlow); \
	DECLARE_FUNCTION(execUser_GetUserProof); \
	DECLARE_FUNCTION(execUser_GetSdkAccounts); \
	DECLARE_FUNCTION(execUser_GetOrgScopedID); \
	DECLARE_FUNCTION(execUser_GetLoggedInUserManagedInfo); \
	DECLARE_FUNCTION(execUser_GetLoggedInUserFriends); \
	DECLARE_FUNCTION(execUser_GetLoggedInUser); \
	DECLARE_FUNCTION(execUser_GetLinkedAccounts); \
	DECLARE_FUNCTION(execUser_GetBlockedUsers); \
	DECLARE_FUNCTION(execUser_GetAccessToken); \
	DECLARE_FUNCTION(execUser_Get); \
	DECLARE_FUNCTION(execRichPresence_Set); \
	DECLARE_FUNCTION(execRichPresence_GetDestinations); \
	DECLARE_FUNCTION(execRichPresence_Clear); \
	DECLARE_FUNCTION(execPushNotification_Register); \
	DECLARE_FUNCTION(execParty_GetCurrent); \
	DECLARE_FUNCTION(execNotification_MarkAsRead); \
	DECLARE_FUNCTION(execMedia_ShareToFacebook); \
	DECLARE_FUNCTION(execLeaderboard_WriteEntryWithSupplementaryMetric); \
	DECLARE_FUNCTION(execLeaderboard_WriteEntry); \
	DECLARE_FUNCTION(execLeaderboard_GetEntriesByIds); \
	DECLARE_FUNCTION(execLeaderboard_GetEntriesAfterRank); \
	DECLARE_FUNCTION(execLeaderboard_GetEntries); \
	DECLARE_FUNCTION(execLeaderboard_Get); \
	DECLARE_FUNCTION(execLanguagePack_SetCurrent); \
	DECLARE_FUNCTION(execLanguagePack_GetCurrent); \
	DECLARE_FUNCTION(execIAP_LaunchCheckoutFlow); \
	DECLARE_FUNCTION(execIAP_GetViewerPurchasesDurableCache); \
	DECLARE_FUNCTION(execIAP_GetViewerPurchases); \
	DECLARE_FUNCTION(execIAP_GetProductsBySKU); \
	DECLARE_FUNCTION(execIAP_ConsumePurchase); \
	DECLARE_FUNCTION(execGroupPresence_SetMatchSession); \
	DECLARE_FUNCTION(execGroupPresence_SetLobbySession); \
	DECLARE_FUNCTION(execGroupPresence_SetIsJoinable); \
	DECLARE_FUNCTION(execGroupPresence_SetDestination); \
	DECLARE_FUNCTION(execGroupPresence_SetDeeplinkMessageOverride); \
	DECLARE_FUNCTION(execGroupPresence_Set); \
	DECLARE_FUNCTION(execGroupPresence_SendInvites); \
	DECLARE_FUNCTION(execGroupPresence_LaunchRosterPanel); \
	DECLARE_FUNCTION(execGroupPresence_LaunchRejoinDialog); \
	DECLARE_FUNCTION(execGroupPresence_LaunchMultiplayerErrorDialog); \
	DECLARE_FUNCTION(execGroupPresence_LaunchInvitePanel); \
	DECLARE_FUNCTION(execGroupPresence_GetSentInvites); \
	DECLARE_FUNCTION(execGroupPresence_GetInvitableUsers); \
	DECLARE_FUNCTION(execGroupPresence_Clear); \
	DECLARE_FUNCTION(execEntitlement_GetIsViewerEntitled); \
	DECLARE_FUNCTION(execDeviceApplicationIntegrity_GetIntegrityToken); \
	DECLARE_FUNCTION(execCowatching_SetViewerData); \
	DECLARE_FUNCTION(execCowatching_SetPresenterData); \
	DECLARE_FUNCTION(execCowatching_ResignFromPresenting); \
	DECLARE_FUNCTION(execCowatching_RequestToPresent); \
	DECLARE_FUNCTION(execCowatching_LeaveSession); \
	DECLARE_FUNCTION(execCowatching_LaunchInviteDialog); \
	DECLARE_FUNCTION(execCowatching_JoinSession); \
	DECLARE_FUNCTION(execCowatching_IsInSession); \
	DECLARE_FUNCTION(execCowatching_GetViewersData); \
	DECLARE_FUNCTION(execCowatching_GetPresenterData); \
	DECLARE_FUNCTION(execChallenges_UpdateInfo); \
	DECLARE_FUNCTION(execChallenges_Leave); \
	DECLARE_FUNCTION(execChallenges_Join); \
	DECLARE_FUNCTION(execChallenges_GetList); \
	DECLARE_FUNCTION(execChallenges_GetEntriesByIds); \
	DECLARE_FUNCTION(execChallenges_GetEntriesAfterRank); \
	DECLARE_FUNCTION(execChallenges_GetEntries); \
	DECLARE_FUNCTION(execChallenges_Get); \
	DECLARE_FUNCTION(execChallenges_Delete); \
	DECLARE_FUNCTION(execChallenges_DeclineInvite); \
	DECLARE_FUNCTION(execChallenges_Create); \
	DECLARE_FUNCTION(execAvatar_LaunchAvatarEditor); \
	DECLARE_FUNCTION(execAssetFile_StatusByName); \
	DECLARE_FUNCTION(execAssetFile_StatusById); \
	DECLARE_FUNCTION(execAssetFile_Status); \
	DECLARE_FUNCTION(execAssetFile_GetList); \
	DECLARE_FUNCTION(execAssetFile_DownloadCancelByName); \
	DECLARE_FUNCTION(execAssetFile_DownloadCancelById); \
	DECLARE_FUNCTION(execAssetFile_DownloadCancel); \
	DECLARE_FUNCTION(execAssetFile_DownloadByName); \
	DECLARE_FUNCTION(execAssetFile_DownloadById); \
	DECLARE_FUNCTION(execAssetFile_Download); \
	DECLARE_FUNCTION(execAssetFile_DeleteByName); \
	DECLARE_FUNCTION(execAssetFile_DeleteById); \
	DECLARE_FUNCTION(execAssetFile_Delete); \
	DECLARE_FUNCTION(execApplication_StartAppDownload); \
	DECLARE_FUNCTION(execApplication_LaunchOtherApp); \
	DECLARE_FUNCTION(execApplication_InstallAppUpdateAndRelaunch); \
	DECLARE_FUNCTION(execApplication_GetVersion); \
	DECLARE_FUNCTION(execApplication_CheckAppDownloadProgress); \
	DECLARE_FUNCTION(execApplication_CancelAppDownload); \
	DECLARE_FUNCTION(execAchievements_Unlock); \
	DECLARE_FUNCTION(execAchievements_GetProgressByName); \
	DECLARE_FUNCTION(execAchievements_GetDefinitionsByName); \
	DECLARE_FUNCTION(execAchievements_GetAllProgress); \
	DECLARE_FUNCTION(execAchievements_GetAllDefinitions); \
	DECLARE_FUNCTION(execAchievements_AddFields); \
	DECLARE_FUNCTION(execAchievements_AddCount); \
	DECLARE_FUNCTION(execAbuseReport_ReportRequestHandled);


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformRequests_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOvrRequestsBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UOvrRequestsBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UOvrRequestsBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OVRPlatform"), NO_API) \
	DECLARE_SERIALIZER(UOvrRequestsBlueprintLibrary)


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformRequests_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOvrRequestsBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOvrRequestsBlueprintLibrary(UOvrRequestsBlueprintLibrary&&); \
	UOvrRequestsBlueprintLibrary(const UOvrRequestsBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOvrRequestsBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOvrRequestsBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOvrRequestsBlueprintLibrary) \
	NO_API virtual ~UOvrRequestsBlueprintLibrary();


#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformRequests_h_18_PROLOG
#define FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformRequests_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformRequests_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformRequests_h_25_INCLASS_NO_PURE_DECLS \
	FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformRequests_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OVRPLATFORM_API UClass* StaticClass<class UOvrRequestsBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformRequests_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
