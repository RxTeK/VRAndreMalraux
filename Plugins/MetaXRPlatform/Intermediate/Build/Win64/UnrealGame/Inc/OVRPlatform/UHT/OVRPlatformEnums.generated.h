// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OVRPlatformEnums.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OVRPLATFORM_OVRPlatformEnums_generated_h
#error "OVRPlatformEnums.generated.h already included, missing '#pragma once' in OVRPlatformEnums.h"
#endif
#define OVRPLATFORM_OVRPlatformEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformEnums_h


#define FOREACH_ENUM_EOVRABUSEREPORTTYPE(op) \
	op(EOvrAbuseReportType::Unknown) \
	op(EOvrAbuseReportType::Object) \
	op(EOvrAbuseReportType::User) 

enum class EOvrAbuseReportType : uint8;
template<> struct TIsUEnumClass<EOvrAbuseReportType> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrAbuseReportType>();

#define FOREACH_ENUM_EOVRACCOUNTAGECATEGORY(op) \
	op(EOvrAccountAgeCategory::Unknown) \
	op(EOvrAccountAgeCategory::Ch) \
	op(EOvrAccountAgeCategory::Tn) \
	op(EOvrAccountAgeCategory::Ad) 

enum class EOvrAccountAgeCategory : uint8;
template<> struct TIsUEnumClass<EOvrAccountAgeCategory> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrAccountAgeCategory>();

#define FOREACH_ENUM_EOVRACHIEVEMENTTYPE(op) \
	op(EOvrAchievementType::Unknown) \
	op(EOvrAchievementType::Simple) \
	op(EOvrAchievementType::Bitfield) \
	op(EOvrAchievementType::Count) 

enum class EOvrAchievementType : uint8;
template<> struct TIsUEnumClass<EOvrAchievementType> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrAchievementType>();

#define FOREACH_ENUM_EOVRAPPAGECATEGORY(op) \
	op(EOvrAppAgeCategory::Unknown) \
	op(EOvrAppAgeCategory::Ch) \
	op(EOvrAppAgeCategory::Nch) 

enum class EOvrAppAgeCategory : uint8;
template<> struct TIsUEnumClass<EOvrAppAgeCategory> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrAppAgeCategory>();

#define FOREACH_ENUM_EOVRAPPINSTALLRESULT(op) \
	op(EOvrAppInstallResult::Unknown) \
	op(EOvrAppInstallResult::LowStorage) \
	op(EOvrAppInstallResult::NetworkError) \
	op(EOvrAppInstallResult::DuplicateRequest) \
	op(EOvrAppInstallResult::InstallerError) \
	op(EOvrAppInstallResult::UserCancelled) \
	op(EOvrAppInstallResult::AuthorizationError) \
	op(EOvrAppInstallResult::Success) 

enum class EOvrAppInstallResult : uint8;
template<> struct TIsUEnumClass<EOvrAppInstallResult> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrAppInstallResult>();

#define FOREACH_ENUM_EOVRAPPSTATUS(op) \
	op(EOvrAppStatus::Unknown) \
	op(EOvrAppStatus::Entitled) \
	op(EOvrAppStatus::DownloadQueued) \
	op(EOvrAppStatus::Downloading) \
	op(EOvrAppStatus::Installing) \
	op(EOvrAppStatus::Installed) \
	op(EOvrAppStatus::Uninstalling) \
	op(EOvrAppStatus::InstallQueued) 

enum class EOvrAppStatus : uint8;
template<> struct TIsUEnumClass<EOvrAppStatus> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrAppStatus>();

#define FOREACH_ENUM_EOVRCHALLENGECREATIONTYPE(op) \
	op(EOvrChallengeCreationType::Unknown) \
	op(EOvrChallengeCreationType::UserCreated) \
	op(EOvrChallengeCreationType::DeveloperCreated) 

enum class EOvrChallengeCreationType : uint8;
template<> struct TIsUEnumClass<EOvrChallengeCreationType> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrChallengeCreationType>();

#define FOREACH_ENUM_EOVRCHALLENGEVIEWERFILTER(op) \
	op(EOvrChallengeViewerFilter::Unknown) \
	op(EOvrChallengeViewerFilter::AllVisible) \
	op(EOvrChallengeViewerFilter::Participating) \
	op(EOvrChallengeViewerFilter::Invited) \
	op(EOvrChallengeViewerFilter::ParticipatingOrInvited) 

enum class EOvrChallengeViewerFilter : uint8;
template<> struct TIsUEnumClass<EOvrChallengeViewerFilter> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrChallengeViewerFilter>();

#define FOREACH_ENUM_EOVRCHALLENGEVISIBILITY(op) \
	op(EOvrChallengeVisibility::Unknown) \
	op(EOvrChallengeVisibility::InviteOnly) \
	op(EOvrChallengeVisibility::Public) \
	op(EOvrChallengeVisibility::Private) 

enum class EOvrChallengeVisibility : uint8;
template<> struct TIsUEnumClass<EOvrChallengeVisibility> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrChallengeVisibility>();

#define FOREACH_ENUM_EOVRKEYVALUEPAIRTYPE(op) \
	op(EOvrKeyValuePairType::String) \
	op(EOvrKeyValuePairType::Int) \
	op(EOvrKeyValuePairType::Double) \
	op(EOvrKeyValuePairType::Unknown) 

enum class EOvrKeyValuePairType : uint8;
template<> struct TIsUEnumClass<EOvrKeyValuePairType> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrKeyValuePairType>();

#define FOREACH_ENUM_EOVRLAUNCHRESULT(op) \
	op(EOvrLaunchResult::Unknown) \
	op(EOvrLaunchResult::Success) \
	op(EOvrLaunchResult::FailedRoomFull) \
	op(EOvrLaunchResult::FailedGameAlreadyStarted) \
	op(EOvrLaunchResult::FailedRoomNotFound) \
	op(EOvrLaunchResult::FailedUserDeclined) \
	op(EOvrLaunchResult::FailedOtherReason) 

enum class EOvrLaunchResult : uint8;
template<> struct TIsUEnumClass<EOvrLaunchResult> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrLaunchResult>();

#define FOREACH_ENUM_EOVRLAUNCHTYPE(op) \
	op(EOvrLaunchType::Unknown) \
	op(EOvrLaunchType::Normal) \
	op(EOvrLaunchType::Invite) \
	op(EOvrLaunchType::Coordinated) \
	op(EOvrLaunchType::Deeplink) 

enum class EOvrLaunchType : uint8;
template<> struct TIsUEnumClass<EOvrLaunchType> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrLaunchType>();

#define FOREACH_ENUM_EOVRLEADERBOARDFILTERTYPE(op) \
	op(EOvrLeaderboardFilterType::None) \
	op(EOvrLeaderboardFilterType::Friends) \
	op(EOvrLeaderboardFilterType::Unknown) \
	op(EOvrLeaderboardFilterType::UserIds) 

enum class EOvrLeaderboardFilterType : uint8;
template<> struct TIsUEnumClass<EOvrLeaderboardFilterType> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrLeaderboardFilterType>();

#define FOREACH_ENUM_EOVRLEADERBOARDSTARTAT(op) \
	op(EOvrLeaderboardStartAt::Top) \
	op(EOvrLeaderboardStartAt::CenteredOnViewer) \
	op(EOvrLeaderboardStartAt::CenteredOnViewerOrTop) \
	op(EOvrLeaderboardStartAt::Unknown) 

enum class EOvrLeaderboardStartAt : uint8;
template<> struct TIsUEnumClass<EOvrLeaderboardStartAt> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrLeaderboardStartAt>();

#define FOREACH_ENUM_EOVRLIVESTREAMINGSTARTSTATUS(op) \
	op(EOvrLivestreamingStartStatus::Success) \
	op(EOvrLivestreamingStartStatus::Unknown) \
	op(EOvrLivestreamingStartStatus::NoPackageSet) \
	op(EOvrLivestreamingStartStatus::NoFbConnect) \
	op(EOvrLivestreamingStartStatus::NoSessionId) \
	op(EOvrLivestreamingStartStatus::MissingParameters) 

enum class EOvrLivestreamingStartStatus : uint8;
template<> struct TIsUEnumClass<EOvrLivestreamingStartStatus> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrLivestreamingStartStatus>();

#define FOREACH_ENUM_EOVRLOGEVENTNAME(op) \
	op(EOvrLogEventName::Unknown) \
	op(EOvrLogEventName::AdClick) \
	op(EOvrLogEventName::AdImpression) \
	op(EOvrLogEventName::VrCompleteRegistration) \
	op(EOvrLogEventName::VrTutorialCompletion) \
	op(EOvrLogEventName::Contact) \
	op(EOvrLogEventName::CustomizeProduct) \
	op(EOvrLogEventName::Donate) \
	op(EOvrLogEventName::FindLocation) \
	op(EOvrLogEventName::VrRate) \
	op(EOvrLogEventName::Schedule) \
	op(EOvrLogEventName::VrSearch) \
	op(EOvrLogEventName::SmartTrial) \
	op(EOvrLogEventName::SubmitApplication) \
	op(EOvrLogEventName::Subscribe) \
	op(EOvrLogEventName::VrContentView) \
	op(EOvrLogEventName::VrSdkInitialize) \
	op(EOvrLogEventName::VrSdkBackgroundStatusAvailable) \
	op(EOvrLogEventName::VrSdkBackgroundStatusDenied) \
	op(EOvrLogEventName::VrSdkBackgroundStatusRestricted) \
	op(EOvrLogEventName::VrAddPaymentInfo) \
	op(EOvrLogEventName::VrAddToCart) \
	op(EOvrLogEventName::VrAddToWishlist) \
	op(EOvrLogEventName::VrInitiatedCheckout) \
	op(EOvrLogEventName::VrPurchase) \
	op(EOvrLogEventName::VrCatalogUpdate) \
	op(EOvrLogEventName::VrPurchaseFailed) \
	op(EOvrLogEventName::VrPurchaseRestored) \
	op(EOvrLogEventName::SubscriptionInitiatedCheckout) \
	op(EOvrLogEventName::SubscriptionFailed) \
	op(EOvrLogEventName::SubscriptionRestore) \
	op(EOvrLogEventName::VrLevelAchieved) \
	op(EOvrLogEventName::VrAchievementUnlocked) \
	op(EOvrLogEventName::VrSpentCredits) \
	op(EOvrLogEventName::VrObtainPushToken) \
	op(EOvrLogEventName::VrPushOpened) \
	op(EOvrLogEventName::VrActivateApp) \
	op(EOvrLogEventName::VrDeactivateApp) 

enum class EOvrLogEventName : uint8;
template<> struct TIsUEnumClass<EOvrLogEventName> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrLogEventName>();

#define FOREACH_ENUM_EOVRLOGEVENTPARAMETER(op) \
	op(EOvrLogEventParameter::Unknown) \
	op(EOvrLogEventParameter::VrCurrency) \
	op(EOvrLogEventParameter::VrRegistrationMethod) \
	op(EOvrLogEventParameter::VrContentType) \
	op(EOvrLogEventParameter::VrContent) \
	op(EOvrLogEventParameter::VrContentId) \
	op(EOvrLogEventParameter::VrSearchString) \
	op(EOvrLogEventParameter::VrSuccess) \
	op(EOvrLogEventParameter::VrMaxRatingValue) \
	op(EOvrLogEventParameter::VrPaymentInfoAvailable) \
	op(EOvrLogEventParameter::VrNumItems) \
	op(EOvrLogEventParameter::VrLevel) \
	op(EOvrLogEventParameter::VrDescription) \
	op(EOvrLogEventParameter::AdType) \
	op(EOvrLogEventParameter::VrOrderId) \
	op(EOvrLogEventParameter::EventName) \
	op(EOvrLogEventParameter::LogTime) \
	op(EOvrLogEventParameter::ImplicitlyLogged) \
	op(EOvrLogEventParameter::InBackground) \
	op(EOvrLogEventParameter::VrPushCampaign) \
	op(EOvrLogEventParameter::VrPushAction) \
	op(EOvrLogEventParameter::VrIapProductType) \
	op(EOvrLogEventParameter::VrContentTitle) \
	op(EOvrLogEventParameter::VrTransactionId) \
	op(EOvrLogEventParameter::VrTransactionDate) \
	op(EOvrLogEventParameter::VrIapSubsPeriod) \
	op(EOvrLogEventParameter::VrIapIsStartTrial) \
	op(EOvrLogEventParameter::VrIapHasFreeTrial) \
	op(EOvrLogEventParameter::VrIapTrialPeriod) \
	op(EOvrLogEventParameter::VrIapTrialPrice) \
	op(EOvrLogEventParameter::SessionId) 

enum class EOvrLogEventParameter : uint8;
template<> struct TIsUEnumClass<EOvrLogEventParameter> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrLogEventParameter>();

#define FOREACH_ENUM_EOVRMEDIACONTENTTYPE(op) \
	op(EOvrMediaContentType::Unknown) \
	op(EOvrMediaContentType::Photo) 

enum class EOvrMediaContentType : uint8;
template<> struct TIsUEnumClass<EOvrMediaContentType> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrMediaContentType>();

#define FOREACH_ENUM_EOVRMULTIPLAYERERRORERRORKEY(op) \
	op(EOvrMultiplayerErrorErrorKey::Unknown) \
	op(EOvrMultiplayerErrorErrorKey::DestinationUnavailable) \
	op(EOvrMultiplayerErrorErrorKey::DlcRequired) \
	op(EOvrMultiplayerErrorErrorKey::General) \
	op(EOvrMultiplayerErrorErrorKey::GroupFull) \
	op(EOvrMultiplayerErrorErrorKey::InviterNotJoinable) \
	op(EOvrMultiplayerErrorErrorKey::LevelNotHighEnough) \
	op(EOvrMultiplayerErrorErrorKey::LevelNotUnlocked) \
	op(EOvrMultiplayerErrorErrorKey::NetworkTimeout) \
	op(EOvrMultiplayerErrorErrorKey::NoLongerAvailable) \
	op(EOvrMultiplayerErrorErrorKey::UpdateRequired) \
	op(EOvrMultiplayerErrorErrorKey::TutorialRequired) 

enum class EOvrMultiplayerErrorErrorKey : uint8;
template<> struct TIsUEnumClass<EOvrMultiplayerErrorErrorKey> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrMultiplayerErrorErrorKey>();

#define FOREACH_ENUM_EOVRNETSYNCCONNECTIONSTATUS(op) \
	op(EOvrNetSyncConnectionStatus::Unknown) \
	op(EOvrNetSyncConnectionStatus::Connecting) \
	op(EOvrNetSyncConnectionStatus::Disconnected) \
	op(EOvrNetSyncConnectionStatus::Connected) 

enum class EOvrNetSyncConnectionStatus : uint8;
template<> struct TIsUEnumClass<EOvrNetSyncConnectionStatus> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrNetSyncConnectionStatus>();

#define FOREACH_ENUM_EOVRNETSYNCDISCONNECTREASON(op) \
	op(EOvrNetSyncDisconnectReason::Unknown) \
	op(EOvrNetSyncDisconnectReason::LocalTerminated) \
	op(EOvrNetSyncDisconnectReason::ServerTerminated) \
	op(EOvrNetSyncDisconnectReason::Failed) \
	op(EOvrNetSyncDisconnectReason::Lost) 

enum class EOvrNetSyncDisconnectReason : uint8;
template<> struct TIsUEnumClass<EOvrNetSyncDisconnectReason> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrNetSyncDisconnectReason>();

#define FOREACH_ENUM_EOVRNETSYNCVOIPMICSOURCE(op) \
	op(EOvrNetSyncVoipMicSource::Unknown) \
	op(EOvrNetSyncVoipMicSource::None) \
	op(EOvrNetSyncVoipMicSource::Internal) 

enum class EOvrNetSyncVoipMicSource : uint8;
template<> struct TIsUEnumClass<EOvrNetSyncVoipMicSource> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrNetSyncVoipMicSource>();

#define FOREACH_ENUM_EOVRNETSYNCVOIPSTREAMMODE(op) \
	op(EOvrNetSyncVoipStreamMode::Unknown) \
	op(EOvrNetSyncVoipStreamMode::Ambisonic) \
	op(EOvrNetSyncVoipStreamMode::Mono) 

enum class EOvrNetSyncVoipStreamMode : uint8;
template<> struct TIsUEnumClass<EOvrNetSyncVoipStreamMode> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrNetSyncVoipStreamMode>();

#define FOREACH_ENUM_EOVROFFERTERM(op) \
	op(EOvrOfferTerm::Unknown) \
	op(EOvrOfferTerm::WEEKLY) \
	op(EOvrOfferTerm::BIWEEKLY) \
	op(EOvrOfferTerm::MONTHLY) \
	op(EOvrOfferTerm::QUARTERLY) \
	op(EOvrOfferTerm::SEMIANNUAL) \
	op(EOvrOfferTerm::ANNUAL) \
	op(EOvrOfferTerm::BIANNUAL) 

enum class EOvrOfferTerm : uint8;
template<> struct TIsUEnumClass<EOvrOfferTerm> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrOfferTerm>();

#define FOREACH_ENUM_EOVROFFERTYPE(op) \
	op(EOvrOfferType::Unknown) \
	op(EOvrOfferType::INTROOFFER) \
	op(EOvrOfferType::FREETRIAL) 

enum class EOvrOfferType : uint8;
template<> struct TIsUEnumClass<EOvrOfferType> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrOfferType>();

#define FOREACH_ENUM_EOVRPARTYUPDATEACTION(op) \
	op(EOvrPartyUpdateAction::Unknown) \
	op(EOvrPartyUpdateAction::Join) \
	op(EOvrPartyUpdateAction::Leave) \
	op(EOvrPartyUpdateAction::Invite) \
	op(EOvrPartyUpdateAction::Uninvite) 

enum class EOvrPartyUpdateAction : uint8;
template<> struct TIsUEnumClass<EOvrPartyUpdateAction> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrPartyUpdateAction>();

#define FOREACH_ENUM_EOVRPERMISSIONGRANTSTATUS(op) \
	op(EOvrPermissionGrantStatus::Unknown) \
	op(EOvrPermissionGrantStatus::Granted) \
	op(EOvrPermissionGrantStatus::Denied) \
	op(EOvrPermissionGrantStatus::Blocked) 

enum class EOvrPermissionGrantStatus : uint8;
template<> struct TIsUEnumClass<EOvrPermissionGrantStatus> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrPermissionGrantStatus>();

#define FOREACH_ENUM_EOVRPLATFORMINITIALIZERESULT(op) \
	op(EOvrPlatformInitializeResult::Success) \
	op(EOvrPlatformInitializeResult::Uninitialized) \
	op(EOvrPlatformInitializeResult::PreLoaded) \
	op(EOvrPlatformInitializeResult::FileInvalid) \
	op(EOvrPlatformInitializeResult::SignatureInvalid) \
	op(EOvrPlatformInitializeResult::UnableToVerify) \
	op(EOvrPlatformInitializeResult::VersionMismatch) \
	op(EOvrPlatformInitializeResult::Unknown) \
	op(EOvrPlatformInitializeResult::InvalidCredentials) \
	op(EOvrPlatformInitializeResult::NotEntitled) 

enum class EOvrPlatformInitializeResult : uint8;
template<> struct TIsUEnumClass<EOvrPlatformInitializeResult> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrPlatformInitializeResult>();

#define FOREACH_ENUM_EOVRPRODUCTTYPE(op) \
	op(EOvrProductType::Unknown) \
	op(EOvrProductType::DURABLE) \
	op(EOvrProductType::CONSUMABLE) \
	op(EOvrProductType::SUBSCRIPTION) 

enum class EOvrProductType : uint8;
template<> struct TIsUEnumClass<EOvrProductType> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrProductType>();

#define FOREACH_ENUM_EOVRREPORTREQUESTRESPONSE(op) \
	op(EOvrReportRequestResponse::Unknown) \
	op(EOvrReportRequestResponse::Handled) \
	op(EOvrReportRequestResponse::Unhandled) \
	op(EOvrReportRequestResponse::Unavailable) 

enum class EOvrReportRequestResponse : uint8;
template<> struct TIsUEnumClass<EOvrReportRequestResponse> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrReportRequestResponse>();

#define FOREACH_ENUM_EOVRRICHPRESENCEEXTRACONTEXT(op) \
	op(EOvrRichPresenceExtraContext::Unknown) \
	op(EOvrRichPresenceExtraContext::None) \
	op(EOvrRichPresenceExtraContext::CurrentCapacity) \
	op(EOvrRichPresenceExtraContext::StartedAgo) \
	op(EOvrRichPresenceExtraContext::EndingIn) \
	op(EOvrRichPresenceExtraContext::LookingForAMatch) 

enum class EOvrRichPresenceExtraContext : uint8;
template<> struct TIsUEnumClass<EOvrRichPresenceExtraContext> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrRichPresenceExtraContext>();

#define FOREACH_ENUM_EOVRSDKACCOUNTTYPE(op) \
	op(EOvrSdkAccountType::Unknown) \
	op(EOvrSdkAccountType::Oculus) \
	op(EOvrSdkAccountType::FacebookGameroom) 

enum class EOvrSdkAccountType : uint8;
template<> struct TIsUEnumClass<EOvrSdkAccountType> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrSdkAccountType>();

#define FOREACH_ENUM_EOVRSERVICEPROVIDER(op) \
	op(EOvrServiceProvider::Unknown) \
	op(EOvrServiceProvider::Dropbox) \
	op(EOvrServiceProvider::Facebook) \
	op(EOvrServiceProvider::Google) \
	op(EOvrServiceProvider::Instagram) \
	op(EOvrServiceProvider::RemoteMedia) 

enum class EOvrServiceProvider : uint8;
template<> struct TIsUEnumClass<EOvrServiceProvider> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrServiceProvider>();

#define FOREACH_ENUM_EOVRSHAREMEDIASTATUS(op) \
	op(EOvrShareMediaStatus::Unknown) \
	op(EOvrShareMediaStatus::Shared) \
	op(EOvrShareMediaStatus::Canceled) 

enum class EOvrShareMediaStatus : uint8;
template<> struct TIsUEnumClass<EOvrShareMediaStatus> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrShareMediaStatus>();

#define FOREACH_ENUM_EOVRSYSTEMVOIPSTATUS(op) \
	op(EOvrSystemVoipStatus::Unknown) \
	op(EOvrSystemVoipStatus::Unavailable) \
	op(EOvrSystemVoipStatus::Suppressed) \
	op(EOvrSystemVoipStatus::Active) 

enum class EOvrSystemVoipStatus : uint8;
template<> struct TIsUEnumClass<EOvrSystemVoipStatus> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrSystemVoipStatus>();

#define FOREACH_ENUM_EOVRTIMEWINDOW(op) \
	op(EOvrTimeWindow::Unknown) \
	op(EOvrTimeWindow::OneHour) \
	op(EOvrTimeWindow::OneDay) \
	op(EOvrTimeWindow::OneWeek) \
	op(EOvrTimeWindow::ThirtyDays) \
	op(EOvrTimeWindow::NinetyDays) 

enum class EOvrTimeWindow : uint8;
template<> struct TIsUEnumClass<EOvrTimeWindow> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrTimeWindow>();

#define FOREACH_ENUM_EOVRUSERORDERING(op) \
	op(EOvrUserOrdering::Unknown) \
	op(EOvrUserOrdering::None) \
	op(EOvrUserOrdering::PresenceAlphabetical) 

enum class EOvrUserOrdering : uint8;
template<> struct TIsUEnumClass<EOvrUserOrdering> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrUserOrdering>();

#define FOREACH_ENUM_EOVRUSERPRESENCESTATUS(op) \
	op(EOvrUserPresenceStatus::Unknown) \
	op(EOvrUserPresenceStatus::Online) \
	op(EOvrUserPresenceStatus::Offline) 

enum class EOvrUserPresenceStatus : uint8;
template<> struct TIsUEnumClass<EOvrUserPresenceStatus> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrUserPresenceStatus>();

#define FOREACH_ENUM_EOVRVOIPBITRATE(op) \
	op(EOvrVoipBitrate::Unknown) \
	op(EOvrVoipBitrate::B16000) \
	op(EOvrVoipBitrate::B24000) \
	op(EOvrVoipBitrate::B32000) \
	op(EOvrVoipBitrate::B64000) \
	op(EOvrVoipBitrate::B96000) \
	op(EOvrVoipBitrate::B128000) 

enum class EOvrVoipBitrate : uint8;
template<> struct TIsUEnumClass<EOvrVoipBitrate> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrVoipBitrate>();

#define FOREACH_ENUM_EOVRVOIPDTXSTATE(op) \
	op(EOvrVoipDtxState::Unknown) \
	op(EOvrVoipDtxState::Enabled) \
	op(EOvrVoipDtxState::Disabled) 

enum class EOvrVoipDtxState : uint8;
template<> struct TIsUEnumClass<EOvrVoipDtxState> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrVoipDtxState>();

#define FOREACH_ENUM_EOVRVOIPMUTESTATE(op) \
	op(EOvrVoipMuteState::Unknown) \
	op(EOvrVoipMuteState::Muted) \
	op(EOvrVoipMuteState::Unmuted) 

enum class EOvrVoipMuteState : uint8;
template<> struct TIsUEnumClass<EOvrVoipMuteState> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrVoipMuteState>();

#define FOREACH_ENUM_EOVRVOIPSAMPLERATE(op) \
	op(EOvrVoipSampleRate::Unknown) \
	op(EOvrVoipSampleRate::HZ24000) \
	op(EOvrVoipSampleRate::HZ44100) \
	op(EOvrVoipSampleRate::HZ48000) 

enum class EOvrVoipSampleRate : uint8;
template<> struct TIsUEnumClass<EOvrVoipSampleRate> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrVoipSampleRate>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
