// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OVRPlatform/Public/OVRPlatformEnums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOVRPlatformEnums() {}

// Begin Cross Module References
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrAbuseReportType();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrAccountAgeCategory();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrAchievementType();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrAppAgeCategory();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrAppInstallResult();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrAppStatus();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrChallengeCreationType();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrChallengeViewerFilter();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrChallengeVisibility();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrKeyValuePairType();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrLaunchResult();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrLaunchType();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrLeaderboardFilterType();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrLeaderboardStartAt();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrLivestreamingStartStatus();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrLogEventName();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrLogEventParameter();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrMediaContentType();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrMultiplayerErrorErrorKey();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrNetSyncConnectionStatus();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrNetSyncDisconnectReason();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipMicSource();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipStreamMode();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrOfferTerm();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrOfferType();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrPartyUpdateAction();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrPermissionGrantStatus();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrPlatformInitializeResult();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrProductType();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrReportRequestResponse();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrRichPresenceExtraContext();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrSdkAccountType();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrServiceProvider();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrShareMediaStatus();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrSystemVoipStatus();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrTimeWindow();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrUserOrdering();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrUserPresenceStatus();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrVoipBitrate();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrVoipDtxState();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrVoipMuteState();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrVoipSampleRate();
UPackage* Z_Construct_UPackage__Script_OVRPlatform();
// End Cross Module References

// Begin Enum EOvrAbuseReportType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrAbuseReportType;
static UEnum* EOvrAbuseReportType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrAbuseReportType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrAbuseReportType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrAbuseReportType, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrAbuseReportType"));
	}
	return Z_Registration_Info_UEnum_EOvrAbuseReportType.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrAbuseReportType>()
{
	return EOvrAbuseReportType_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrAbuseReportType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the type of abuse report, can be categorized as either concerning a user, an object, or being unknown.\n * It can be specified as a field in the FOvrAbuseReportOptions::ReportType option.\n */" },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "Object.Comment", "/**\n     * This refers to reports that are related to non-user entities, such as a virtual environment or an inanimate object within a platform.\n     * An example provided is a report concerning a \"world,\" which could be a virtual space or environment.\n     */" },
		{ "Object.Name", "EOvrAbuseReportType::Object" },
		{ "Object.ToolTip", "This refers to reports that are related to non-user entities, such as a virtual environment or an inanimate object within a platform.\nAn example provided is a report concerning a \"world,\" which could be a virtual space or environment." },
		{ "ToolTip", "Represents the type of abuse report, can be categorized as either concerning a user, an object, or being unknown.\nIt can be specified as a field in the FOvrAbuseReportOptions::ReportType option." },
		{ "Unknown.Name", "EOvrAbuseReportType::Unknown" },
		{ "User.Comment", "/**\n     * This category is used for reports that directly involve a user's actions or behavior.\n     * This could include reports on harassment, inappropriate behavior, or other violations that\n     * are directly linked to a user's conduct on a platform.\n     */" },
		{ "User.Name", "EOvrAbuseReportType::User" },
		{ "User.ToolTip", "This category is used for reports that directly involve a user's actions or behavior.\nThis could include reports on harassment, inappropriate behavior, or other violations that\nare directly linked to a user's conduct on a platform." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrAbuseReportType::Unknown", (int64)EOvrAbuseReportType::Unknown },
		{ "EOvrAbuseReportType::Object", (int64)EOvrAbuseReportType::Object },
		{ "EOvrAbuseReportType::User", (int64)EOvrAbuseReportType::User },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrAbuseReportType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrAbuseReportType",
	"EOvrAbuseReportType",
	Z_Construct_UEnum_OVRPlatform_EOvrAbuseReportType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrAbuseReportType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrAbuseReportType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrAbuseReportType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrAbuseReportType()
{
	if (!Z_Registration_Info_UEnum_EOvrAbuseReportType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrAbuseReportType.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrAbuseReportType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrAbuseReportType.InnerSingleton;
}
// End Enum EOvrAbuseReportType

// Begin Enum EOvrAccountAgeCategory
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrAccountAgeCategory;
static UEnum* EOvrAccountAgeCategory_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrAccountAgeCategory.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrAccountAgeCategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrAccountAgeCategory, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrAccountAgeCategory"));
	}
	return Z_Registration_Info_UEnum_EOvrAccountAgeCategory.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrAccountAgeCategory>()
{
	return EOvrAccountAgeCategory_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrAccountAgeCategory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Ad.Comment", "/** Adult age group for users ages 18 and up (or applicable age in user's region). */" },
		{ "Ad.Name", "EOvrAccountAgeCategory::Ad" },
		{ "Ad.ToolTip", "Adult age group for users ages 18 and up (or applicable age in user's region)." },
		{ "BlueprintType", "true" },
		{ "Ch.Comment", "/** Child age group for users between the ages of 10-12 (or applicable age in user's region). */" },
		{ "Ch.Name", "EOvrAccountAgeCategory::Ch" },
		{ "Ch.ToolTip", "Child age group for users between the ages of 10-12 (or applicable age in user's region)." },
		{ "Comment", "/**\n * The age category in a Meta account is used to determine eligibility for certain features and services.\n * This information is important for ensuring that users are able to access the appropriate content and functionality based on their age.\n * The values are used in FOvrUserAccountAgeCategory API.\n * See more details [here](https://developer.oculus.com/documentation/unreal/ps-get-age-category-api).\n */" },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "Tn.Comment", "/** Teenage age group for users between the ages of 13-17 (or applicable age in user's region). */" },
		{ "Tn.Name", "EOvrAccountAgeCategory::Tn" },
		{ "Tn.ToolTip", "Teenage age group for users between the ages of 13-17 (or applicable age in user's region)." },
		{ "ToolTip", "The age category in a Meta account is used to determine eligibility for certain features and services.\nThis information is important for ensuring that users are able to access the appropriate content and functionality based on their age.\nThe values are used in FOvrUserAccountAgeCategory API.\nSee more details [here](https://developer.oculus.com/documentation/unreal/ps-get-age-category-api)." },
		{ "Unknown.Name", "EOvrAccountAgeCategory::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrAccountAgeCategory::Unknown", (int64)EOvrAccountAgeCategory::Unknown },
		{ "EOvrAccountAgeCategory::Ch", (int64)EOvrAccountAgeCategory::Ch },
		{ "EOvrAccountAgeCategory::Tn", (int64)EOvrAccountAgeCategory::Tn },
		{ "EOvrAccountAgeCategory::Ad", (int64)EOvrAccountAgeCategory::Ad },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrAccountAgeCategory_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrAccountAgeCategory",
	"EOvrAccountAgeCategory",
	Z_Construct_UEnum_OVRPlatform_EOvrAccountAgeCategory_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrAccountAgeCategory_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrAccountAgeCategory_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrAccountAgeCategory_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrAccountAgeCategory()
{
	if (!Z_Registration_Info_UEnum_EOvrAccountAgeCategory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrAccountAgeCategory.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrAccountAgeCategory_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrAccountAgeCategory.InnerSingleton;
}
// End Enum EOvrAccountAgeCategory

// Begin Enum EOvrAchievementType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrAchievementType;
static UEnum* EOvrAchievementType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrAchievementType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrAchievementType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrAchievementType, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrAchievementType"));
	}
	return Z_Registration_Info_UEnum_EOvrAchievementType.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrAchievementType>()
{
	return EOvrAchievementType_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrAchievementType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitfield.Comment", "/** Bitfield achievements are unlocked when a target number of bits are set within a bitfield. */" },
		{ "Bitfield.Name", "EOvrAchievementType::Bitfield" },
		{ "Bitfield.ToolTip", "Bitfield achievements are unlocked when a target number of bits are set within a bitfield." },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Determines the type of the achievement. This enum defines the different types of achievements that can be used in the game.\n * Each type has its own unique characteristics and requirements for unlocking.\n * See more details about achievement [here](https://developer.oculus.com/documentation/unreal/ps-achievements/).\n */" },
		{ "Count.Comment", "/**\n     * Count achievements are unlocked when a counter reaches a defined target. The counter is incremented each time the player completes\n     * the required action, and when it reaches the target value, the achievement is unlocked.\n     */" },
		{ "Count.Name", "EOvrAchievementType::Count" },
		{ "Count.ToolTip", "Count achievements are unlocked when a counter reaches a defined target. The counter is incremented each time the player completes\nthe required action, and when it reaches the target value, the achievement is unlocked." },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "Simple.Comment", "/**\n     * Simple achievements are unlocked by a single event or objective completion. They are often used to reward players for\n     * completing specific tasks or milestones within the game.\n     */" },
		{ "Simple.Name", "EOvrAchievementType::Simple" },
		{ "Simple.ToolTip", "Simple achievements are unlocked by a single event or objective completion. They are often used to reward players for\ncompleting specific tasks or milestones within the game." },
		{ "ToolTip", "Determines the type of the achievement. This enum defines the different types of achievements that can be used in the game.\nEach type has its own unique characteristics and requirements for unlocking.\nSee more details about achievement [here](https://developer.oculus.com/documentation/unreal/ps-achievements/)." },
		{ "Unknown.Name", "EOvrAchievementType::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrAchievementType::Unknown", (int64)EOvrAchievementType::Unknown },
		{ "EOvrAchievementType::Simple", (int64)EOvrAchievementType::Simple },
		{ "EOvrAchievementType::Bitfield", (int64)EOvrAchievementType::Bitfield },
		{ "EOvrAchievementType::Count", (int64)EOvrAchievementType::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrAchievementType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrAchievementType",
	"EOvrAchievementType",
	Z_Construct_UEnum_OVRPlatform_EOvrAchievementType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrAchievementType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrAchievementType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrAchievementType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrAchievementType()
{
	if (!Z_Registration_Info_UEnum_EOvrAchievementType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrAchievementType.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrAchievementType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrAchievementType.InnerSingleton;
}
// End Enum EOvrAchievementType

// Begin Enum EOvrAppAgeCategory
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrAppAgeCategory;
static UEnum* EOvrAppAgeCategory_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrAppAgeCategory.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrAppAgeCategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrAppAgeCategory, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrAppAgeCategory"));
	}
	return Z_Registration_Info_UEnum_EOvrAppAgeCategory.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrAppAgeCategory>()
{
	return EOvrAppAgeCategory_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrAppAgeCategory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Ch.Comment", "/** Child age group for users between the ages of 10-12 (or applicable age in user's region). */" },
		{ "Ch.Name", "EOvrAppAgeCategory::Ch" },
		{ "Ch.ToolTip", "Child age group for users between the ages of 10-12 (or applicable age in user's region)." },
		{ "Comment", "/**\n * The age category in a Meta account is used to determine eligibility for certain features and services.\n * This information is important for ensuring that users are able to access the appropriate content and functionality based on their age.\n * The values are used in FOvrUserAccountAgeCategory API.\n * See more details [here](https://developer.oculus.com/documentation/unreal/ps-get-age-category-api).\n */" },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "Nch.Comment", "/** Non-child age group for users ages 13 and up (or applicable age in user's region). */" },
		{ "Nch.Name", "EOvrAppAgeCategory::Nch" },
		{ "Nch.ToolTip", "Non-child age group for users ages 13 and up (or applicable age in user's region)." },
		{ "ToolTip", "The age category in a Meta account is used to determine eligibility for certain features and services.\nThis information is important for ensuring that users are able to access the appropriate content and functionality based on their age.\nThe values are used in FOvrUserAccountAgeCategory API.\nSee more details [here](https://developer.oculus.com/documentation/unreal/ps-get-age-category-api)." },
		{ "Unknown.Name", "EOvrAppAgeCategory::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrAppAgeCategory::Unknown", (int64)EOvrAppAgeCategory::Unknown },
		{ "EOvrAppAgeCategory::Ch", (int64)EOvrAppAgeCategory::Ch },
		{ "EOvrAppAgeCategory::Nch", (int64)EOvrAppAgeCategory::Nch },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrAppAgeCategory_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrAppAgeCategory",
	"EOvrAppAgeCategory",
	Z_Construct_UEnum_OVRPlatform_EOvrAppAgeCategory_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrAppAgeCategory_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrAppAgeCategory_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrAppAgeCategory_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrAppAgeCategory()
{
	if (!Z_Registration_Info_UEnum_EOvrAppAgeCategory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrAppAgeCategory.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrAppAgeCategory_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrAppAgeCategory.InnerSingleton;
}
// End Enum EOvrAppAgeCategory

// Begin Enum EOvrAppInstallResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrAppInstallResult;
static UEnum* EOvrAppInstallResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrAppInstallResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrAppInstallResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrAppInstallResult, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrAppInstallResult"));
	}
	return Z_Registration_Info_UEnum_EOvrAppInstallResult.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrAppInstallResult>()
{
	return EOvrAppInstallResult_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrAppInstallResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AuthorizationError.Comment", "/** Install of the app failed due to a user authorization error */" },
		{ "AuthorizationError.Name", "EOvrAppInstallResult::AuthorizationError" },
		{ "AuthorizationError.ToolTip", "Install of the app failed due to a user authorization error" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Result of installing an app. In case of an error during install process,\n * the error message contains the string representation of this result. This is\n * returned from UOvrRequestsBlueprintLibrary::Application_StartAppDownload(), UOvrRequestsBlueprintLibrary::Application_CancelAppDownload() and UOvrRequestsBlueprintLibrary::Application_InstallAppUpdateAndRelaunch() APIs.\n */" },
		{ "DuplicateRequest.Comment", "/**\n     * Install of the app failed as another install request for this application\n     * is already being processed by the installer\n     */" },
		{ "DuplicateRequest.Name", "EOvrAppInstallResult::DuplicateRequest" },
		{ "DuplicateRequest.ToolTip", "Install of the app failed as another install request for this application\nis already being processed by the installer" },
		{ "InstallerError.Comment", "/** Install of the app failed due to an internal installer error */" },
		{ "InstallerError.Name", "EOvrAppInstallResult::InstallerError" },
		{ "InstallerError.ToolTip", "Install of the app failed due to an internal installer error" },
		{ "LowStorage.Comment", "/** Install of the app failed due to low storage on the device */" },
		{ "LowStorage.Name", "EOvrAppInstallResult::LowStorage" },
		{ "LowStorage.ToolTip", "Install of the app failed due to low storage on the device" },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "NetworkError.Comment", "/** Install of the app failed due to a network error */" },
		{ "NetworkError.Name", "EOvrAppInstallResult::NetworkError" },
		{ "NetworkError.ToolTip", "Install of the app failed due to a network error" },
		{ "Success.Comment", "/** Install of the app succeeded */" },
		{ "Success.Name", "EOvrAppInstallResult::Success" },
		{ "Success.ToolTip", "Install of the app succeeded" },
		{ "ToolTip", "Result of installing an app. In case of an error during install process,\nthe error message contains the string representation of this result. This is\nreturned from UOvrRequestsBlueprintLibrary::Application_StartAppDownload(), UOvrRequestsBlueprintLibrary::Application_CancelAppDownload() and UOvrRequestsBlueprintLibrary::Application_InstallAppUpdateAndRelaunch() APIs." },
		{ "Unknown.Name", "EOvrAppInstallResult::Unknown" },
		{ "UserCancelled.Comment", "/** Install of the app failed because the user canceled the install operation */" },
		{ "UserCancelled.Name", "EOvrAppInstallResult::UserCancelled" },
		{ "UserCancelled.ToolTip", "Install of the app failed because the user canceled the install operation" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrAppInstallResult::Unknown", (int64)EOvrAppInstallResult::Unknown },
		{ "EOvrAppInstallResult::LowStorage", (int64)EOvrAppInstallResult::LowStorage },
		{ "EOvrAppInstallResult::NetworkError", (int64)EOvrAppInstallResult::NetworkError },
		{ "EOvrAppInstallResult::DuplicateRequest", (int64)EOvrAppInstallResult::DuplicateRequest },
		{ "EOvrAppInstallResult::InstallerError", (int64)EOvrAppInstallResult::InstallerError },
		{ "EOvrAppInstallResult::UserCancelled", (int64)EOvrAppInstallResult::UserCancelled },
		{ "EOvrAppInstallResult::AuthorizationError", (int64)EOvrAppInstallResult::AuthorizationError },
		{ "EOvrAppInstallResult::Success", (int64)EOvrAppInstallResult::Success },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrAppInstallResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrAppInstallResult",
	"EOvrAppInstallResult",
	Z_Construct_UEnum_OVRPlatform_EOvrAppInstallResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrAppInstallResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrAppInstallResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrAppInstallResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrAppInstallResult()
{
	if (!Z_Registration_Info_UEnum_EOvrAppInstallResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrAppInstallResult.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrAppInstallResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrAppInstallResult.InnerSingleton;
}
// End Enum EOvrAppInstallResult

// Begin Enum EOvrAppStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrAppStatus;
static UEnum* EOvrAppStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrAppStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrAppStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrAppStatus, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrAppStatus"));
	}
	return Z_Registration_Info_UEnum_EOvrAppStatus.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrAppStatus>()
{
	return EOvrAppStatus_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrAppStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This property indicates the current status of the app on the device. It is important to note that\n * an app can only query its own status, not the status of other apps installed on the device. It can be\n * retrieved by field FOvrAppDownloadProgressResult::StatusCode.\n */" },
		{ "Downloading.Comment", "/** The app is currently being downloaded to the device. This status is active during the download process until it is complete. */" },
		{ "Downloading.Name", "EOvrAppStatus::Downloading" },
		{ "Downloading.ToolTip", "The app is currently being downloaded to the device. This status is active during the download process until it is complete." },
		{ "DownloadQueued.Comment", "/** The app is scheduled for download. The download will start as soon as prior queued downloads are completed. */" },
		{ "DownloadQueued.Name", "EOvrAppStatus::DownloadQueued" },
		{ "DownloadQueued.ToolTip", "The app is scheduled for download. The download will start as soon as prior queued downloads are completed." },
		{ "Entitled.Comment", "/**\n     * The user possesses a valid entitlement for the app, indicating they have the right to install it,\n     * although it is not currently installed on the device.\n     */" },
		{ "Entitled.Name", "EOvrAppStatus::Entitled" },
		{ "Entitled.ToolTip", "The user possesses a valid entitlement for the app, indicating they have the right to install it,\nalthough it is not currently installed on the device." },
		{ "Installed.Comment", "/** The app is successfully installed on the device and is ready to be used. */" },
		{ "Installed.Name", "EOvrAppStatus::Installed" },
		{ "Installed.ToolTip", "The app is successfully installed on the device and is ready to be used." },
		{ "Installing.Comment", "/** The app is currently being installed on the device. This status remains until the installation is fully completed. */" },
		{ "Installing.Name", "EOvrAppStatus::Installing" },
		{ "Installing.ToolTip", "The app is currently being installed on the device. This status remains until the installation is fully completed." },
		{ "InstallQueued.Comment", "/** The installation of the app is scheduled and will commence once any prior installations are completed. */" },
		{ "InstallQueued.Name", "EOvrAppStatus::InstallQueued" },
		{ "InstallQueued.ToolTip", "The installation of the app is scheduled and will commence once any prior installations are completed." },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "ToolTip", "This property indicates the current status of the app on the device. It is important to note that\nan app can only query its own status, not the status of other apps installed on the device. It can be\nretrieved by field FOvrAppDownloadProgressResult::StatusCode." },
		{ "Uninstalling.Comment", "/** The app is currently being uninstalled from the device. This status remains until the uninstallation process is complete. */" },
		{ "Uninstalling.Name", "EOvrAppStatus::Uninstalling" },
		{ "Uninstalling.ToolTip", "The app is currently being uninstalled from the device. This status remains until the uninstallation process is complete." },
		{ "Unknown.Name", "EOvrAppStatus::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrAppStatus::Unknown", (int64)EOvrAppStatus::Unknown },
		{ "EOvrAppStatus::Entitled", (int64)EOvrAppStatus::Entitled },
		{ "EOvrAppStatus::DownloadQueued", (int64)EOvrAppStatus::DownloadQueued },
		{ "EOvrAppStatus::Downloading", (int64)EOvrAppStatus::Downloading },
		{ "EOvrAppStatus::Installing", (int64)EOvrAppStatus::Installing },
		{ "EOvrAppStatus::Installed", (int64)EOvrAppStatus::Installed },
		{ "EOvrAppStatus::Uninstalling", (int64)EOvrAppStatus::Uninstalling },
		{ "EOvrAppStatus::InstallQueued", (int64)EOvrAppStatus::InstallQueued },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrAppStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrAppStatus",
	"EOvrAppStatus",
	Z_Construct_UEnum_OVRPlatform_EOvrAppStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrAppStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrAppStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrAppStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrAppStatus()
{
	if (!Z_Registration_Info_UEnum_EOvrAppStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrAppStatus.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrAppStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrAppStatus.InnerSingleton;
}
// End Enum EOvrAppStatus

// Begin Enum EOvrChallengeCreationType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrChallengeCreationType;
static UEnum* EOvrChallengeCreationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrChallengeCreationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrChallengeCreationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrChallengeCreationType, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrChallengeCreationType"));
	}
	return Z_Registration_Info_UEnum_EOvrChallengeCreationType.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrChallengeCreationType>()
{
	return EOvrChallengeCreationType_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrChallengeCreationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Describes the creator of the associated challenge. This field indicates who created the challenge, whether\n * it was EOvrChallengeCreationType::UserCreated or EOvrChallengeCreationType::DeveloperCreated.\n * Understanding the creator of the associated challenge can provide valuable context and help participants better\n * understand the nature and purpose of the challenge.\n */" },
		{ "DeveloperCreated.Comment", "/**\n     * The challenge was created by the app developer. This means that the challenge was created by the team behind the app,\n     * and it may be an official challenge or a special event created by the developers to engage with the community or promote specific\n     * features of the app.\n     */" },
		{ "DeveloperCreated.Name", "EOvrChallengeCreationType::DeveloperCreated" },
		{ "DeveloperCreated.ToolTip", "The challenge was created by the app developer. This means that the challenge was created by the team behind the app,\nand it may be an official challenge or a special event created by the developers to engage with the community or promote specific\nfeatures of the app." },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "ToolTip", "Describes the creator of the associated challenge. This field indicates who created the challenge, whether\nit was EOvrChallengeCreationType::UserCreated or EOvrChallengeCreationType::DeveloperCreated.\nUnderstanding the creator of the associated challenge can provide valuable context and help participants better\nunderstand the nature and purpose of the challenge." },
		{ "Unknown.Name", "EOvrChallengeCreationType::Unknown" },
		{ "UserCreated.Comment", "/**\n     * The challenge was created by a User. This means that a regular user of the app created the challenge, and it may be\n     * a community-driven challenge or a personal challenge created by the user for themselves or others.\n     */" },
		{ "UserCreated.Name", "EOvrChallengeCreationType::UserCreated" },
		{ "UserCreated.ToolTip", "The challenge was created by a User. This means that a regular user of the app created the challenge, and it may be\na community-driven challenge or a personal challenge created by the user for themselves or others." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrChallengeCreationType::Unknown", (int64)EOvrChallengeCreationType::Unknown },
		{ "EOvrChallengeCreationType::UserCreated", (int64)EOvrChallengeCreationType::UserCreated },
		{ "EOvrChallengeCreationType::DeveloperCreated", (int64)EOvrChallengeCreationType::DeveloperCreated },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrChallengeCreationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrChallengeCreationType",
	"EOvrChallengeCreationType",
	Z_Construct_UEnum_OVRPlatform_EOvrChallengeCreationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrChallengeCreationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrChallengeCreationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrChallengeCreationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrChallengeCreationType()
{
	if (!Z_Registration_Info_UEnum_EOvrChallengeCreationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrChallengeCreationType.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrChallengeCreationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrChallengeCreationType.InnerSingleton;
}
// End Enum EOvrChallengeCreationType

// Begin Enum EOvrChallengeViewerFilter
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrChallengeViewerFilter;
static UEnum* EOvrChallengeViewerFilter_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrChallengeViewerFilter.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrChallengeViewerFilter.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrChallengeViewerFilter, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrChallengeViewerFilter"));
	}
	return Z_Registration_Info_UEnum_EOvrChallengeViewerFilter.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrChallengeViewerFilter>()
{
	return EOvrChallengeViewerFilter_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrChallengeViewerFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AllVisible.Comment", "/**\n     * Returns all public ((EOvrChallengeVisibility::Public)) and invite-only (EOvrChallengeVisibility::InviteOnly)\n     * FOvrChallenges in which the user is a participant or invitee. Excludes private (EOvrChallengeVisibility::Private)\n     * challenges. This filter is useful for users who want to see all challenges they are involved in, regardless of their visibility settings.\n     */" },
		{ "AllVisible.Name", "EOvrChallengeViewerFilter::AllVisible" },
		{ "AllVisible.ToolTip", "Returns all public ((EOvrChallengeVisibility::Public)) and invite-only (EOvrChallengeVisibility::InviteOnly)\nFOvrChallenges in which the user is a participant or invitee. Excludes private (EOvrChallengeVisibility::Private)\nchallenges. This filter is useful for users who want to see all challenges they are involved in, regardless of their visibility settings." },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The available filtering options on the FOvrChallenge returned by UOvrRequestsBlueprintLibrary::Challenges_GetList().\n * These filters allow users to customize their search results and retrieve only the challenges that meet specific criteria.\n * See more details of Challenges in [here](https://developer.oculus.com/documentation/unreal/ps-challenges/).\n */" },
		{ "Invited.Comment", "/**\n     * Returns challenges that the user has been invited to. This filter is useful for users who want to see only the challenges\n     * they have been explicitly invited to.\n     */" },
		{ "Invited.Name", "EOvrChallengeViewerFilter::Invited" },
		{ "Invited.ToolTip", "Returns challenges that the user has been invited to. This filter is useful for users who want to see only the challenges\nthey have been explicitly invited to." },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "Participating.Comment", "/**\n     * Returns challenges in which the user is a participant. This filter is useful for users who want to see only the challenges they are\n     * actively participating in.\n     */" },
		{ "Participating.Name", "EOvrChallengeViewerFilter::Participating" },
		{ "Participating.ToolTip", "Returns challenges in which the user is a participant. This filter is useful for users who want to see only the challenges they are\nactively participating in." },
		{ "ParticipatingOrInvited.Comment", "/**\n     * Returns challenges the user is either participating in or invited to. This filter is useful for users who want to see all challenges\n     * they are involved in, whether as a participant or an invitee.\n     */" },
		{ "ParticipatingOrInvited.Name", "EOvrChallengeViewerFilter::ParticipatingOrInvited" },
		{ "ParticipatingOrInvited.ToolTip", "Returns challenges the user is either participating in or invited to. This filter is useful for users who want to see all challenges\nthey are involved in, whether as a participant or an invitee." },
		{ "ToolTip", "The available filtering options on the FOvrChallenge returned by UOvrRequestsBlueprintLibrary::Challenges_GetList().\nThese filters allow users to customize their search results and retrieve only the challenges that meet specific criteria.\nSee more details of Challenges in [here](https://developer.oculus.com/documentation/unreal/ps-challenges/)." },
		{ "Unknown.Name", "EOvrChallengeViewerFilter::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrChallengeViewerFilter::Unknown", (int64)EOvrChallengeViewerFilter::Unknown },
		{ "EOvrChallengeViewerFilter::AllVisible", (int64)EOvrChallengeViewerFilter::AllVisible },
		{ "EOvrChallengeViewerFilter::Participating", (int64)EOvrChallengeViewerFilter::Participating },
		{ "EOvrChallengeViewerFilter::Invited", (int64)EOvrChallengeViewerFilter::Invited },
		{ "EOvrChallengeViewerFilter::ParticipatingOrInvited", (int64)EOvrChallengeViewerFilter::ParticipatingOrInvited },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrChallengeViewerFilter_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrChallengeViewerFilter",
	"EOvrChallengeViewerFilter",
	Z_Construct_UEnum_OVRPlatform_EOvrChallengeViewerFilter_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrChallengeViewerFilter_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrChallengeViewerFilter_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrChallengeViewerFilter_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrChallengeViewerFilter()
{
	if (!Z_Registration_Info_UEnum_EOvrChallengeViewerFilter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrChallengeViewerFilter.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrChallengeViewerFilter_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrChallengeViewerFilter.InnerSingleton;
}
// End Enum EOvrChallengeViewerFilter

// Begin Enum EOvrChallengeVisibility
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrChallengeVisibility;
static UEnum* EOvrChallengeVisibility_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrChallengeVisibility.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrChallengeVisibility.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrChallengeVisibility, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrChallengeVisibility"));
	}
	return Z_Registration_Info_UEnum_EOvrChallengeVisibility.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrChallengeVisibility>()
{
	return EOvrChallengeVisibility_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrChallengeVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The visibility of the challenge. A challenge may be invite-only, public, or private. The visibility setting determines who can\n * see and participate in the challenge.\n * See more details of Challenges in [here](https://developer.oculus.com/documentation/unreal/ps-challenges/).\n */" },
		{ "InviteOnly.Comment", "/**\n     * Only those invited can participate in it. Everyone can see it, but only those with an invitation can joinand participate in the challenge.\n     * This setting is useful for challenges that are meant to be exclusive or for a specific group of people.\n     */" },
		{ "InviteOnly.Name", "EOvrChallengeVisibility::InviteOnly" },
		{ "InviteOnly.ToolTip", "Only those invited can participate in it. Everyone can see it, but only those with an invitation can joinand participate in the challenge.\nThis setting is useful for challenges that are meant to be exclusive or for a specific group of people." },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "Private.Comment", "/**\n     * Only those invited can participate and see this challenge. This setting makes the challenge invisible to everyone except\n     * those who have been explicitly invited. Only those with an invitation can see the challenge details and progress,\n     * and only they can participate. This setting is useful for challenges that are meant to be highly exclusive or confidential.\n     */" },
		{ "Private.Name", "EOvrChallengeVisibility::Private" },
		{ "Private.ToolTip", "Only those invited can participate and see this challenge. This setting makes the challenge invisible to everyone except\nthose who have been explicitly invited. Only those with an invitation can see the challenge details and progress,\nand only they can participate. This setting is useful for challenges that are meant to be highly exclusive or confidential." },
		{ "Public.Comment", "/**\n     * Everyone can participate and see this challenge. This setting makes the challenge open to anyone who wants to join,\n     * and everyone can see the challenge details and progress. This setting is useful for challenges that are meant to be open and inclusive.\n     */" },
		{ "Public.Name", "EOvrChallengeVisibility::Public" },
		{ "Public.ToolTip", "Everyone can participate and see this challenge. This setting makes the challenge open to anyone who wants to join,\nand everyone can see the challenge details and progress. This setting is useful for challenges that are meant to be open and inclusive." },
		{ "ToolTip", "The visibility of the challenge. A challenge may be invite-only, public, or private. The visibility setting determines who can\nsee and participate in the challenge.\nSee more details of Challenges in [here](https://developer.oculus.com/documentation/unreal/ps-challenges/)." },
		{ "Unknown.Name", "EOvrChallengeVisibility::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrChallengeVisibility::Unknown", (int64)EOvrChallengeVisibility::Unknown },
		{ "EOvrChallengeVisibility::InviteOnly", (int64)EOvrChallengeVisibility::InviteOnly },
		{ "EOvrChallengeVisibility::Public", (int64)EOvrChallengeVisibility::Public },
		{ "EOvrChallengeVisibility::Private", (int64)EOvrChallengeVisibility::Private },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrChallengeVisibility_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrChallengeVisibility",
	"EOvrChallengeVisibility",
	Z_Construct_UEnum_OVRPlatform_EOvrChallengeVisibility_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrChallengeVisibility_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrChallengeVisibility_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrChallengeVisibility_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrChallengeVisibility()
{
	if (!Z_Registration_Info_UEnum_EOvrChallengeVisibility.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrChallengeVisibility.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrChallengeVisibility_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrChallengeVisibility.InnerSingleton;
}
// End Enum EOvrChallengeVisibility

// Begin Enum EOvrKeyValuePairType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrKeyValuePairType;
static UEnum* EOvrKeyValuePairType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrKeyValuePairType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrKeyValuePairType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrKeyValuePairType, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrKeyValuePairType"));
	}
	return Z_Registration_Info_UEnum_EOvrKeyValuePairType.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrKeyValuePairType>()
{
	return EOvrKeyValuePairType_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrKeyValuePairType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * It's a data structure that represents a pair of values, where one value serves as the key and the other value serves as the corresponding value.\n * It can be used to store a different type of data, allowing for flexibility in how data is stored and retrieved.\n */" },
		{ "Double.Comment", "/**  This member represents the key value as a double-precision floating-point number. It is used to store numerical data with decimal points, such as prices. */" },
		{ "Double.Name", "EOvrKeyValuePairType::Double" },
		{ "Double.ToolTip", "This member represents the key value as a double-precision floating-point number. It is used to store numerical data with decimal points, such as prices." },
		{ "Int.Comment", "/** This member represents the key value as an integer. It is used to store numerical data, such as ages */" },
		{ "Int.Name", "EOvrKeyValuePairType::Int" },
		{ "Int.ToolTip", "This member represents the key value as an integer. It is used to store numerical data, such as ages" },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "String.Comment", "/** This member represents the key value as a string. It is used to store text-based data, such as names. */" },
		{ "String.Name", "EOvrKeyValuePairType::String" },
		{ "String.ToolTip", "This member represents the key value as a string. It is used to store text-based data, such as names." },
		{ "ToolTip", "It's a data structure that represents a pair of values, where one value serves as the key and the other value serves as the corresponding value.\nIt can be used to store a different type of data, allowing for flexibility in how data is stored and retrieved." },
		{ "Unknown.Name", "EOvrKeyValuePairType::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrKeyValuePairType::String", (int64)EOvrKeyValuePairType::String },
		{ "EOvrKeyValuePairType::Int", (int64)EOvrKeyValuePairType::Int },
		{ "EOvrKeyValuePairType::Double", (int64)EOvrKeyValuePairType::Double },
		{ "EOvrKeyValuePairType::Unknown", (int64)EOvrKeyValuePairType::Unknown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrKeyValuePairType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrKeyValuePairType",
	"EOvrKeyValuePairType",
	Z_Construct_UEnum_OVRPlatform_EOvrKeyValuePairType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrKeyValuePairType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrKeyValuePairType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrKeyValuePairType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrKeyValuePairType()
{
	if (!Z_Registration_Info_UEnum_EOvrKeyValuePairType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrKeyValuePairType.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrKeyValuePairType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrKeyValuePairType.InnerSingleton;
}
// End Enum EOvrKeyValuePairType

// Begin Enum EOvrLaunchResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrLaunchResult;
static UEnum* EOvrLaunchResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrLaunchResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrLaunchResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrLaunchResult, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrLaunchResult"));
	}
	return Z_Registration_Info_UEnum_EOvrLaunchResult.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrLaunchResult>()
{
	return EOvrLaunchResult_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrLaunchResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An enum that specifies the whether the attempt to launch this application via a deeplink was successful.\n * The value is meant to be reported after a deeplink by calling UOvrFunctionsBlueprintLibrary::ApplicationLifecycle_LogDeeplinkResult\n */" },
		{ "FailedGameAlreadyStarted.Comment", "/** The application launch failed because the game has already started. */" },
		{ "FailedGameAlreadyStarted.Name", "EOvrLaunchResult::FailedGameAlreadyStarted" },
		{ "FailedGameAlreadyStarted.ToolTip", "The application launch failed because the game has already started." },
		{ "FailedOtherReason.Comment", "/** The application launch failed due to some other reason. */" },
		{ "FailedOtherReason.Name", "EOvrLaunchResult::FailedOtherReason" },
		{ "FailedOtherReason.ToolTip", "The application launch failed due to some other reason." },
		{ "FailedRoomFull.Comment", "/** The application launch failed because the room was full. */" },
		{ "FailedRoomFull.Name", "EOvrLaunchResult::FailedRoomFull" },
		{ "FailedRoomFull.ToolTip", "The application launch failed because the room was full." },
		{ "FailedRoomNotFound.Comment", "/** The appplicatin launch failed because the room couldn't be found. */" },
		{ "FailedRoomNotFound.Name", "EOvrLaunchResult::FailedRoomNotFound" },
		{ "FailedRoomNotFound.ToolTip", "The appplicatin launch failed because the room couldn't be found." },
		{ "FailedUserDeclined.Comment", "/** The application launch failed because the user declined the invitation. */" },
		{ "FailedUserDeclined.Name", "EOvrLaunchResult::FailedUserDeclined" },
		{ "FailedUserDeclined.ToolTip", "The application launch failed because the user declined the invitation." },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "Success.Comment", "/** The application launched successfully. */" },
		{ "Success.Name", "EOvrLaunchResult::Success" },
		{ "Success.ToolTip", "The application launched successfully." },
		{ "ToolTip", "An enum that specifies the whether the attempt to launch this application via a deeplink was successful.\nThe value is meant to be reported after a deeplink by calling UOvrFunctionsBlueprintLibrary::ApplicationLifecycle_LogDeeplinkResult" },
		{ "Unknown.Name", "EOvrLaunchResult::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrLaunchResult::Unknown", (int64)EOvrLaunchResult::Unknown },
		{ "EOvrLaunchResult::Success", (int64)EOvrLaunchResult::Success },
		{ "EOvrLaunchResult::FailedRoomFull", (int64)EOvrLaunchResult::FailedRoomFull },
		{ "EOvrLaunchResult::FailedGameAlreadyStarted", (int64)EOvrLaunchResult::FailedGameAlreadyStarted },
		{ "EOvrLaunchResult::FailedRoomNotFound", (int64)EOvrLaunchResult::FailedRoomNotFound },
		{ "EOvrLaunchResult::FailedUserDeclined", (int64)EOvrLaunchResult::FailedUserDeclined },
		{ "EOvrLaunchResult::FailedOtherReason", (int64)EOvrLaunchResult::FailedOtherReason },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrLaunchResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrLaunchResult",
	"EOvrLaunchResult",
	Z_Construct_UEnum_OVRPlatform_EOvrLaunchResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrLaunchResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrLaunchResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrLaunchResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrLaunchResult()
{
	if (!Z_Registration_Info_UEnum_EOvrLaunchResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrLaunchResult.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrLaunchResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrLaunchResult.InnerSingleton;
}
// End Enum EOvrLaunchResult

// Begin Enum EOvrLaunchType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrLaunchType;
static UEnum* EOvrLaunchType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrLaunchType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrLaunchType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrLaunchType, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrLaunchType"));
	}
	return Z_Registration_Info_UEnum_EOvrLaunchType.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrLaunchType>()
{
	return EOvrLaunchType_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrLaunchType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * It's an enum that defines several different types of launches for an application.\n * It provides a way to differentiate between different types of launches and to access additional information about the launch details.\n * It can be retrieved using field FOvrLaunchDetails::LaunchType to get the launch type information of an application.\n */" },
		{ "Coordinated.Comment", "/**  DEPRECATED  */" },
		{ "Coordinated.Name", "EOvrLaunchType::Coordinated" },
		{ "Coordinated.ToolTip", "DEPRECATED" },
		{ "Deeplink.Comment", "/**\n     *  Launched from UOvrRequestsBlueprintLibrary::Application_LaunchOtherApp().\n     *     Check field FOvrLaunchDetails::LaunchSource and field FOvrLaunchDetails::DeeplinkMessage. \n     */" },
		{ "Deeplink.Name", "EOvrLaunchType::Deeplink" },
		{ "Deeplink.ToolTip", "Launched from UOvrRequestsBlueprintLibrary::Application_LaunchOtherApp().\n   Check field FOvrLaunchDetails::LaunchSource and field FOvrLaunchDetails::DeeplinkMessage." },
		{ "Invite.Comment", "/**\n     *  Launch from the user accepting an invite.  Check field FOvrLaunchDetails::LobbySessionID,\n     *     field FOvrLaunchDetails::MatchSessionID, field FOvrLaunchDetails::DestinationApiName and\n     *     field FOvrLaunchDetails::DeeplinkMessage. \n     */" },
		{ "Invite.Name", "EOvrLaunchType::Invite" },
		{ "Invite.ToolTip", "Launch from the user accepting an invite.  Check field FOvrLaunchDetails::LobbySessionID,\n   field FOvrLaunchDetails::MatchSessionID, field FOvrLaunchDetails::DestinationApiName and\n   field FOvrLaunchDetails::DeeplinkMessage." },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "Normal.Comment", "/**  Normal launch from the user's library  */" },
		{ "Normal.Name", "EOvrLaunchType::Normal" },
		{ "Normal.ToolTip", "Normal launch from the user's library" },
		{ "ToolTip", "It's an enum that defines several different types of launches for an application.\nIt provides a way to differentiate between different types of launches and to access additional information about the launch details.\nIt can be retrieved using field FOvrLaunchDetails::LaunchType to get the launch type information of an application." },
		{ "Unknown.Name", "EOvrLaunchType::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrLaunchType::Unknown", (int64)EOvrLaunchType::Unknown },
		{ "EOvrLaunchType::Normal", (int64)EOvrLaunchType::Normal },
		{ "EOvrLaunchType::Invite", (int64)EOvrLaunchType::Invite },
		{ "EOvrLaunchType::Coordinated", (int64)EOvrLaunchType::Coordinated },
		{ "EOvrLaunchType::Deeplink", (int64)EOvrLaunchType::Deeplink },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrLaunchType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrLaunchType",
	"EOvrLaunchType",
	Z_Construct_UEnum_OVRPlatform_EOvrLaunchType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrLaunchType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrLaunchType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrLaunchType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrLaunchType()
{
	if (!Z_Registration_Info_UEnum_EOvrLaunchType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrLaunchType.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrLaunchType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrLaunchType.InnerSingleton;
}
// End Enum EOvrLaunchType

// Begin Enum EOvrLeaderboardFilterType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrLeaderboardFilterType;
static UEnum* EOvrLeaderboardFilterType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrLeaderboardFilterType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrLeaderboardFilterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrLeaderboardFilterType, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrLeaderboardFilterType"));
	}
	return Z_Registration_Info_UEnum_EOvrLeaderboardFilterType.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrLeaderboardFilterType>()
{
	return EOvrLeaderboardFilterType_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrLeaderboardFilterType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An enum that defines the different types of filters that can be applied to a leaderboard.\n * It can be used in UOvrRequestsBlueprintLibrary::Leaderboard_GetEntries() to filter the leaderboard entries, such as only friends or specific user IDs.\n */" },
		{ "Friends.Comment", "/** This value indicates that the leaderboard should be filtered to include only friends (bidirectional followers) of the current user. */" },
		{ "Friends.Name", "EOvrLeaderboardFilterType::Friends" },
		{ "Friends.ToolTip", "This value indicates that the leaderboard should be filtered to include only friends (bidirectional followers) of the current user." },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "None.Comment", "/** No filter enabled on the leaderboard. */" },
		{ "None.Name", "EOvrLeaderboardFilterType::None" },
		{ "None.ToolTip", "No filter enabled on the leaderboard." },
		{ "ToolTip", "An enum that defines the different types of filters that can be applied to a leaderboard.\nIt can be used in UOvrRequestsBlueprintLibrary::Leaderboard_GetEntries() to filter the leaderboard entries, such as only friends or specific user IDs." },
		{ "Unknown.Name", "EOvrLeaderboardFilterType::Unknown" },
		{ "UserIds.Comment", "/**\n     * Filter the leaderboard to include specific user IDs.\n     * Use this filter to get rankings for users that are competing against each other.\n     * You specify the leaderboard name and whether to start at the top, or for the results to center on the (client) user.\n     * Note that if you specify the results to center on the client user, their leaderboard entry will be included in the returned array, regardless of whether their ID is explicitly specified in the list of IDs.\n     */" },
		{ "UserIds.Name", "EOvrLeaderboardFilterType::UserIds" },
		{ "UserIds.ToolTip", "Filter the leaderboard to include specific user IDs.\nUse this filter to get rankings for users that are competing against each other.\nYou specify the leaderboard name and whether to start at the top, or for the results to center on the (client) user.\nNote that if you specify the results to center on the client user, their leaderboard entry will be included in the returned array, regardless of whether their ID is explicitly specified in the list of IDs." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrLeaderboardFilterType::None", (int64)EOvrLeaderboardFilterType::None },
		{ "EOvrLeaderboardFilterType::Friends", (int64)EOvrLeaderboardFilterType::Friends },
		{ "EOvrLeaderboardFilterType::Unknown", (int64)EOvrLeaderboardFilterType::Unknown },
		{ "EOvrLeaderboardFilterType::UserIds", (int64)EOvrLeaderboardFilterType::UserIds },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrLeaderboardFilterType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrLeaderboardFilterType",
	"EOvrLeaderboardFilterType",
	Z_Construct_UEnum_OVRPlatform_EOvrLeaderboardFilterType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrLeaderboardFilterType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrLeaderboardFilterType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrLeaderboardFilterType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrLeaderboardFilterType()
{
	if (!Z_Registration_Info_UEnum_EOvrLeaderboardFilterType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrLeaderboardFilterType.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrLeaderboardFilterType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrLeaderboardFilterType.InnerSingleton;
}
// End Enum EOvrLeaderboardFilterType

// Begin Enum EOvrLeaderboardStartAt
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrLeaderboardStartAt;
static UEnum* EOvrLeaderboardStartAt_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrLeaderboardStartAt.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrLeaderboardStartAt.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrLeaderboardStartAt, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrLeaderboardStartAt"));
	}
	return Z_Registration_Info_UEnum_EOvrLeaderboardStartAt.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrLeaderboardStartAt>()
{
	return EOvrLeaderboardStartAt_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrLeaderboardStartAt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CenteredOnViewer.Comment", "/** This value indicates that the leaderboard entries should start at the viewer's position on the leaderboard */" },
		{ "CenteredOnViewer.Name", "EOvrLeaderboardStartAt::CenteredOnViewer" },
		{ "CenteredOnViewer.ToolTip", "This value indicates that the leaderboard entries should start at the viewer's position on the leaderboard" },
		{ "CenteredOnViewerOrTop.Comment", "/**  This value indicates that the leaderboard entries should start at the viewer's position on the leaderboard, or at the top of the leaderboard if the viewer is not present. */" },
		{ "CenteredOnViewerOrTop.Name", "EOvrLeaderboardStartAt::CenteredOnViewerOrTop" },
		{ "CenteredOnViewerOrTop.ToolTip", "This value indicates that the leaderboard entries should start at the viewer's position on the leaderboard, or at the top of the leaderboard if the viewer is not present." },
		{ "Comment", "/**\n * An enum that allows you to specify the starting point for the leaderboard entries.\n * It can be used as a params in UOvrRequestsBlueprintLibrary::Leaderboard_GetEntries() to the starting point for the leaderboard entries that are returned in the response.\n */" },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "ToolTip", "An enum that allows you to specify the starting point for the leaderboard entries.\nIt can be used as a params in UOvrRequestsBlueprintLibrary::Leaderboard_GetEntries() to the starting point for the leaderboard entries that are returned in the response." },
		{ "Top.Comment", "/** This value indicates that the leaderboard entries should start at the top of the leaderboard. */" },
		{ "Top.Name", "EOvrLeaderboardStartAt::Top" },
		{ "Top.ToolTip", "This value indicates that the leaderboard entries should start at the top of the leaderboard." },
		{ "Unknown.Name", "EOvrLeaderboardStartAt::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrLeaderboardStartAt::Top", (int64)EOvrLeaderboardStartAt::Top },
		{ "EOvrLeaderboardStartAt::CenteredOnViewer", (int64)EOvrLeaderboardStartAt::CenteredOnViewer },
		{ "EOvrLeaderboardStartAt::CenteredOnViewerOrTop", (int64)EOvrLeaderboardStartAt::CenteredOnViewerOrTop },
		{ "EOvrLeaderboardStartAt::Unknown", (int64)EOvrLeaderboardStartAt::Unknown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrLeaderboardStartAt_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrLeaderboardStartAt",
	"EOvrLeaderboardStartAt",
	Z_Construct_UEnum_OVRPlatform_EOvrLeaderboardStartAt_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrLeaderboardStartAt_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrLeaderboardStartAt_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrLeaderboardStartAt_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrLeaderboardStartAt()
{
	if (!Z_Registration_Info_UEnum_EOvrLeaderboardStartAt.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrLeaderboardStartAt.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrLeaderboardStartAt_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrLeaderboardStartAt.InnerSingleton;
}
// End Enum EOvrLeaderboardStartAt

// Begin Enum EOvrLivestreamingStartStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrLivestreamingStartStatus;
static UEnum* EOvrLivestreamingStartStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrLivestreamingStartStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrLivestreamingStartStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrLivestreamingStartStatus, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrLivestreamingStartStatus"));
	}
	return Z_Registration_Info_UEnum_EOvrLivestreamingStartStatus.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrLivestreamingStartStatus>()
{
	return EOvrLivestreamingStartStatus_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrLivestreamingStartStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * It's an enum that represents the possible outcomes of starting a livestreaming session.\n * This allows the API to return a standardized and well-defined set of values to indicate the outcome of starting a livestreaming session.\n * It can be used in field FOvrLivestreamingStartResult::StreamingResult as type information.\n */" },
		{ "MissingParameters.Comment", "/** This member represents an error where required parameters were missing during the livestreaming start process. */" },
		{ "MissingParameters.Name", "EOvrLivestreamingStartStatus::MissingParameters" },
		{ "MissingParameters.ToolTip", "This member represents an error where required parameters were missing during the livestreaming start process." },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "NoFbConnect.Comment", "/** This member represents an error where Facebook Connect was not enabled during the livestreaming start process. */" },
		{ "NoFbConnect.Name", "EOvrLivestreamingStartStatus::NoFbConnect" },
		{ "NoFbConnect.ToolTip", "This member represents an error where Facebook Connect was not enabled during the livestreaming start process." },
		{ "NoPackageSet.Comment", "/** This member represents an error where the package was not set during the livestreaming start process.  */" },
		{ "NoPackageSet.Name", "EOvrLivestreamingStartStatus::NoPackageSet" },
		{ "NoPackageSet.ToolTip", "This member represents an error where the package was not set during the livestreaming start process." },
		{ "NoSessionId.Comment", "/** This member represents an error where a session ID was not provided during the livestreaming start process. */" },
		{ "NoSessionId.Name", "EOvrLivestreamingStartStatus::NoSessionId" },
		{ "NoSessionId.ToolTip", "This member represents an error where a session ID was not provided during the livestreaming start process." },
		{ "Success.Comment", "/** This member represents a successful start of the livestreaming session. */" },
		{ "Success.Name", "EOvrLivestreamingStartStatus::Success" },
		{ "Success.ToolTip", "This member represents a successful start of the livestreaming session." },
		{ "ToolTip", "It's an enum that represents the possible outcomes of starting a livestreaming session.\nThis allows the API to return a standardized and well-defined set of values to indicate the outcome of starting a livestreaming session.\nIt can be used in field FOvrLivestreamingStartResult::StreamingResult as type information." },
		{ "Unknown.Name", "EOvrLivestreamingStartStatus::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrLivestreamingStartStatus::Success", (int64)EOvrLivestreamingStartStatus::Success },
		{ "EOvrLivestreamingStartStatus::Unknown", (int64)EOvrLivestreamingStartStatus::Unknown },
		{ "EOvrLivestreamingStartStatus::NoPackageSet", (int64)EOvrLivestreamingStartStatus::NoPackageSet },
		{ "EOvrLivestreamingStartStatus::NoFbConnect", (int64)EOvrLivestreamingStartStatus::NoFbConnect },
		{ "EOvrLivestreamingStartStatus::NoSessionId", (int64)EOvrLivestreamingStartStatus::NoSessionId },
		{ "EOvrLivestreamingStartStatus::MissingParameters", (int64)EOvrLivestreamingStartStatus::MissingParameters },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrLivestreamingStartStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrLivestreamingStartStatus",
	"EOvrLivestreamingStartStatus",
	Z_Construct_UEnum_OVRPlatform_EOvrLivestreamingStartStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrLivestreamingStartStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrLivestreamingStartStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrLivestreamingStartStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrLivestreamingStartStatus()
{
	if (!Z_Registration_Info_UEnum_EOvrLivestreamingStartStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrLivestreamingStartStatus.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrLivestreamingStartStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrLivestreamingStartStatus.InnerSingleton;
}
// End Enum EOvrLivestreamingStartStatus

// Begin Enum EOvrLogEventName
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrLogEventName;
static UEnum* EOvrLogEventName_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrLogEventName.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrLogEventName.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrLogEventName, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrLogEventName"));
	}
	return Z_Registration_Info_UEnum_EOvrLogEventName.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrLogEventName>()
{
	return EOvrLogEventName_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrLogEventName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AdClick.Comment", "/** This event is triggered when a user clicks on an advertisement within the app. */" },
		{ "AdClick.Name", "EOvrLogEventName::AdClick" },
		{ "AdClick.ToolTip", "This event is triggered when a user clicks on an advertisement within the app." },
		{ "AdImpression.Comment", "/** This event is triggered when an advertisement is displayed to the user within the app. */" },
		{ "AdImpression.Name", "EOvrLogEventName::AdImpression" },
		{ "AdImpression.ToolTip", "This event is triggered when an advertisement is displayed to the user within the app." },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * It's an enum that represents a list of possible event names that can be used to track user interactions and other important occurrences within an application.\n * These events can be used to track user engagement, conversion rates, and other important metrics within an app. By logging these events, developers can gain valuable insights into how users interact with their app and make data-driven decisions to improve the user experience.\n * The log event parameters can be found in #EOvrLogEventParameter.\n */" },
		{ "Contact.Comment", "/** This event is triggered when a user interacts with a contact form or other contact-related feature within the app. */" },
		{ "Contact.Name", "EOvrLogEventName::Contact" },
		{ "Contact.ToolTip", "This event is triggered when a user interacts with a contact form or other contact-related feature within the app." },
		{ "CustomizeProduct.Comment", "/** This event is triggered when a user customizes a product or item within the app. This could include selecting options, choosing colors, or adding features. */" },
		{ "CustomizeProduct.Name", "EOvrLogEventName::CustomizeProduct" },
		{ "CustomizeProduct.ToolTip", "This event is triggered when a user customizes a product or item within the app. This could include selecting options, choosing colors, or adding features." },
		{ "Donate.Comment", "/** This event is triggered when a user makes a donation within the app. */" },
		{ "Donate.Name", "EOvrLogEventName::Donate" },
		{ "Donate.ToolTip", "This event is triggered when a user makes a donation within the app." },
		{ "FindLocation.Comment", "/** This event is triggered when a user interacts with a feature that helps them find a physical location, such as a store or event. */" },
		{ "FindLocation.Name", "EOvrLogEventName::FindLocation" },
		{ "FindLocation.ToolTip", "This event is triggered when a user interacts with a feature that helps them find a physical location, such as a store or event." },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "Schedule.Comment", "/** This event is triggered when a user schedules an appointment or event within the app. */" },
		{ "Schedule.Name", "EOvrLogEventName::Schedule" },
		{ "Schedule.ToolTip", "This event is triggered when a user schedules an appointment or event within the app." },
		{ "SmartTrial.Comment", "/** This event is triggered when a user starts a free trial or demo of an app or game. */" },
		{ "SmartTrial.Name", "EOvrLogEventName::SmartTrial" },
		{ "SmartTrial.ToolTip", "This event is triggered when a user starts a free trial or demo of an app or game." },
		{ "SubmitApplication.Comment", "/** This event is triggered when a user submits an application or form within the app. */" },
		{ "SubmitApplication.Name", "EOvrLogEventName::SubmitApplication" },
		{ "SubmitApplication.ToolTip", "This event is triggered when a user submits an application or form within the app." },
		{ "Subscribe.Comment", "/** This event is triggered when a user subscribes to a service or newsletter within the app. */" },
		{ "Subscribe.Name", "EOvrLogEventName::Subscribe" },
		{ "Subscribe.ToolTip", "This event is triggered when a user subscribes to a service or newsletter within the app." },
		{ "SubscriptionFailed.Comment", "/** This event is triggered when a subscription fails within the app. This could include an error message, a failed payment, or a cancelled subscription. */" },
		{ "SubscriptionFailed.Name", "EOvrLogEventName::SubscriptionFailed" },
		{ "SubscriptionFailed.ToolTip", "This event is triggered when a subscription fails within the app. This could include an error message, a failed payment, or a cancelled subscription." },
		{ "SubscriptionInitiatedCheckout.Comment", "/** This event is triggered when a user begins the checkout process for a subscription within the app. */" },
		{ "SubscriptionInitiatedCheckout.Name", "EOvrLogEventName::SubscriptionInitiatedCheckout" },
		{ "SubscriptionInitiatedCheckout.ToolTip", "This event is triggered when a user begins the checkout process for a subscription within the app." },
		{ "SubscriptionRestore.Comment", "/** This event is triggered when a subscription is restored within the app. This could include reactivating a subscription, reinstating a service, or restoring access to a product. */" },
		{ "SubscriptionRestore.Name", "EOvrLogEventName::SubscriptionRestore" },
		{ "SubscriptionRestore.ToolTip", "This event is triggered when a subscription is restored within the app. This could include reactivating a subscription, reinstating a service, or restoring access to a product." },
		{ "ToolTip", "It's an enum that represents a list of possible event names that can be used to track user interactions and other important occurrences within an application.\nThese events can be used to track user engagement, conversion rates, and other important metrics within an app. By logging these events, developers can gain valuable insights into how users interact with their app and make data-driven decisions to improve the user experience.\nThe log event parameters can be found in #EOvrLogEventParameter." },
		{ "Unknown.Name", "EOvrLogEventName::Unknown" },
		{ "VrAchievementUnlocked.Comment", "/** This event is triggered when a user achieves a level or milestone within the app. */" },
		{ "VrAchievementUnlocked.Name", "EOvrLogEventName::VrAchievementUnlocked" },
		{ "VrAchievementUnlocked.ToolTip", "This event is triggered when a user achieves a level or milestone within the app." },
		{ "VrActivateApp.Comment", "/** This event is triggered when a user activates the app.  This could include launching the app, logging in, or starting a new session. */" },
		{ "VrActivateApp.Name", "EOvrLogEventName::VrActivateApp" },
		{ "VrActivateApp.ToolTip", "This event is triggered when a user activates the app.  This could include launching the app, logging in, or starting a new session." },
		{ "VrAddPaymentInfo.Comment", "/** This event is triggered when a user adds payment information within the app. This could include entering credit card details, linking a PayPal account, or setting up recurring payments. */" },
		{ "VrAddPaymentInfo.Name", "EOvrLogEventName::VrAddPaymentInfo" },
		{ "VrAddPaymentInfo.ToolTip", "This event is triggered when a user adds payment information within the app. This could include entering credit card details, linking a PayPal account, or setting up recurring payments." },
		{ "VrAddToCart.Comment", "/** This event is triggered when a user adds an item to their cart within the app. This could include selecting products and choosing quantities. */" },
		{ "VrAddToCart.Name", "EOvrLogEventName::VrAddToCart" },
		{ "VrAddToCart.ToolTip", "This event is triggered when a user adds an item to their cart within the app. This could include selecting products and choosing quantities." },
		{ "VrAddToWishlist.Comment", "/** This event is triggered when a user adds an item to their wishlist within the app. */" },
		{ "VrAddToWishlist.Name", "EOvrLogEventName::VrAddToWishlist" },
		{ "VrAddToWishlist.ToolTip", "This event is triggered when a user adds an item to their wishlist within the app." },
		{ "VrCatalogUpdate.Comment", "/** This event is triggered when a user updates their catalog or inventory within the app. */" },
		{ "VrCatalogUpdate.Name", "EOvrLogEventName::VrCatalogUpdate" },
		{ "VrCatalogUpdate.ToolTip", "This event is triggered when a user updates their catalog or inventory within the app." },
		{ "VrCompleteRegistration.Comment", "/**\n     * This event is triggered when a user completes the registration process within the app.\n     * This could include creating an account, verifying email address, or completing a profile.\n     */" },
		{ "VrCompleteRegistration.Name", "EOvrLogEventName::VrCompleteRegistration" },
		{ "VrCompleteRegistration.ToolTip", "This event is triggered when a user completes the registration process within the app.\nThis could include creating an account, verifying email address, or completing a profile." },
		{ "VrContentView.Comment", "/** This event is triggered when a user views content within the app, such as a video or article. */" },
		{ "VrContentView.Name", "EOvrLogEventName::VrContentView" },
		{ "VrContentView.ToolTip", "This event is triggered when a user views content within the app, such as a video or article." },
		{ "VrDeactivateApp.Comment", "/** This event is triggered when a user deactivates the app. This could include closing the app, logging out, or ending a session. */" },
		{ "VrDeactivateApp.Name", "EOvrLogEventName::VrDeactivateApp" },
		{ "VrDeactivateApp.ToolTip", "This event is triggered when a user deactivates the app. This could include closing the app, logging out, or ending a session." },
		{ "VrInitiatedCheckout.Comment", "/** This event is triggered when a user begins the checkout process within the app. This could include reviewing orders, entering shipping information, or selecting payment methods. */" },
		{ "VrInitiatedCheckout.Name", "EOvrLogEventName::VrInitiatedCheckout" },
		{ "VrInitiatedCheckout.ToolTip", "This event is triggered when a user begins the checkout process within the app. This could include reviewing orders, entering shipping information, or selecting payment methods." },
		{ "VrLevelAchieved.Comment", "/** This event is triggered when a user achieves a level or milestone within the app. */" },
		{ "VrLevelAchieved.Name", "EOvrLogEventName::VrLevelAchieved" },
		{ "VrLevelAchieved.ToolTip", "This event is triggered when a user achieves a level or milestone within the app." },
		{ "VrObtainPushToken.Comment", "/** This event is triggered when a user obtains a push token within the app. */" },
		{ "VrObtainPushToken.Name", "EOvrLogEventName::VrObtainPushToken" },
		{ "VrObtainPushToken.ToolTip", "This event is triggered when a user obtains a push token within the app." },
		{ "VrPurchase.Comment", "/** This event is triggered when a user completes a purchase within the app. This could include finalizing an order, confirming payment, or receiving a confirmation message. */" },
		{ "VrPurchase.Name", "EOvrLogEventName::VrPurchase" },
		{ "VrPurchase.ToolTip", "This event is triggered when a user completes a purchase within the app. This could include finalizing an order, confirming payment, or receiving a confirmation message." },
		{ "VrPurchaseFailed.Comment", "/** This event is triggered when a purchase fails within the app. This could include an error message, a failed payment, or a cancelled order. */" },
		{ "VrPurchaseFailed.Name", "EOvrLogEventName::VrPurchaseFailed" },
		{ "VrPurchaseFailed.ToolTip", "This event is triggered when a purchase fails within the app. This could include an error message, a failed payment, or a cancelled order." },
		{ "VrPurchaseRestored.Comment", "/** This event is triggered when a purchase is restored within the app. This could include reactivating a subscription, reinstating a service, or restoring access to a product. */" },
		{ "VrPurchaseRestored.Name", "EOvrLogEventName::VrPurchaseRestored" },
		{ "VrPurchaseRestored.ToolTip", "This event is triggered when a purchase is restored within the app. This could include reactivating a subscription, reinstating a service, or restoring access to a product." },
		{ "VrPushOpened.Comment", "/** This event is triggered when a user opens a push notification within the app. */" },
		{ "VrPushOpened.Name", "EOvrLogEventName::VrPushOpened" },
		{ "VrPushOpened.ToolTip", "This event is triggered when a user opens a push notification within the app." },
		{ "VrRate.Comment", "/**\n     * This event is triggered when a user rates an item or experience within the app.\n     * This could include rating a product, service, or experience on a scale.\n     */" },
		{ "VrRate.Name", "EOvrLogEventName::VrRate" },
		{ "VrRate.ToolTip", "This event is triggered when a user rates an item or experience within the app.\nThis could include rating a product, service, or experience on a scale." },
		{ "VrSdkBackgroundStatusAvailable.Comment", "/** This event is triggered when the app is granted background status by the Oculus Platform SDK. */" },
		{ "VrSdkBackgroundStatusAvailable.Name", "EOvrLogEventName::VrSdkBackgroundStatusAvailable" },
		{ "VrSdkBackgroundStatusAvailable.ToolTip", "This event is triggered when the app is granted background status by the Oculus Platform SDK." },
		{ "VrSdkBackgroundStatusDenied.Comment", "/** This event is triggered when the app is denied background status by the Oculus Platform SDK. */" },
		{ "VrSdkBackgroundStatusDenied.Name", "EOvrLogEventName::VrSdkBackgroundStatusDenied" },
		{ "VrSdkBackgroundStatusDenied.ToolTip", "This event is triggered when the app is denied background status by the Oculus Platform SDK." },
		{ "VrSdkBackgroundStatusRestricted.Comment", "/** This event is triggered when the app is granted restricted background status by the Oculus Platform SDK. */" },
		{ "VrSdkBackgroundStatusRestricted.Name", "EOvrLogEventName::VrSdkBackgroundStatusRestricted" },
		{ "VrSdkBackgroundStatusRestricted.ToolTip", "This event is triggered when the app is granted restricted background status by the Oculus Platform SDK." },
		{ "VrSdkInitialize.Comment", "/** This event is triggered when the Oculus Platform SDK is initialized within the app. This could include setting up the SDK, loading assets, or initializing game engines. */" },
		{ "VrSdkInitialize.Name", "EOvrLogEventName::VrSdkInitialize" },
		{ "VrSdkInitialize.ToolTip", "This event is triggered when the Oculus Platform SDK is initialized within the app. This could include setting up the SDK, loading assets, or initializing game engines." },
		{ "VrSearch.Comment", "/** This event is triggered when a user performs a search within the app. This could include searching for a product, service, or information. */" },
		{ "VrSearch.Name", "EOvrLogEventName::VrSearch" },
		{ "VrSearch.ToolTip", "This event is triggered when a user performs a search within the app. This could include searching for a product, service, or information." },
		{ "VrSpentCredits.Comment", "/** This event is triggered when a user spends credits or virtual currency within the app. */" },
		{ "VrSpentCredits.Name", "EOvrLogEventName::VrSpentCredits" },
		{ "VrSpentCredits.ToolTip", "This event is triggered when a user spends credits or virtual currency within the app." },
		{ "VrTutorialCompletion.Comment", "/** This event is triggered when a user completes a tutorial or guided experience within the app. */" },
		{ "VrTutorialCompletion.Name", "EOvrLogEventName::VrTutorialCompletion" },
		{ "VrTutorialCompletion.ToolTip", "This event is triggered when a user completes a tutorial or guided experience within the app." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrLogEventName::Unknown", (int64)EOvrLogEventName::Unknown },
		{ "EOvrLogEventName::AdClick", (int64)EOvrLogEventName::AdClick },
		{ "EOvrLogEventName::AdImpression", (int64)EOvrLogEventName::AdImpression },
		{ "EOvrLogEventName::VrCompleteRegistration", (int64)EOvrLogEventName::VrCompleteRegistration },
		{ "EOvrLogEventName::VrTutorialCompletion", (int64)EOvrLogEventName::VrTutorialCompletion },
		{ "EOvrLogEventName::Contact", (int64)EOvrLogEventName::Contact },
		{ "EOvrLogEventName::CustomizeProduct", (int64)EOvrLogEventName::CustomizeProduct },
		{ "EOvrLogEventName::Donate", (int64)EOvrLogEventName::Donate },
		{ "EOvrLogEventName::FindLocation", (int64)EOvrLogEventName::FindLocation },
		{ "EOvrLogEventName::VrRate", (int64)EOvrLogEventName::VrRate },
		{ "EOvrLogEventName::Schedule", (int64)EOvrLogEventName::Schedule },
		{ "EOvrLogEventName::VrSearch", (int64)EOvrLogEventName::VrSearch },
		{ "EOvrLogEventName::SmartTrial", (int64)EOvrLogEventName::SmartTrial },
		{ "EOvrLogEventName::SubmitApplication", (int64)EOvrLogEventName::SubmitApplication },
		{ "EOvrLogEventName::Subscribe", (int64)EOvrLogEventName::Subscribe },
		{ "EOvrLogEventName::VrContentView", (int64)EOvrLogEventName::VrContentView },
		{ "EOvrLogEventName::VrSdkInitialize", (int64)EOvrLogEventName::VrSdkInitialize },
		{ "EOvrLogEventName::VrSdkBackgroundStatusAvailable", (int64)EOvrLogEventName::VrSdkBackgroundStatusAvailable },
		{ "EOvrLogEventName::VrSdkBackgroundStatusDenied", (int64)EOvrLogEventName::VrSdkBackgroundStatusDenied },
		{ "EOvrLogEventName::VrSdkBackgroundStatusRestricted", (int64)EOvrLogEventName::VrSdkBackgroundStatusRestricted },
		{ "EOvrLogEventName::VrAddPaymentInfo", (int64)EOvrLogEventName::VrAddPaymentInfo },
		{ "EOvrLogEventName::VrAddToCart", (int64)EOvrLogEventName::VrAddToCart },
		{ "EOvrLogEventName::VrAddToWishlist", (int64)EOvrLogEventName::VrAddToWishlist },
		{ "EOvrLogEventName::VrInitiatedCheckout", (int64)EOvrLogEventName::VrInitiatedCheckout },
		{ "EOvrLogEventName::VrPurchase", (int64)EOvrLogEventName::VrPurchase },
		{ "EOvrLogEventName::VrCatalogUpdate", (int64)EOvrLogEventName::VrCatalogUpdate },
		{ "EOvrLogEventName::VrPurchaseFailed", (int64)EOvrLogEventName::VrPurchaseFailed },
		{ "EOvrLogEventName::VrPurchaseRestored", (int64)EOvrLogEventName::VrPurchaseRestored },
		{ "EOvrLogEventName::SubscriptionInitiatedCheckout", (int64)EOvrLogEventName::SubscriptionInitiatedCheckout },
		{ "EOvrLogEventName::SubscriptionFailed", (int64)EOvrLogEventName::SubscriptionFailed },
		{ "EOvrLogEventName::SubscriptionRestore", (int64)EOvrLogEventName::SubscriptionRestore },
		{ "EOvrLogEventName::VrLevelAchieved", (int64)EOvrLogEventName::VrLevelAchieved },
		{ "EOvrLogEventName::VrAchievementUnlocked", (int64)EOvrLogEventName::VrAchievementUnlocked },
		{ "EOvrLogEventName::VrSpentCredits", (int64)EOvrLogEventName::VrSpentCredits },
		{ "EOvrLogEventName::VrObtainPushToken", (int64)EOvrLogEventName::VrObtainPushToken },
		{ "EOvrLogEventName::VrPushOpened", (int64)EOvrLogEventName::VrPushOpened },
		{ "EOvrLogEventName::VrActivateApp", (int64)EOvrLogEventName::VrActivateApp },
		{ "EOvrLogEventName::VrDeactivateApp", (int64)EOvrLogEventName::VrDeactivateApp },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrLogEventName_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrLogEventName",
	"EOvrLogEventName",
	Z_Construct_UEnum_OVRPlatform_EOvrLogEventName_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrLogEventName_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrLogEventName_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrLogEventName_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrLogEventName()
{
	if (!Z_Registration_Info_UEnum_EOvrLogEventName.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrLogEventName.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrLogEventName_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrLogEventName.InnerSingleton;
}
// End Enum EOvrLogEventName

// Begin Enum EOvrLogEventParameter
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrLogEventParameter;
static UEnum* EOvrLogEventParameter_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrLogEventParameter.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrLogEventParameter.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrLogEventParameter, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrLogEventParameter"));
	}
	return Z_Registration_Info_UEnum_EOvrLogEventParameter.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrLogEventParameter>()
{
	return EOvrLogEventParameter_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrLogEventParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AdType.Comment", "/** This parameter represents the type of advertisement displayed to the user in a VR environment. */" },
		{ "AdType.Name", "EOvrLogEventParameter::AdType" },
		{ "AdType.ToolTip", "This parameter represents the type of advertisement displayed to the user in a VR environment." },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * It's an enum about a list of possible parameters that can be logged for an event. See more information about log event in #EOvrLogEventName.\n * Each member of the enum represents a specific parameter that can be logged. \n */" },
		{ "EventName.Comment", "/** This parameter represents the name of the event being logged. */" },
		{ "EventName.Name", "EOvrLogEventParameter::EventName" },
		{ "EventName.ToolTip", "This parameter represents the name of the event being logged." },
		{ "ImplicitlyLogged.Comment", "/** This parameter represents whether the event was implicitly logged or explicitly logged by the user. */" },
		{ "ImplicitlyLogged.Name", "EOvrLogEventParameter::ImplicitlyLogged" },
		{ "ImplicitlyLogged.ToolTip", "This parameter represents whether the event was implicitly logged or explicitly logged by the user." },
		{ "InBackground.Comment", "/** This parameter represents whether the event occurred while the application was running in the background or foreground. */" },
		{ "InBackground.Name", "EOvrLogEventParameter::InBackground" },
		{ "InBackground.ToolTip", "This parameter represents whether the event occurred while the application was running in the background or foreground." },
		{ "LogTime.Comment", "/** This parameter represents the timestamp when the event was logged. It helps to understand when specific events occurred and how they relate to other events in the VR environment. */" },
		{ "LogTime.Name", "EOvrLogEventParameter::LogTime" },
		{ "LogTime.ToolTip", "This parameter represents the timestamp when the event was logged. It helps to understand when specific events occurred and how they relate to other events in the VR environment." },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "SessionId.Comment", "/** This parameter represents the unique identifier for a user session in a VR environment. It helps to track and analyze individual user sessions and understand how users are interacting with VR applications and services over time. */" },
		{ "SessionId.Name", "EOvrLogEventParameter::SessionId" },
		{ "SessionId.ToolTip", "This parameter represents the unique identifier for a user session in a VR environment. It helps to track and analyze individual user sessions and understand how users are interacting with VR applications and services over time." },
		{ "ToolTip", "It's an enum about a list of possible parameters that can be logged for an event. See more information about log event in #EOvrLogEventName.\nEach member of the enum represents a specific parameter that can be logged." },
		{ "Unknown.Name", "EOvrLogEventParameter::Unknown" },
		{ "VrContent.Comment", "/** This parameter represents the specific content being accessed or interacted with in a VR environment. */" },
		{ "VrContent.Name", "EOvrLogEventParameter::VrContent" },
		{ "VrContent.ToolTip", "This parameter represents the specific content being accessed or interacted with in a VR environment." },
		{ "VrContentId.Comment", "/** This parameter represents the unique identifier for the content being accessed or interacted with in a VR environment. */" },
		{ "VrContentId.Name", "EOvrLogEventParameter::VrContentId" },
		{ "VrContentId.ToolTip", "This parameter represents the unique identifier for the content being accessed or interacted with in a VR environment." },
		{ "VrContentTitle.Comment", "/**  This parameter represents the title of the VR content being accessed or interacted with. It helps to provide context and understanding of what the VR experience entails. */" },
		{ "VrContentTitle.Name", "EOvrLogEventParameter::VrContentTitle" },
		{ "VrContentTitle.ToolTip", "This parameter represents the title of the VR content being accessed or interacted with. It helps to provide context and understanding of what the VR experience entails." },
		{ "VrContentType.Comment", "/** This parameter represents the type of content being accessed or interacted with in a VR environment. It helps to understand what types of content are most popular among VR users. */" },
		{ "VrContentType.Name", "EOvrLogEventParameter::VrContentType" },
		{ "VrContentType.ToolTip", "This parameter represents the type of content being accessed or interacted with in a VR environment. It helps to understand what types of content are most popular among VR users." },
		{ "VrCurrency.Comment", "/** This parameter represents the currency used in a virtual reality (VR) transaction and it's important for tracking and analyzing VR transactions across different regions and currencies. */" },
		{ "VrCurrency.Name", "EOvrLogEventParameter::VrCurrency" },
		{ "VrCurrency.ToolTip", "This parameter represents the currency used in a virtual reality (VR) transaction and it's important for tracking and analyzing VR transactions across different regions and currencies." },
		{ "VrDescription.Comment", "/** This parameter represents a brief description of the VR content or service being accessed or interacted with. */" },
		{ "VrDescription.Name", "EOvrLogEventParameter::VrDescription" },
		{ "VrDescription.ToolTip", "This parameter represents a brief description of the VR content or service being accessed or interacted with." },
		{ "VrIapHasFreeTrial.Comment", "/** This parameter represents whether an IAP product has a free trial available in a VR environment.  */" },
		{ "VrIapHasFreeTrial.Name", "EOvrLogEventParameter::VrIapHasFreeTrial" },
		{ "VrIapHasFreeTrial.ToolTip", "This parameter represents whether an IAP product has a free trial available in a VR environment." },
		{ "VrIapIsStartTrial.Comment", "/** This parameter represents whether the user is starting a free trial for an IAP product in a VR environment.  */" },
		{ "VrIapIsStartTrial.Name", "EOvrLogEventParameter::VrIapIsStartTrial" },
		{ "VrIapIsStartTrial.ToolTip", "This parameter represents whether the user is starting a free trial for an IAP product in a VR environment." },
		{ "VrIapProductType.Comment", "/** This parameter represents the type of in-app purchase (IAP) product being purchased or interacted with in a VR environment. */" },
		{ "VrIapProductType.Name", "EOvrLogEventParameter::VrIapProductType" },
		{ "VrIapProductType.ToolTip", "This parameter represents the type of in-app purchase (IAP) product being purchased or interacted with in a VR environment." },
		{ "VrIapSubsPeriod.Comment", "/** This parameter represents the subscription period for an in-app purchase (IAP) product in a VR environment, such as monthly or annually. */" },
		{ "VrIapSubsPeriod.Name", "EOvrLogEventParameter::VrIapSubsPeriod" },
		{ "VrIapSubsPeriod.ToolTip", "This parameter represents the subscription period for an in-app purchase (IAP) product in a VR environment, such as monthly or annually." },
		{ "VrIapTrialPeriod.Comment", "/** This parameter represents the length of the free trial period for an IAP product in a VR environment.  */" },
		{ "VrIapTrialPeriod.Name", "EOvrLogEventParameter::VrIapTrialPeriod" },
		{ "VrIapTrialPeriod.ToolTip", "This parameter represents the length of the free trial period for an IAP product in a VR environment." },
		{ "VrIapTrialPrice.Comment", "/** This parameter represents the price of the IAP product during the free trial period in a VR environment.  */" },
		{ "VrIapTrialPrice.Name", "EOvrLogEventParameter::VrIapTrialPrice" },
		{ "VrIapTrialPrice.ToolTip", "This parameter represents the price of the IAP product during the free trial period in a VR environment." },
		{ "VrLevel.Comment", "/** This parameter represents the level or stage reached by the user in a VR game or application. */" },
		{ "VrLevel.Name", "EOvrLogEventParameter::VrLevel" },
		{ "VrLevel.ToolTip", "This parameter represents the level or stage reached by the user in a VR game or application." },
		{ "VrMaxRatingValue.Comment", "/** This parameter represents the maximum rating value allowed for a particular VR content or service. */" },
		{ "VrMaxRatingValue.Name", "EOvrLogEventParameter::VrMaxRatingValue" },
		{ "VrMaxRatingValue.ToolTip", "This parameter represents the maximum rating value allowed for a particular VR content or service." },
		{ "VrNumItems.Comment", "/** This parameter represents the number of items involved. */" },
		{ "VrNumItems.Name", "EOvrLogEventParameter::VrNumItems" },
		{ "VrNumItems.ToolTip", "This parameter represents the number of items involved." },
		{ "VrOrderId.Comment", "/** This parameter represents the unique identifier for a VR order or transaction. It helps to track and analyze individual VR transactions and orders. */" },
		{ "VrOrderId.Name", "EOvrLogEventParameter::VrOrderId" },
		{ "VrOrderId.ToolTip", "This parameter represents the unique identifier for a VR order or transaction. It helps to track and analyze individual VR transactions and orders." },
		{ "VrPaymentInfoAvailable.Comment", "/** This parameter represents whether payment information is available for a VR transaction. It helps to understand whether users have the necessary payment information to complete a VR transaction. */" },
		{ "VrPaymentInfoAvailable.Name", "EOvrLogEventParameter::VrPaymentInfoAvailable" },
		{ "VrPaymentInfoAvailable.ToolTip", "This parameter represents whether payment information is available for a VR transaction. It helps to understand whether users have the necessary payment information to complete a VR transaction." },
		{ "VrPushAction.Comment", "/** This parameter represents the action taken by the user on a VR push notification, such as clicking or dismissing. */" },
		{ "VrPushAction.Name", "EOvrLogEventParameter::VrPushAction" },
		{ "VrPushAction.ToolTip", "This parameter represents the action taken by the user on a VR push notification, such as clicking or dismissing." },
		{ "VrPushCampaign.Comment", "/** This parameter represents the campaign or promotion associated with a VR push notification. It helps to understand the context and purpose of VR push notifications. */" },
		{ "VrPushCampaign.Name", "EOvrLogEventParameter::VrPushCampaign" },
		{ "VrPushCampaign.ToolTip", "This parameter represents the campaign or promotion associated with a VR push notification. It helps to understand the context and purpose of VR push notifications." },
		{ "VrRegistrationMethod.Comment", "/** This parameter represents the method used to register for a VR service or application. It helps to understand how users are accessing VR services and applications. */" },
		{ "VrRegistrationMethod.Name", "EOvrLogEventParameter::VrRegistrationMethod" },
		{ "VrRegistrationMethod.ToolTip", "This parameter represents the method used to register for a VR service or application. It helps to understand how users are accessing VR services and applications." },
		{ "VrSearchString.Comment", "/** This parameter represents the search query entered by the user in a VR environment. It helps to understand what users are searching for and how they are interacting with VR search functionality. */" },
		{ "VrSearchString.Name", "EOvrLogEventParameter::VrSearchString" },
		{ "VrSearchString.ToolTip", "This parameter represents the search query entered by the user in a VR environment. It helps to understand what users are searching for and how they are interacting with VR search functionality." },
		{ "VrSuccess.Comment", "/** This parameter represents whether an action was successful or not in a VR environment. */" },
		{ "VrSuccess.Name", "EOvrLogEventParameter::VrSuccess" },
		{ "VrSuccess.ToolTip", "This parameter represents whether an action was successful or not in a VR environment." },
		{ "VrTransactionDate.Comment", "/** This parameter represents the date and time of a VR transaction. It helps to understand when specific transactions occurred. */" },
		{ "VrTransactionDate.Name", "EOvrLogEventParameter::VrTransactionDate" },
		{ "VrTransactionDate.ToolTip", "This parameter represents the date and time of a VR transaction. It helps to understand when specific transactions occurred." },
		{ "VrTransactionId.Comment", "/** This parameter represents the unique identifier for a VR transaction. It helps to track and analyze individual VR transactions and orders. */" },
		{ "VrTransactionId.Name", "EOvrLogEventParameter::VrTransactionId" },
		{ "VrTransactionId.ToolTip", "This parameter represents the unique identifier for a VR transaction. It helps to track and analyze individual VR transactions and orders." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrLogEventParameter::Unknown", (int64)EOvrLogEventParameter::Unknown },
		{ "EOvrLogEventParameter::VrCurrency", (int64)EOvrLogEventParameter::VrCurrency },
		{ "EOvrLogEventParameter::VrRegistrationMethod", (int64)EOvrLogEventParameter::VrRegistrationMethod },
		{ "EOvrLogEventParameter::VrContentType", (int64)EOvrLogEventParameter::VrContentType },
		{ "EOvrLogEventParameter::VrContent", (int64)EOvrLogEventParameter::VrContent },
		{ "EOvrLogEventParameter::VrContentId", (int64)EOvrLogEventParameter::VrContentId },
		{ "EOvrLogEventParameter::VrSearchString", (int64)EOvrLogEventParameter::VrSearchString },
		{ "EOvrLogEventParameter::VrSuccess", (int64)EOvrLogEventParameter::VrSuccess },
		{ "EOvrLogEventParameter::VrMaxRatingValue", (int64)EOvrLogEventParameter::VrMaxRatingValue },
		{ "EOvrLogEventParameter::VrPaymentInfoAvailable", (int64)EOvrLogEventParameter::VrPaymentInfoAvailable },
		{ "EOvrLogEventParameter::VrNumItems", (int64)EOvrLogEventParameter::VrNumItems },
		{ "EOvrLogEventParameter::VrLevel", (int64)EOvrLogEventParameter::VrLevel },
		{ "EOvrLogEventParameter::VrDescription", (int64)EOvrLogEventParameter::VrDescription },
		{ "EOvrLogEventParameter::AdType", (int64)EOvrLogEventParameter::AdType },
		{ "EOvrLogEventParameter::VrOrderId", (int64)EOvrLogEventParameter::VrOrderId },
		{ "EOvrLogEventParameter::EventName", (int64)EOvrLogEventParameter::EventName },
		{ "EOvrLogEventParameter::LogTime", (int64)EOvrLogEventParameter::LogTime },
		{ "EOvrLogEventParameter::ImplicitlyLogged", (int64)EOvrLogEventParameter::ImplicitlyLogged },
		{ "EOvrLogEventParameter::InBackground", (int64)EOvrLogEventParameter::InBackground },
		{ "EOvrLogEventParameter::VrPushCampaign", (int64)EOvrLogEventParameter::VrPushCampaign },
		{ "EOvrLogEventParameter::VrPushAction", (int64)EOvrLogEventParameter::VrPushAction },
		{ "EOvrLogEventParameter::VrIapProductType", (int64)EOvrLogEventParameter::VrIapProductType },
		{ "EOvrLogEventParameter::VrContentTitle", (int64)EOvrLogEventParameter::VrContentTitle },
		{ "EOvrLogEventParameter::VrTransactionId", (int64)EOvrLogEventParameter::VrTransactionId },
		{ "EOvrLogEventParameter::VrTransactionDate", (int64)EOvrLogEventParameter::VrTransactionDate },
		{ "EOvrLogEventParameter::VrIapSubsPeriod", (int64)EOvrLogEventParameter::VrIapSubsPeriod },
		{ "EOvrLogEventParameter::VrIapIsStartTrial", (int64)EOvrLogEventParameter::VrIapIsStartTrial },
		{ "EOvrLogEventParameter::VrIapHasFreeTrial", (int64)EOvrLogEventParameter::VrIapHasFreeTrial },
		{ "EOvrLogEventParameter::VrIapTrialPeriod", (int64)EOvrLogEventParameter::VrIapTrialPeriod },
		{ "EOvrLogEventParameter::VrIapTrialPrice", (int64)EOvrLogEventParameter::VrIapTrialPrice },
		{ "EOvrLogEventParameter::SessionId", (int64)EOvrLogEventParameter::SessionId },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrLogEventParameter_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrLogEventParameter",
	"EOvrLogEventParameter",
	Z_Construct_UEnum_OVRPlatform_EOvrLogEventParameter_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrLogEventParameter_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrLogEventParameter_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrLogEventParameter_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrLogEventParameter()
{
	if (!Z_Registration_Info_UEnum_EOvrLogEventParameter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrLogEventParameter.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrLogEventParameter_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrLogEventParameter.InnerSingleton;
}
// End Enum EOvrLogEventParameter

// Begin Enum EOvrMediaContentType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrMediaContentType;
static UEnum* EOvrMediaContentType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrMediaContentType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrMediaContentType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrMediaContentType, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrMediaContentType"));
	}
	return Z_Registration_Info_UEnum_EOvrMediaContentType.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrMediaContentType>()
{
	return EOvrMediaContentType_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrMediaContentType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An enum that represents the type of media content being shared, which can be useful for various purposes such as displaying the media content in a specific way or applying certain filters or effects to it.\n * It can be used as a type of parameter in UOvrRequestsBlueprintLibrary::Media_ShareToFacebook().\n */" },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "Photo.Comment", "/**\n     * Indicates that the media content is a photo.\n     * This value can be used to specify that the media content being shared is a photo.\n     */" },
		{ "Photo.Name", "EOvrMediaContentType::Photo" },
		{ "Photo.ToolTip", "Indicates that the media content is a photo.\nThis value can be used to specify that the media content being shared is a photo." },
		{ "ToolTip", "An enum that represents the type of media content being shared, which can be useful for various purposes such as displaying the media content in a specific way or applying certain filters or effects to it.\nIt can be used as a type of parameter in UOvrRequestsBlueprintLibrary::Media_ShareToFacebook()." },
		{ "Unknown.Name", "EOvrMediaContentType::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrMediaContentType::Unknown", (int64)EOvrMediaContentType::Unknown },
		{ "EOvrMediaContentType::Photo", (int64)EOvrMediaContentType::Photo },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrMediaContentType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrMediaContentType",
	"EOvrMediaContentType",
	Z_Construct_UEnum_OVRPlatform_EOvrMediaContentType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrMediaContentType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrMediaContentType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrMediaContentType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrMediaContentType()
{
	if (!Z_Registration_Info_UEnum_EOvrMediaContentType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrMediaContentType.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrMediaContentType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrMediaContentType.InnerSingleton;
}
// End Enum EOvrMediaContentType

// Begin Enum EOvrMultiplayerErrorErrorKey
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrMultiplayerErrorErrorKey;
static UEnum* EOvrMultiplayerErrorErrorKey_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrMultiplayerErrorErrorKey.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrMultiplayerErrorErrorKey.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrMultiplayerErrorErrorKey, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrMultiplayerErrorErrorKey"));
	}
	return Z_Registration_Info_UEnum_EOvrMultiplayerErrorErrorKey.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrMultiplayerErrorErrorKey>()
{
	return EOvrMultiplayerErrorErrorKey_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrMultiplayerErrorErrorKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Possible keys of the errors which could occurred when using the [multiplayer features](https://developer.oculus.com/documentation/unreal/ps-multiplayer-overview/).\n * e.g., you may need to use `destination_unavailable` for destinations feature and use `inviter_not_joinable` for invite feature and so on.\n */" },
		{ "DestinationUnavailable.Comment", "/** This error key will be used to tell the user that the travel destination is not available any more. */" },
		{ "DestinationUnavailable.Name", "EOvrMultiplayerErrorErrorKey::DestinationUnavailable" },
		{ "DestinationUnavailable.ToolTip", "This error key will be used to tell the user that the travel destination is not available any more." },
		{ "DlcRequired.Comment", "/** This error will tell the user that the downloadable content will be needed. */" },
		{ "DlcRequired.Name", "EOvrMultiplayerErrorErrorKey::DlcRequired" },
		{ "DlcRequired.ToolTip", "This error will tell the user that the downloadable content will be needed." },
		{ "General.Comment", "/** This error key will be used in a broad range of general errors which are not be covered by the members of the enum. */" },
		{ "General.Name", "EOvrMultiplayerErrorErrorKey::General" },
		{ "General.ToolTip", "This error key will be used in a broad range of general errors which are not be covered by the members of the enum." },
		{ "GroupFull.Comment", "/** This error key may be used to explain to the user the reason why she/he failed in joining a group. */" },
		{ "GroupFull.Name", "EOvrMultiplayerErrorErrorKey::GroupFull" },
		{ "GroupFull.ToolTip", "This error key may be used to explain to the user the reason why she/he failed in joining a group." },
		{ "InviterNotJoinable.Comment", "/** This error key will be used in explaining why an inviter cannot invite a recepient successfully. The group presence can be set to joinable by using UOvrRequestsBlueprintLibrary::GroupPresence_SetIsJoinable(). */" },
		{ "InviterNotJoinable.Name", "EOvrMultiplayerErrorErrorKey::InviterNotJoinable" },
		{ "InviterNotJoinable.ToolTip", "This error key will be used in explaining why an inviter cannot invite a recepient successfully. The group presence can be set to joinable by using UOvrRequestsBlueprintLibrary::GroupPresence_SetIsJoinable()." },
		{ "LevelNotHighEnough.Comment", "/** Certain features will not be available to the user in the app because the user's level does not reach to certain level. */" },
		{ "LevelNotHighEnough.Name", "EOvrMultiplayerErrorErrorKey::LevelNotHighEnough" },
		{ "LevelNotHighEnough.ToolTip", "Certain features will not be available to the user in the app because the user's level does not reach to certain level." },
		{ "LevelNotUnlocked.Comment", "/** This error key may be used to explain to the user the failure was occurred becasue some level has not been reached. */" },
		{ "LevelNotUnlocked.Name", "EOvrMultiplayerErrorErrorKey::LevelNotUnlocked" },
		{ "LevelNotUnlocked.ToolTip", "This error key may be used to explain to the user the failure was occurred becasue some level has not been reached." },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "NetworkTimeout.Comment", "/** When the predefined network timeout has reached, the ongoing activity would be stopped. The dialog will use this error key to give the user the information. */" },
		{ "NetworkTimeout.Name", "EOvrMultiplayerErrorErrorKey::NetworkTimeout" },
		{ "NetworkTimeout.ToolTip", "When the predefined network timeout has reached, the ongoing activity would be stopped. The dialog will use this error key to give the user the information." },
		{ "NoLongerAvailable.Name", "EOvrMultiplayerErrorErrorKey::NoLongerAvailable" },
		{ "ToolTip", "Possible keys of the errors which could occurred when using the [multiplayer features](https://developer.oculus.com/documentation/unreal/ps-multiplayer-overview/).\ne.g., you may need to use `destination_unavailable` for destinations feature and use `inviter_not_joinable` for invite feature and so on." },
		{ "TutorialRequired.Name", "EOvrMultiplayerErrorErrorKey::TutorialRequired" },
		{ "Unknown.Name", "EOvrMultiplayerErrorErrorKey::Unknown" },
		{ "UpdateRequired.Name", "EOvrMultiplayerErrorErrorKey::UpdateRequired" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrMultiplayerErrorErrorKey::Unknown", (int64)EOvrMultiplayerErrorErrorKey::Unknown },
		{ "EOvrMultiplayerErrorErrorKey::DestinationUnavailable", (int64)EOvrMultiplayerErrorErrorKey::DestinationUnavailable },
		{ "EOvrMultiplayerErrorErrorKey::DlcRequired", (int64)EOvrMultiplayerErrorErrorKey::DlcRequired },
		{ "EOvrMultiplayerErrorErrorKey::General", (int64)EOvrMultiplayerErrorErrorKey::General },
		{ "EOvrMultiplayerErrorErrorKey::GroupFull", (int64)EOvrMultiplayerErrorErrorKey::GroupFull },
		{ "EOvrMultiplayerErrorErrorKey::InviterNotJoinable", (int64)EOvrMultiplayerErrorErrorKey::InviterNotJoinable },
		{ "EOvrMultiplayerErrorErrorKey::LevelNotHighEnough", (int64)EOvrMultiplayerErrorErrorKey::LevelNotHighEnough },
		{ "EOvrMultiplayerErrorErrorKey::LevelNotUnlocked", (int64)EOvrMultiplayerErrorErrorKey::LevelNotUnlocked },
		{ "EOvrMultiplayerErrorErrorKey::NetworkTimeout", (int64)EOvrMultiplayerErrorErrorKey::NetworkTimeout },
		{ "EOvrMultiplayerErrorErrorKey::NoLongerAvailable", (int64)EOvrMultiplayerErrorErrorKey::NoLongerAvailable },
		{ "EOvrMultiplayerErrorErrorKey::UpdateRequired", (int64)EOvrMultiplayerErrorErrorKey::UpdateRequired },
		{ "EOvrMultiplayerErrorErrorKey::TutorialRequired", (int64)EOvrMultiplayerErrorErrorKey::TutorialRequired },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrMultiplayerErrorErrorKey_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrMultiplayerErrorErrorKey",
	"EOvrMultiplayerErrorErrorKey",
	Z_Construct_UEnum_OVRPlatform_EOvrMultiplayerErrorErrorKey_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrMultiplayerErrorErrorKey_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrMultiplayerErrorErrorKey_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrMultiplayerErrorErrorKey_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrMultiplayerErrorErrorKey()
{
	if (!Z_Registration_Info_UEnum_EOvrMultiplayerErrorErrorKey.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrMultiplayerErrorErrorKey.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrMultiplayerErrorErrorKey_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrMultiplayerErrorErrorKey.InnerSingleton;
}
// End Enum EOvrMultiplayerErrorErrorKey

// Begin Enum EOvrNetSyncConnectionStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrNetSyncConnectionStatus;
static UEnum* EOvrNetSyncConnectionStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrNetSyncConnectionStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrNetSyncConnectionStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrNetSyncConnectionStatus, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrNetSyncConnectionStatus"));
	}
	return Z_Registration_Info_UEnum_EOvrNetSyncConnectionStatus.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrNetSyncConnectionStatus>()
{
	return EOvrNetSyncConnectionStatus_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrNetSyncConnectionStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * It represents the possible status of a FOvrNetSyncConnection which\n * allows multiple clients to connect and communicate with each other in real-time.\n * The connection provides a way to manage and facilitate real-time communication and\n * data synchronization between multiple clients in a networked environment.\n */" },
		{ "Connected.Comment", "/** This member indicates that the current status of the network sync connection is connected. */" },
		{ "Connected.Name", "EOvrNetSyncConnectionStatus::Connected" },
		{ "Connected.ToolTip", "This member indicates that the current status of the network sync connection is connected." },
		{ "Connecting.Comment", "/** This member indicates that the connection of the network sync has been started and the process is ongoing. */" },
		{ "Connecting.Name", "EOvrNetSyncConnectionStatus::Connecting" },
		{ "Connecting.ToolTip", "This member indicates that the connection of the network sync has been started and the process is ongoing." },
		{ "Disconnected.Comment", "/** This member indicates that the current status of the network sync connection is not connected. */" },
		{ "Disconnected.Name", "EOvrNetSyncConnectionStatus::Disconnected" },
		{ "Disconnected.ToolTip", "This member indicates that the current status of the network sync connection is not connected." },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "ToolTip", "It represents the possible status of a FOvrNetSyncConnection which\nallows multiple clients to connect and communicate with each other in real-time.\nThe connection provides a way to manage and facilitate real-time communication and\ndata synchronization between multiple clients in a networked environment." },
		{ "Unknown.Name", "EOvrNetSyncConnectionStatus::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrNetSyncConnectionStatus::Unknown", (int64)EOvrNetSyncConnectionStatus::Unknown },
		{ "EOvrNetSyncConnectionStatus::Connecting", (int64)EOvrNetSyncConnectionStatus::Connecting },
		{ "EOvrNetSyncConnectionStatus::Disconnected", (int64)EOvrNetSyncConnectionStatus::Disconnected },
		{ "EOvrNetSyncConnectionStatus::Connected", (int64)EOvrNetSyncConnectionStatus::Connected },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrNetSyncConnectionStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrNetSyncConnectionStatus",
	"EOvrNetSyncConnectionStatus",
	Z_Construct_UEnum_OVRPlatform_EOvrNetSyncConnectionStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrNetSyncConnectionStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrNetSyncConnectionStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrNetSyncConnectionStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrNetSyncConnectionStatus()
{
	if (!Z_Registration_Info_UEnum_EOvrNetSyncConnectionStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrNetSyncConnectionStatus.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrNetSyncConnectionStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrNetSyncConnectionStatus.InnerSingleton;
}
// End Enum EOvrNetSyncConnectionStatus

// Begin Enum EOvrNetSyncDisconnectReason
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrNetSyncDisconnectReason;
static UEnum* EOvrNetSyncDisconnectReason_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrNetSyncDisconnectReason.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrNetSyncDisconnectReason.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrNetSyncDisconnectReason, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrNetSyncDisconnectReason"));
	}
	return Z_Registration_Info_UEnum_EOvrNetSyncDisconnectReason.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrNetSyncDisconnectReason>()
{
	return EOvrNetSyncDisconnectReason_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrNetSyncDisconnectReason_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * It represents the possible reasons why the status of a FOvrNetSyncConnection, which\n * allows multiple clients to connect and communicate with each other in real-time, is disconnected.\n * The connection provides a way to manage and facilitate real-time communication and\n * data synchronization between multiple clients in a networked environment.\n */" },
		{ "Failed.Comment", "/** This member indicates that the initial connection request never succeeded. */" },
		{ "Failed.Name", "EOvrNetSyncDisconnectReason::Failed" },
		{ "Failed.ToolTip", "This member indicates that the initial connection request never succeeded." },
		{ "LocalTerminated.Comment", "/** This member indicates that the disconnect of the FOvrNetSyncConnection was initialized from the a user request. */" },
		{ "LocalTerminated.Name", "EOvrNetSyncDisconnectReason::LocalTerminated" },
		{ "LocalTerminated.ToolTip", "This member indicates that the disconnect of the FOvrNetSyncConnection was initialized from the a user request." },
		{ "Lost.Comment", "/** This member indicates that the FOvrNetSyncConnection was shutdown because of the network timeout. */" },
		{ "Lost.Name", "EOvrNetSyncDisconnectReason::Lost" },
		{ "Lost.ToolTip", "This member indicates that the FOvrNetSyncConnection was shutdown because of the network timeout." },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "ServerTerminated.Comment", "/** This member indicates that the connection of the FOvrNetSyncConnection was shutdown by the server intentionally. */" },
		{ "ServerTerminated.Name", "EOvrNetSyncDisconnectReason::ServerTerminated" },
		{ "ServerTerminated.ToolTip", "This member indicates that the connection of the FOvrNetSyncConnection was shutdown by the server intentionally." },
		{ "ToolTip", "It represents the possible reasons why the status of a FOvrNetSyncConnection, which\nallows multiple clients to connect and communicate with each other in real-time, is disconnected.\nThe connection provides a way to manage and facilitate real-time communication and\ndata synchronization between multiple clients in a networked environment." },
		{ "Unknown.Name", "EOvrNetSyncDisconnectReason::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrNetSyncDisconnectReason::Unknown", (int64)EOvrNetSyncDisconnectReason::Unknown },
		{ "EOvrNetSyncDisconnectReason::LocalTerminated", (int64)EOvrNetSyncDisconnectReason::LocalTerminated },
		{ "EOvrNetSyncDisconnectReason::ServerTerminated", (int64)EOvrNetSyncDisconnectReason::ServerTerminated },
		{ "EOvrNetSyncDisconnectReason::Failed", (int64)EOvrNetSyncDisconnectReason::Failed },
		{ "EOvrNetSyncDisconnectReason::Lost", (int64)EOvrNetSyncDisconnectReason::Lost },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrNetSyncDisconnectReason_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrNetSyncDisconnectReason",
	"EOvrNetSyncDisconnectReason",
	Z_Construct_UEnum_OVRPlatform_EOvrNetSyncDisconnectReason_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrNetSyncDisconnectReason_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrNetSyncDisconnectReason_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrNetSyncDisconnectReason_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrNetSyncDisconnectReason()
{
	if (!Z_Registration_Info_UEnum_EOvrNetSyncDisconnectReason.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrNetSyncDisconnectReason.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrNetSyncDisconnectReason_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrNetSyncDisconnectReason.InnerSingleton;
}
// End Enum EOvrNetSyncDisconnectReason

// Begin Enum EOvrNetSyncVoipMicSource
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrNetSyncVoipMicSource;
static UEnum* EOvrNetSyncVoipMicSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrNetSyncVoipMicSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrNetSyncVoipMicSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipMicSource, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrNetSyncVoipMicSource"));
	}
	return Z_Registration_Info_UEnum_EOvrNetSyncVoipMicSource.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrNetSyncVoipMicSource>()
{
	return EOvrNetSyncVoipMicSource_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipMicSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A network synchronization system allows multiple clients to connect and communicate with each other in real-time.\n * Once a FOvrNetSyncConnection is established, it uses Voice over Internet Protocol to allow users to make\n * voice calls using the internet. The mic source will represent the current source of the mic in the call.\n */" },
		{ "Internal.Comment", "/**\n     * This `enum` member represents an internal net sync connection has been identified as the source from which the data was sent\n     * to the server\n     */" },
		{ "Internal.Name", "EOvrNetSyncVoipMicSource::Internal" },
		{ "Internal.ToolTip", "This `enum` member represents an internal net sync connection has been identified as the source from which the data was sent\nto the server" },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "None.Comment", "/**\n     * This `enum` member represents no net sync connection has been identified as the source from which the data was sent\n     * to the server\n     */" },
		{ "None.Name", "EOvrNetSyncVoipMicSource::None" },
		{ "None.ToolTip", "This `enum` member represents no net sync connection has been identified as the source from which the data was sent\nto the server" },
		{ "ToolTip", "A network synchronization system allows multiple clients to connect and communicate with each other in real-time.\nOnce a FOvrNetSyncConnection is established, it uses Voice over Internet Protocol to allow users to make\nvoice calls using the internet. The mic source will represent the current source of the mic in the call." },
		{ "Unknown.Name", "EOvrNetSyncVoipMicSource::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrNetSyncVoipMicSource::Unknown", (int64)EOvrNetSyncVoipMicSource::Unknown },
		{ "EOvrNetSyncVoipMicSource::None", (int64)EOvrNetSyncVoipMicSource::None },
		{ "EOvrNetSyncVoipMicSource::Internal", (int64)EOvrNetSyncVoipMicSource::Internal },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipMicSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrNetSyncVoipMicSource",
	"EOvrNetSyncVoipMicSource",
	Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipMicSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipMicSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipMicSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipMicSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipMicSource()
{
	if (!Z_Registration_Info_UEnum_EOvrNetSyncVoipMicSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrNetSyncVoipMicSource.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipMicSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrNetSyncVoipMicSource.InnerSingleton;
}
// End Enum EOvrNetSyncVoipMicSource

// Begin Enum EOvrNetSyncVoipStreamMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrNetSyncVoipStreamMode;
static UEnum* EOvrNetSyncVoipStreamMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrNetSyncVoipStreamMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrNetSyncVoipStreamMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipStreamMode, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrNetSyncVoipStreamMode"));
	}
	return Z_Registration_Info_UEnum_EOvrNetSyncVoipStreamMode.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrNetSyncVoipStreamMode>()
{
	return EOvrNetSyncVoipStreamMode_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipStreamMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Ambisonic.Comment", "/**\n     * This `enum` member represents the ambisonic steam mode the VoIP stream uses. It is the default value of FOvrNetSyncOptions::VoipStreamDefault.\n     * Since it allows for the creation of immersive, surround sound experiences that simulate real-world audio environments, it typically used in virtual\n     * reality (VR) and augmented reality (AR) applications.\n     */" },
		{ "Ambisonic.Name", "EOvrNetSyncVoipStreamMode::Ambisonic" },
		{ "Ambisonic.ToolTip", "This `enum` member represents the ambisonic steam mode the VoIP stream uses. It is the default value of FOvrNetSyncOptions::VoipStreamDefault.\nSince it allows for the creation of immersive, surround sound experiences that simulate real-world audio environments, it typically used in virtual\nreality (VR) and augmented reality (AR) applications." },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A network synchronization system allows multiple clients to connect and communicate with each other in real-time.\n * Once a FOvrNetSyncConnection is established, user can choose the stream mode for the connection.\n * The FOvrNetSyncOptions::VoipStreamDefault will be used when a new VoIP(Voice over Internet Protocol) user connects.\n */" },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "Mono.Comment", "/**\n     * This `enum` member represents the mono steam mode the VoIP stream uses. The advantages mono stream mode has over ambisonic steam mode is\n     * the audio encoding and decoding require less computational resources and thus audio streams require less bandwidth. So it is typically used in\n     * applications with limited network resources.\n     */" },
		{ "Mono.Name", "EOvrNetSyncVoipStreamMode::Mono" },
		{ "Mono.ToolTip", "This `enum` member represents the mono steam mode the VoIP stream uses. The advantages mono stream mode has over ambisonic steam mode is\nthe audio encoding and decoding require less computational resources and thus audio streams require less bandwidth. So it is typically used in\napplications with limited network resources." },
		{ "ToolTip", "A network synchronization system allows multiple clients to connect and communicate with each other in real-time.\nOnce a FOvrNetSyncConnection is established, user can choose the stream mode for the connection.\nThe FOvrNetSyncOptions::VoipStreamDefault will be used when a new VoIP(Voice over Internet Protocol) user connects." },
		{ "Unknown.Name", "EOvrNetSyncVoipStreamMode::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrNetSyncVoipStreamMode::Unknown", (int64)EOvrNetSyncVoipStreamMode::Unknown },
		{ "EOvrNetSyncVoipStreamMode::Ambisonic", (int64)EOvrNetSyncVoipStreamMode::Ambisonic },
		{ "EOvrNetSyncVoipStreamMode::Mono", (int64)EOvrNetSyncVoipStreamMode::Mono },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipStreamMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrNetSyncVoipStreamMode",
	"EOvrNetSyncVoipStreamMode",
	Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipStreamMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipStreamMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipStreamMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipStreamMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipStreamMode()
{
	if (!Z_Registration_Info_UEnum_EOvrNetSyncVoipStreamMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrNetSyncVoipStreamMode.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipStreamMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrNetSyncVoipStreamMode.InnerSingleton;
}
// End Enum EOvrNetSyncVoipStreamMode

// Begin Enum EOvrOfferTerm
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrOfferTerm;
static UEnum* EOvrOfferTerm_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrOfferTerm.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrOfferTerm.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrOfferTerm, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrOfferTerm"));
	}
	return Z_Registration_Info_UEnum_EOvrOfferTerm.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrOfferTerm>()
{
	return EOvrOfferTerm_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrOfferTerm_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ANNUAL.Comment", "/** Represents that the offer term is annual. This means that the offer will be valid for a period of one year from the date of purchase. */" },
		{ "ANNUAL.Name", "EOvrOfferTerm::ANNUAL" },
		{ "ANNUAL.ToolTip", "Represents that the offer term is annual. This means that the offer will be valid for a period of one year from the date of purchase." },
		{ "BIANNUAL.Comment", "/** Represents that the offer term is every 2 years. This means that the offer will be valid for a period of two years from the date of purchase. */" },
		{ "BIANNUAL.Name", "EOvrOfferTerm::BIANNUAL" },
		{ "BIANNUAL.ToolTip", "Represents that the offer term is every 2 years. This means that the offer will be valid for a period of two years from the date of purchase." },
		{ "BIWEEKLY.Comment", "/** Represents that the offer term is biweekly. This means that the offer will be valid for a period of two weeks from the date of purchase. */" },
		{ "BIWEEKLY.Name", "EOvrOfferTerm::BIWEEKLY" },
		{ "BIWEEKLY.ToolTip", "Represents that the offer term is biweekly. This means that the offer will be valid for a period of two weeks from the date of purchase." },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An enumeration that defines the type of the FOvrTrialOffer. This can be utilized to determine the length of time for which the offer is valid.\n *  By setting this field, you can easily manage the duration of your offers and provide a better user experience for your customers.\n */" },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "MONTHLY.Comment", "/** Represents that the offer term is monthly. This means that the offer will be valid for a period of one month from the date of purchase. */" },
		{ "MONTHLY.Name", "EOvrOfferTerm::MONTHLY" },
		{ "MONTHLY.ToolTip", "Represents that the offer term is monthly. This means that the offer will be valid for a period of one month from the date of purchase." },
		{ "QUARTERLY.Comment", "/** Represents that the offer term is quarterly. This means that the offer will be valid for a period of three months from the date of purchase. */" },
		{ "QUARTERLY.Name", "EOvrOfferTerm::QUARTERLY" },
		{ "QUARTERLY.ToolTip", "Represents that the offer term is quarterly. This means that the offer will be valid for a period of three months from the date of purchase." },
		{ "SEMIANNUAL.Comment", "/** Represents that the offer term is every 6 months. This means that the offer will be valid for a period of six months from the date of purchase. */" },
		{ "SEMIANNUAL.Name", "EOvrOfferTerm::SEMIANNUAL" },
		{ "SEMIANNUAL.ToolTip", "Represents that the offer term is every 6 months. This means that the offer will be valid for a period of six months from the date of purchase." },
		{ "ToolTip", "An enumeration that defines the type of the FOvrTrialOffer. This can be utilized to determine the length of time for which the offer is valid.\n By setting this field, you can easily manage the duration of your offers and provide a better user experience for your customers." },
		{ "Unknown.Name", "EOvrOfferTerm::Unknown" },
		{ "WEEKLY.Comment", "/** Represents that the offer term is weekly. This means that the offer will be valid for a period of one week from the date of purchase. */" },
		{ "WEEKLY.Name", "EOvrOfferTerm::WEEKLY" },
		{ "WEEKLY.ToolTip", "Represents that the offer term is weekly. This means that the offer will be valid for a period of one week from the date of purchase." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrOfferTerm::Unknown", (int64)EOvrOfferTerm::Unknown },
		{ "EOvrOfferTerm::WEEKLY", (int64)EOvrOfferTerm::WEEKLY },
		{ "EOvrOfferTerm::BIWEEKLY", (int64)EOvrOfferTerm::BIWEEKLY },
		{ "EOvrOfferTerm::MONTHLY", (int64)EOvrOfferTerm::MONTHLY },
		{ "EOvrOfferTerm::QUARTERLY", (int64)EOvrOfferTerm::QUARTERLY },
		{ "EOvrOfferTerm::SEMIANNUAL", (int64)EOvrOfferTerm::SEMIANNUAL },
		{ "EOvrOfferTerm::ANNUAL", (int64)EOvrOfferTerm::ANNUAL },
		{ "EOvrOfferTerm::BIANNUAL", (int64)EOvrOfferTerm::BIANNUAL },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrOfferTerm_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrOfferTerm",
	"EOvrOfferTerm",
	Z_Construct_UEnum_OVRPlatform_EOvrOfferTerm_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrOfferTerm_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrOfferTerm_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrOfferTerm_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrOfferTerm()
{
	if (!Z_Registration_Info_UEnum_EOvrOfferTerm.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrOfferTerm.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrOfferTerm_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrOfferTerm.InnerSingleton;
}
// End Enum EOvrOfferTerm

// Begin Enum EOvrOfferType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrOfferType;
static UEnum* EOvrOfferType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrOfferType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrOfferType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrOfferType, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrOfferType"));
	}
	return Z_Registration_Info_UEnum_EOvrOfferType.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrOfferType>()
{
	return EOvrOfferType_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrOfferType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An enumeration that defines the type of the FOvrTrialOffer. This can be utilized to identify the specific type of offer,\n * such as a free trial or an intro offer. By setting this field, you can easily differentiate between different types of offers\n * and provide a better user experience for your customers.\n */" },
		{ "FREETRIAL.Comment", "/** This value indicates that the offer is a free trial, which allows customers to try out a product or service without paying for it. */" },
		{ "FREETRIAL.Name", "EOvrOfferType::FREETRIAL" },
		{ "FREETRIAL.ToolTip", "This value indicates that the offer is a free trial, which allows customers to try out a product or service without paying for it." },
		{ "INTROOFFER.Comment", "/** This value indicates that the offer is an intro offer, which is typically a special promotion or discount offered to new customers.  */" },
		{ "INTROOFFER.Name", "EOvrOfferType::INTROOFFER" },
		{ "INTROOFFER.ToolTip", "This value indicates that the offer is an intro offer, which is typically a special promotion or discount offered to new customers." },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "ToolTip", "An enumeration that defines the type of the FOvrTrialOffer. This can be utilized to identify the specific type of offer,\nsuch as a free trial or an intro offer. By setting this field, you can easily differentiate between different types of offers\nand provide a better user experience for your customers." },
		{ "Unknown.Name", "EOvrOfferType::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrOfferType::Unknown", (int64)EOvrOfferType::Unknown },
		{ "EOvrOfferType::INTROOFFER", (int64)EOvrOfferType::INTROOFFER },
		{ "EOvrOfferType::FREETRIAL", (int64)EOvrOfferType::FREETRIAL },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrOfferType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrOfferType",
	"EOvrOfferType",
	Z_Construct_UEnum_OVRPlatform_EOvrOfferType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrOfferType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrOfferType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrOfferType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrOfferType()
{
	if (!Z_Registration_Info_UEnum_EOvrOfferType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrOfferType.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrOfferType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrOfferType.InnerSingleton;
}
// End Enum EOvrOfferType

// Begin Enum EOvrPartyUpdateAction
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrPartyUpdateAction;
static UEnum* EOvrPartyUpdateAction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrPartyUpdateAction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrPartyUpdateAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrPartyUpdateAction, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrPartyUpdateAction"));
	}
	return Z_Registration_Info_UEnum_EOvrPartyUpdateAction.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrPartyUpdateAction>()
{
	return EOvrPartyUpdateAction_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrPartyUpdateAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An enum that specifies the type of action related to the party and the user. For example,\n * field FOvrPartyUpdateNotification::Action contains the information about the user joined or\n * left the party or the user was invited or uninvited to the party.\n */" },
		{ "Invite.Comment", "/** This `enum` member indicates the user was invited to the party. */" },
		{ "Invite.Name", "EOvrPartyUpdateAction::Invite" },
		{ "Invite.ToolTip", "This `enum` member indicates the user was invited to the party." },
		{ "Join.Comment", "/** This `enum` member indicates the user joined the party. */" },
		{ "Join.Name", "EOvrPartyUpdateAction::Join" },
		{ "Join.ToolTip", "This `enum` member indicates the user joined the party." },
		{ "Leave.Comment", "/** This `enum` member indicates the user left the party. */" },
		{ "Leave.Name", "EOvrPartyUpdateAction::Leave" },
		{ "Leave.ToolTip", "This `enum` member indicates the user left the party." },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "ToolTip", "An enum that specifies the type of action related to the party and the user. For example,\nfield FOvrPartyUpdateNotification::Action contains the information about the user joined or\nleft the party or the user was invited or uninvited to the party." },
		{ "Uninvite.Comment", "/** This `enum` member indicates the user was uninvited to the party. */" },
		{ "Uninvite.Name", "EOvrPartyUpdateAction::Uninvite" },
		{ "Uninvite.ToolTip", "This `enum` member indicates the user was uninvited to the party." },
		{ "Unknown.Name", "EOvrPartyUpdateAction::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrPartyUpdateAction::Unknown", (int64)EOvrPartyUpdateAction::Unknown },
		{ "EOvrPartyUpdateAction::Join", (int64)EOvrPartyUpdateAction::Join },
		{ "EOvrPartyUpdateAction::Leave", (int64)EOvrPartyUpdateAction::Leave },
		{ "EOvrPartyUpdateAction::Invite", (int64)EOvrPartyUpdateAction::Invite },
		{ "EOvrPartyUpdateAction::Uninvite", (int64)EOvrPartyUpdateAction::Uninvite },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrPartyUpdateAction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrPartyUpdateAction",
	"EOvrPartyUpdateAction",
	Z_Construct_UEnum_OVRPlatform_EOvrPartyUpdateAction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrPartyUpdateAction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrPartyUpdateAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrPartyUpdateAction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrPartyUpdateAction()
{
	if (!Z_Registration_Info_UEnum_EOvrPartyUpdateAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrPartyUpdateAction.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrPartyUpdateAction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrPartyUpdateAction.InnerSingleton;
}
// End Enum EOvrPartyUpdateAction

// Begin Enum EOvrPermissionGrantStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrPermissionGrantStatus;
static UEnum* EOvrPermissionGrantStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrPermissionGrantStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrPermissionGrantStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrPermissionGrantStatus, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrPermissionGrantStatus"));
	}
	return Z_Registration_Info_UEnum_EOvrPermissionGrantStatus.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrPermissionGrantStatus>()
{
	return EOvrPermissionGrantStatus_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrPermissionGrantStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Blocked.Comment", "/** This `enum` member indicates the status of the permission grant was blocked. */" },
		{ "Blocked.Name", "EOvrPermissionGrantStatus::Blocked" },
		{ "Blocked.ToolTip", "This `enum` member indicates the status of the permission grant was blocked." },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This `enum` represents the all possible statuses of a premission request. For example,\n * if an user wants to participate in a challenge, the user may request the permission to join\n * the FOvrChallenge first. If the permission grant status is granted, the user can call\n * UOvrRequestsBlueprintLibrary::Challenges_Join() to join the challenge.\n */" },
		{ "Denied.Comment", "/** This `enum` member indicates the status of the permission grant was rejected. */" },
		{ "Denied.Name", "EOvrPermissionGrantStatus::Denied" },
		{ "Denied.ToolTip", "This `enum` member indicates the status of the permission grant was rejected." },
		{ "Granted.Comment", "/** This `enum` member indicates the status of the permission grant was approved. */" },
		{ "Granted.Name", "EOvrPermissionGrantStatus::Granted" },
		{ "Granted.ToolTip", "This `enum` member indicates the status of the permission grant was approved." },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "ToolTip", "This `enum` represents the all possible statuses of a premission request. For example,\nif an user wants to participate in a challenge, the user may request the permission to join\nthe FOvrChallenge first. If the permission grant status is granted, the user can call\nUOvrRequestsBlueprintLibrary::Challenges_Join() to join the challenge." },
		{ "Unknown.Name", "EOvrPermissionGrantStatus::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrPermissionGrantStatus::Unknown", (int64)EOvrPermissionGrantStatus::Unknown },
		{ "EOvrPermissionGrantStatus::Granted", (int64)EOvrPermissionGrantStatus::Granted },
		{ "EOvrPermissionGrantStatus::Denied", (int64)EOvrPermissionGrantStatus::Denied },
		{ "EOvrPermissionGrantStatus::Blocked", (int64)EOvrPermissionGrantStatus::Blocked },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrPermissionGrantStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrPermissionGrantStatus",
	"EOvrPermissionGrantStatus",
	Z_Construct_UEnum_OVRPlatform_EOvrPermissionGrantStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrPermissionGrantStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrPermissionGrantStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrPermissionGrantStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrPermissionGrantStatus()
{
	if (!Z_Registration_Info_UEnum_EOvrPermissionGrantStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrPermissionGrantStatus.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrPermissionGrantStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrPermissionGrantStatus.InnerSingleton;
}
// End Enum EOvrPermissionGrantStatus

// Begin Enum EOvrPlatformInitializeResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrPlatformInitializeResult;
static UEnum* EOvrPlatformInitializeResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrPlatformInitializeResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrPlatformInitializeResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrPlatformInitializeResult, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrPlatformInitializeResult"));
	}
	return Z_Registration_Info_UEnum_EOvrPlatformInitializeResult.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrPlatformInitializeResult>()
{
	return EOvrPlatformInitializeResult_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrPlatformInitializeResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Describes the various results possible when attempting to initialize the platform.\n * Anything other than ::ovrPlatformInitialize_Success should be considered a fatal error\n * with respect to using the platform, as the platform is not guaranteed to be legitimate\n * or work correctly.\n */" },
		{ "FileInvalid.Comment", "/** Oculus Platform SDK files failed to load. */" },
		{ "FileInvalid.Name", "EOvrPlatformInitializeResult::FileInvalid" },
		{ "FileInvalid.ToolTip", "Oculus Platform SDK files failed to load." },
		{ "InvalidCredentials.Comment", "/** Oculus Platform SDK failed to initialize because the Oculus user had an invalid account access token. */" },
		{ "InvalidCredentials.Name", "EOvrPlatformInitializeResult::InvalidCredentials" },
		{ "InvalidCredentials.ToolTip", "Oculus Platform SDK failed to initialize because the Oculus user had an invalid account access token." },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "NotEntitled.Comment", "/** Oculus Platform SDK failed to initialize because the Oculus user does not have the application entitlement. */" },
		{ "NotEntitled.Name", "EOvrPlatformInitializeResult::NotEntitled" },
		{ "NotEntitled.ToolTip", "Oculus Platform SDK failed to initialize because the Oculus user does not have the application entitlement." },
		{ "PreLoaded.Comment", "/** Oculus Platform SDK failed to initialize because the pre-loaded module was on a different path than the validated library. */" },
		{ "PreLoaded.Name", "EOvrPlatformInitializeResult::PreLoaded" },
		{ "PreLoaded.ToolTip", "Oculus Platform SDK failed to initialize because the pre-loaded module was on a different path than the validated library." },
		{ "SignatureInvalid.Comment", "/** Oculus Platform SDK failed to initialize due to an invalid signature in the signed certificate. */" },
		{ "SignatureInvalid.Name", "EOvrPlatformInitializeResult::SignatureInvalid" },
		{ "SignatureInvalid.ToolTip", "Oculus Platform SDK failed to initialize due to an invalid signature in the signed certificate." },
		{ "Success.Comment", "/** Oculus Platform SDK initialization succeeded. */" },
		{ "Success.Name", "EOvrPlatformInitializeResult::Success" },
		{ "Success.ToolTip", "Oculus Platform SDK initialization succeeded." },
		{ "ToolTip", "Describes the various results possible when attempting to initialize the platform.\nAnything other than ::ovrPlatformInitialize_Success should be considered a fatal error\nwith respect to using the platform, as the platform is not guaranteed to be legitimate\nor work correctly." },
		{ "UnableToVerify.Comment", "/** Oculus Platform SDK failed to initialize due to unable to verify the application's signature during initialization. */" },
		{ "UnableToVerify.Name", "EOvrPlatformInitializeResult::UnableToVerify" },
		{ "UnableToVerify.ToolTip", "Oculus Platform SDK failed to initialize due to unable to verify the application's signature during initialization." },
		{ "Uninitialized.Comment", "/** Oculus Platform SDK was not initialized. */" },
		{ "Uninitialized.Name", "EOvrPlatformInitializeResult::Uninitialized" },
		{ "Uninitialized.ToolTip", "Oculus Platform SDK was not initialized." },
		{ "Unknown.Name", "EOvrPlatformInitializeResult::Unknown" },
		{ "VersionMismatch.Comment", "/** There was a mismatch between the version of Oculus Platform SDK used by the application and the version installed on the Oculus user's device. */" },
		{ "VersionMismatch.Name", "EOvrPlatformInitializeResult::VersionMismatch" },
		{ "VersionMismatch.ToolTip", "There was a mismatch between the version of Oculus Platform SDK used by the application and the version installed on the Oculus user's device." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrPlatformInitializeResult::Success", (int64)EOvrPlatformInitializeResult::Success },
		{ "EOvrPlatformInitializeResult::Uninitialized", (int64)EOvrPlatformInitializeResult::Uninitialized },
		{ "EOvrPlatformInitializeResult::PreLoaded", (int64)EOvrPlatformInitializeResult::PreLoaded },
		{ "EOvrPlatformInitializeResult::FileInvalid", (int64)EOvrPlatformInitializeResult::FileInvalid },
		{ "EOvrPlatformInitializeResult::SignatureInvalid", (int64)EOvrPlatformInitializeResult::SignatureInvalid },
		{ "EOvrPlatformInitializeResult::UnableToVerify", (int64)EOvrPlatformInitializeResult::UnableToVerify },
		{ "EOvrPlatformInitializeResult::VersionMismatch", (int64)EOvrPlatformInitializeResult::VersionMismatch },
		{ "EOvrPlatformInitializeResult::Unknown", (int64)EOvrPlatformInitializeResult::Unknown },
		{ "EOvrPlatformInitializeResult::InvalidCredentials", (int64)EOvrPlatformInitializeResult::InvalidCredentials },
		{ "EOvrPlatformInitializeResult::NotEntitled", (int64)EOvrPlatformInitializeResult::NotEntitled },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrPlatformInitializeResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrPlatformInitializeResult",
	"EOvrPlatformInitializeResult",
	Z_Construct_UEnum_OVRPlatform_EOvrPlatformInitializeResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrPlatformInitializeResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrPlatformInitializeResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrPlatformInitializeResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrPlatformInitializeResult()
{
	if (!Z_Registration_Info_UEnum_EOvrPlatformInitializeResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrPlatformInitializeResult.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrPlatformInitializeResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrPlatformInitializeResult.InnerSingleton;
}
// End Enum EOvrPlatformInitializeResult

// Begin Enum EOvrProductType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrProductType;
static UEnum* EOvrProductType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrProductType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrProductType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrProductType, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrProductType"));
	}
	return Z_Registration_Info_UEnum_EOvrProductType.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrProductType>()
{
	return EOvrProductType_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrProductType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This `enum` value represents the possible types of a FOvrProduct, which is an item purchased in the application.\n * An In-app purchase (IAP) add-on can be durable, consuable, or a subscription.\n */" },
		{ "CONSUMABLE.Comment", "/** This product is an IAP item that can be consumed only once. It can only be purchased again after it is consumed. */" },
		{ "CONSUMABLE.Name", "EOvrProductType::CONSUMABLE" },
		{ "CONSUMABLE.ToolTip", "This product is an IAP item that can be consumed only once. It can only be purchased again after it is consumed." },
		{ "DURABLE.Comment", "/** This product is a durable IAP item that can be consumed multiple times. It can be purchased only once. */" },
		{ "DURABLE.Name", "EOvrProductType::DURABLE" },
		{ "DURABLE.ToolTip", "This product is a durable IAP item that can be consumed multiple times. It can be purchased only once." },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "SUBSCRIPTION.Comment", "/** This product represents a subscription. Subscriptions provide a way for users to purchase your app or its premium content by way of a recurring payment model. */" },
		{ "SUBSCRIPTION.Name", "EOvrProductType::SUBSCRIPTION" },
		{ "SUBSCRIPTION.ToolTip", "This product represents a subscription. Subscriptions provide a way for users to purchase your app or its premium content by way of a recurring payment model." },
		{ "ToolTip", "This `enum` value represents the possible types of a FOvrProduct, which is an item purchased in the application.\nAn In-app purchase (IAP) add-on can be durable, consuable, or a subscription." },
		{ "Unknown.Name", "EOvrProductType::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrProductType::Unknown", (int64)EOvrProductType::Unknown },
		{ "EOvrProductType::DURABLE", (int64)EOvrProductType::DURABLE },
		{ "EOvrProductType::CONSUMABLE", (int64)EOvrProductType::CONSUMABLE },
		{ "EOvrProductType::SUBSCRIPTION", (int64)EOvrProductType::SUBSCRIPTION },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrProductType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrProductType",
	"EOvrProductType",
	Z_Construct_UEnum_OVRPlatform_EOvrProductType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrProductType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrProductType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrProductType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrProductType()
{
	if (!Z_Registration_Info_UEnum_EOvrProductType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrProductType.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrProductType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrProductType.InnerSingleton;
}
// End Enum EOvrProductType

// Begin Enum EOvrReportRequestResponse
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrReportRequestResponse;
static UEnum* EOvrReportRequestResponse_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrReportRequestResponse.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrReportRequestResponse.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrReportRequestResponse, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrReportRequestResponse"));
	}
	return Z_Registration_Info_UEnum_EOvrReportRequestResponse.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrReportRequestResponse>()
{
	return EOvrReportRequestResponse_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrReportRequestResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An application user can report abusive behavior or content following the in-app reporting flow.\n * This report request response represents the possible states that the app can respond to the platform\n * notification, i.e., the running application indicates whether they want to show their in-app reporting flow\n * or that they choose to ignore the request via UOvrRequestsBlueprintLibrary::AbuseReport_ReportRequestHandled().\n */" },
		{ "Handled.Comment", "/** This 'enum' member represents the response to the platform notification that the in-app reporting flow request is handled. */" },
		{ "Handled.Name", "EOvrReportRequestResponse::Handled" },
		{ "Handled.ToolTip", "This 'enum' member represents the response to the platform notification that the in-app reporting flow request is handled." },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "ToolTip", "An application user can report abusive behavior or content following the in-app reporting flow.\nThis report request response represents the possible states that the app can respond to the platform\nnotification, i.e., the running application indicates whether they want to show their in-app reporting flow\nor that they choose to ignore the request via UOvrRequestsBlueprintLibrary::AbuseReport_ReportRequestHandled()." },
		{ "Unavailable.Comment", "/** This 'enum' member represents the response to the platform notification that the in-app reporting flow is unavailable or non-existent. */" },
		{ "Unavailable.Name", "EOvrReportRequestResponse::Unavailable" },
		{ "Unavailable.ToolTip", "This 'enum' member represents the response to the platform notification that the in-app reporting flow is unavailable or non-existent." },
		{ "Unhandled.Comment", "/** This 'enum' member represents the response to the platform notification that the in-app reporting flow request is not handled. */" },
		{ "Unhandled.Name", "EOvrReportRequestResponse::Unhandled" },
		{ "Unhandled.ToolTip", "This 'enum' member represents the response to the platform notification that the in-app reporting flow request is not handled." },
		{ "Unknown.Name", "EOvrReportRequestResponse::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrReportRequestResponse::Unknown", (int64)EOvrReportRequestResponse::Unknown },
		{ "EOvrReportRequestResponse::Handled", (int64)EOvrReportRequestResponse::Handled },
		{ "EOvrReportRequestResponse::Unhandled", (int64)EOvrReportRequestResponse::Unhandled },
		{ "EOvrReportRequestResponse::Unavailable", (int64)EOvrReportRequestResponse::Unavailable },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrReportRequestResponse_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrReportRequestResponse",
	"EOvrReportRequestResponse",
	Z_Construct_UEnum_OVRPlatform_EOvrReportRequestResponse_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrReportRequestResponse_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrReportRequestResponse_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrReportRequestResponse_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrReportRequestResponse()
{
	if (!Z_Registration_Info_UEnum_EOvrReportRequestResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrReportRequestResponse.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrReportRequestResponse_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrReportRequestResponse.InnerSingleton;
}
// End Enum EOvrReportRequestResponse

// Begin Enum EOvrRichPresenceExtraContext
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrRichPresenceExtraContext;
static UEnum* EOvrRichPresenceExtraContext_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrRichPresenceExtraContext.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrRichPresenceExtraContext.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrRichPresenceExtraContext, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrRichPresenceExtraContext"));
	}
	return Z_Registration_Info_UEnum_EOvrRichPresenceExtraContext.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrRichPresenceExtraContext>()
{
	return EOvrRichPresenceExtraContext_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrRichPresenceExtraContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Display extra information about the user's presence */" },
		{ "CurrentCapacity.Comment", "/** Display the current amount with the user over the max */" },
		{ "CurrentCapacity.Name", "EOvrRichPresenceExtraContext::CurrentCapacity" },
		{ "CurrentCapacity.ToolTip", "Display the current amount with the user over the max" },
		{ "EndingIn.Comment", "/** Display how soon the match/game/race/etc will end */" },
		{ "EndingIn.Name", "EOvrRichPresenceExtraContext::EndingIn" },
		{ "EndingIn.ToolTip", "Display how soon the match/game/race/etc will end" },
		{ "LookingForAMatch.Comment", "/** Display that this user is looking for a match */" },
		{ "LookingForAMatch.Name", "EOvrRichPresenceExtraContext::LookingForAMatch" },
		{ "LookingForAMatch.ToolTip", "Display that this user is looking for a match" },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "None.Comment", "/** Display nothing */" },
		{ "None.Name", "EOvrRichPresenceExtraContext::None" },
		{ "None.ToolTip", "Display nothing" },
		{ "StartedAgo.Comment", "/** Display how long ago the match/game/race/etc started */" },
		{ "StartedAgo.Name", "EOvrRichPresenceExtraContext::StartedAgo" },
		{ "StartedAgo.ToolTip", "Display how long ago the match/game/race/etc started" },
		{ "ToolTip", "Display extra information about the user's presence" },
		{ "Unknown.Name", "EOvrRichPresenceExtraContext::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrRichPresenceExtraContext::Unknown", (int64)EOvrRichPresenceExtraContext::Unknown },
		{ "EOvrRichPresenceExtraContext::None", (int64)EOvrRichPresenceExtraContext::None },
		{ "EOvrRichPresenceExtraContext::CurrentCapacity", (int64)EOvrRichPresenceExtraContext::CurrentCapacity },
		{ "EOvrRichPresenceExtraContext::StartedAgo", (int64)EOvrRichPresenceExtraContext::StartedAgo },
		{ "EOvrRichPresenceExtraContext::EndingIn", (int64)EOvrRichPresenceExtraContext::EndingIn },
		{ "EOvrRichPresenceExtraContext::LookingForAMatch", (int64)EOvrRichPresenceExtraContext::LookingForAMatch },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrRichPresenceExtraContext_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrRichPresenceExtraContext",
	"EOvrRichPresenceExtraContext",
	Z_Construct_UEnum_OVRPlatform_EOvrRichPresenceExtraContext_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrRichPresenceExtraContext_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrRichPresenceExtraContext_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrRichPresenceExtraContext_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrRichPresenceExtraContext()
{
	if (!Z_Registration_Info_UEnum_EOvrRichPresenceExtraContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrRichPresenceExtraContext.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrRichPresenceExtraContext_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrRichPresenceExtraContext.InnerSingleton;
}
// End Enum EOvrRichPresenceExtraContext

// Begin Enum EOvrSdkAccountType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrSdkAccountType;
static UEnum* EOvrSdkAccountType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrSdkAccountType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrSdkAccountType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrSdkAccountType, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrSdkAccountType"));
	}
	return Z_Registration_Info_UEnum_EOvrSdkAccountType.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrSdkAccountType>()
{
	return EOvrSdkAccountType_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrSdkAccountType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A user can have multiple sdk accounts associated with it. An FOvrSdkAccount represents the oculus user and the particular x-account that is linked to the  user. SDK accounts can be retrived for a particular user by calling UOvrRequestsBlueprintLibrary::User_GetSdkAccounts(). This enumeration represents the specific type of SDK account that is associated. */" },
		{ "FacebookGameroom.Name", "EOvrSdkAccountType::FacebookGameroom" },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "Oculus.Name", "EOvrSdkAccountType::Oculus" },
		{ "ToolTip", "A user can have multiple sdk accounts associated with it. An FOvrSdkAccount represents the oculus user and the particular x-account that is linked to the  user. SDK accounts can be retrived for a particular user by calling UOvrRequestsBlueprintLibrary::User_GetSdkAccounts(). This enumeration represents the specific type of SDK account that is associated." },
		{ "Unknown.Name", "EOvrSdkAccountType::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrSdkAccountType::Unknown", (int64)EOvrSdkAccountType::Unknown },
		{ "EOvrSdkAccountType::Oculus", (int64)EOvrSdkAccountType::Oculus },
		{ "EOvrSdkAccountType::FacebookGameroom", (int64)EOvrSdkAccountType::FacebookGameroom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrSdkAccountType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrSdkAccountType",
	"EOvrSdkAccountType",
	Z_Construct_UEnum_OVRPlatform_EOvrSdkAccountType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrSdkAccountType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrSdkAccountType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrSdkAccountType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrSdkAccountType()
{
	if (!Z_Registration_Info_UEnum_EOvrSdkAccountType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrSdkAccountType.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrSdkAccountType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrSdkAccountType.InnerSingleton;
}
// End Enum EOvrSdkAccountType

// Begin Enum EOvrServiceProvider
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrServiceProvider;
static UEnum* EOvrServiceProvider_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrServiceProvider.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrServiceProvider.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrServiceProvider, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrServiceProvider"));
	}
	return Z_Registration_Info_UEnum_EOvrServiceProvider.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrServiceProvider>()
{
	return EOvrServiceProvider_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrServiceProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** The service provider enum describes the specific provider that is associated with the FOvrLinkedAccount of a FOvrUser. Linked accounts for users represent the third party identities that are used for services or apps in association with user. */" },
		{ "Dropbox.Name", "EOvrServiceProvider::Dropbox" },
		{ "Facebook.Name", "EOvrServiceProvider::Facebook" },
		{ "Google.Name", "EOvrServiceProvider::Google" },
		{ "Instagram.Name", "EOvrServiceProvider::Instagram" },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "RemoteMedia.Name", "EOvrServiceProvider::RemoteMedia" },
		{ "ToolTip", "The service provider enum describes the specific provider that is associated with the FOvrLinkedAccount of a FOvrUser. Linked accounts for users represent the third party identities that are used for services or apps in association with user." },
		{ "Unknown.Name", "EOvrServiceProvider::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrServiceProvider::Unknown", (int64)EOvrServiceProvider::Unknown },
		{ "EOvrServiceProvider::Dropbox", (int64)EOvrServiceProvider::Dropbox },
		{ "EOvrServiceProvider::Facebook", (int64)EOvrServiceProvider::Facebook },
		{ "EOvrServiceProvider::Google", (int64)EOvrServiceProvider::Google },
		{ "EOvrServiceProvider::Instagram", (int64)EOvrServiceProvider::Instagram },
		{ "EOvrServiceProvider::RemoteMedia", (int64)EOvrServiceProvider::RemoteMedia },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrServiceProvider_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrServiceProvider",
	"EOvrServiceProvider",
	Z_Construct_UEnum_OVRPlatform_EOvrServiceProvider_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrServiceProvider_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrServiceProvider_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrServiceProvider_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrServiceProvider()
{
	if (!Z_Registration_Info_UEnum_EOvrServiceProvider.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrServiceProvider.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrServiceProvider_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrServiceProvider.InnerSingleton;
}
// End Enum EOvrServiceProvider

// Begin Enum EOvrShareMediaStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrShareMediaStatus;
static UEnum* EOvrShareMediaStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrShareMediaStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrShareMediaStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrShareMediaStatus, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrShareMediaStatus"));
	}
	return Z_Registration_Info_UEnum_EOvrShareMediaStatus.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrShareMediaStatus>()
{
	return EOvrShareMediaStatus_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrShareMediaStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Canceled.Name", "EOvrShareMediaStatus::Canceled" },
		{ "Comment", "/** ShareMediaStatus enumeration. */" },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "Shared.Name", "EOvrShareMediaStatus::Shared" },
		{ "ToolTip", "ShareMediaStatus enumeration." },
		{ "Unknown.Name", "EOvrShareMediaStatus::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrShareMediaStatus::Unknown", (int64)EOvrShareMediaStatus::Unknown },
		{ "EOvrShareMediaStatus::Shared", (int64)EOvrShareMediaStatus::Shared },
		{ "EOvrShareMediaStatus::Canceled", (int64)EOvrShareMediaStatus::Canceled },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrShareMediaStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrShareMediaStatus",
	"EOvrShareMediaStatus",
	Z_Construct_UEnum_OVRPlatform_EOvrShareMediaStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrShareMediaStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrShareMediaStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrShareMediaStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrShareMediaStatus()
{
	if (!Z_Registration_Info_UEnum_EOvrShareMediaStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrShareMediaStatus.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrShareMediaStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrShareMediaStatus.InnerSingleton;
}
// End Enum EOvrShareMediaStatus

// Begin Enum EOvrSystemVoipStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrSystemVoipStatus;
static UEnum* EOvrSystemVoipStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrSystemVoipStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrSystemVoipStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrSystemVoipStatus, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrSystemVoipStatus"));
	}
	return Z_Registration_Info_UEnum_EOvrSystemVoipStatus.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrSystemVoipStatus>()
{
	return EOvrSystemVoipStatus_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrSystemVoipStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Active.Name", "EOvrSystemVoipStatus::Active" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** The system voip status is the priamary status in every FOvrSystemVoipState. The system voip state is used in parties and horizon home to describe the current state of the input/output for voip in an application. You can read more about system voip [here](https://developer.oculus.com/documentation/unreal/ps-parties/#voip-options). */" },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "Suppressed.Name", "EOvrSystemVoipStatus::Suppressed" },
		{ "ToolTip", "The system voip status is the priamary status in every FOvrSystemVoipState. The system voip state is used in parties and horizon home to describe the current state of the input/output for voip in an application. You can read more about system voip [here](https://developer.oculus.com/documentation/unreal/ps-parties/#voip-options)." },
		{ "Unavailable.Name", "EOvrSystemVoipStatus::Unavailable" },
		{ "Unknown.Name", "EOvrSystemVoipStatus::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrSystemVoipStatus::Unknown", (int64)EOvrSystemVoipStatus::Unknown },
		{ "EOvrSystemVoipStatus::Unavailable", (int64)EOvrSystemVoipStatus::Unavailable },
		{ "EOvrSystemVoipStatus::Suppressed", (int64)EOvrSystemVoipStatus::Suppressed },
		{ "EOvrSystemVoipStatus::Active", (int64)EOvrSystemVoipStatus::Active },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrSystemVoipStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrSystemVoipStatus",
	"EOvrSystemVoipStatus",
	Z_Construct_UEnum_OVRPlatform_EOvrSystemVoipStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrSystemVoipStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrSystemVoipStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrSystemVoipStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrSystemVoipStatus()
{
	if (!Z_Registration_Info_UEnum_EOvrSystemVoipStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrSystemVoipStatus.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrSystemVoipStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrSystemVoipStatus.InnerSingleton;
}
// End Enum EOvrSystemVoipStatus

// Begin Enum EOvrTimeWindow
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrTimeWindow;
static UEnum* EOvrTimeWindow_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrTimeWindow.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrTimeWindow.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrTimeWindow, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrTimeWindow"));
	}
	return Z_Registration_Info_UEnum_EOvrTimeWindow.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrTimeWindow>()
{
	return EOvrTimeWindow_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrTimeWindow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** How far should we go back in time looking at history. */" },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "NinetyDays.Name", "EOvrTimeWindow::NinetyDays" },
		{ "OneDay.Name", "EOvrTimeWindow::OneDay" },
		{ "OneHour.Name", "EOvrTimeWindow::OneHour" },
		{ "OneWeek.Name", "EOvrTimeWindow::OneWeek" },
		{ "ThirtyDays.Name", "EOvrTimeWindow::ThirtyDays" },
		{ "ToolTip", "How far should we go back in time looking at history." },
		{ "Unknown.Name", "EOvrTimeWindow::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrTimeWindow::Unknown", (int64)EOvrTimeWindow::Unknown },
		{ "EOvrTimeWindow::OneHour", (int64)EOvrTimeWindow::OneHour },
		{ "EOvrTimeWindow::OneDay", (int64)EOvrTimeWindow::OneDay },
		{ "EOvrTimeWindow::OneWeek", (int64)EOvrTimeWindow::OneWeek },
		{ "EOvrTimeWindow::ThirtyDays", (int64)EOvrTimeWindow::ThirtyDays },
		{ "EOvrTimeWindow::NinetyDays", (int64)EOvrTimeWindow::NinetyDays },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrTimeWindow_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrTimeWindow",
	"EOvrTimeWindow",
	Z_Construct_UEnum_OVRPlatform_EOvrTimeWindow_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrTimeWindow_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrTimeWindow_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrTimeWindow_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrTimeWindow()
{
	if (!Z_Registration_Info_UEnum_EOvrTimeWindow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrTimeWindow.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrTimeWindow_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrTimeWindow.InnerSingleton;
}
// End Enum EOvrTimeWindow

// Begin Enum EOvrUserOrdering
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrUserOrdering;
static UEnum* EOvrUserOrdering_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrUserOrdering.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrUserOrdering.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrUserOrdering, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrUserOrdering"));
	}
	return Z_Registration_Info_UEnum_EOvrUserOrdering.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrUserOrdering>()
{
	return EOvrUserOrdering_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrUserOrdering_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** The ordering that is used when returning a list of users. */" },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "None.Comment", "/** No preference for ordering (could be in any or no order) */" },
		{ "None.Name", "EOvrUserOrdering::None" },
		{ "None.ToolTip", "No preference for ordering (could be in any or no order)" },
		{ "PresenceAlphabetical.Comment", "/**\n     * Orders by online users first and then offline users. Within each group the\n     * users are ordered alphabetically by display name\n     */" },
		{ "PresenceAlphabetical.Name", "EOvrUserOrdering::PresenceAlphabetical" },
		{ "PresenceAlphabetical.ToolTip", "Orders by online users first and then offline users. Within each group the\nusers are ordered alphabetically by display name" },
		{ "ToolTip", "The ordering that is used when returning a list of users." },
		{ "Unknown.Name", "EOvrUserOrdering::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrUserOrdering::Unknown", (int64)EOvrUserOrdering::Unknown },
		{ "EOvrUserOrdering::None", (int64)EOvrUserOrdering::None },
		{ "EOvrUserOrdering::PresenceAlphabetical", (int64)EOvrUserOrdering::PresenceAlphabetical },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrUserOrdering_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrUserOrdering",
	"EOvrUserOrdering",
	Z_Construct_UEnum_OVRPlatform_EOvrUserOrdering_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrUserOrdering_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrUserOrdering_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrUserOrdering_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrUserOrdering()
{
	if (!Z_Registration_Info_UEnum_EOvrUserOrdering.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrUserOrdering.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrUserOrdering_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrUserOrdering.InnerSingleton;
}
// End Enum EOvrUserOrdering

// Begin Enum EOvrUserPresenceStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrUserPresenceStatus;
static UEnum* EOvrUserPresenceStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrUserPresenceStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrUserPresenceStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrUserPresenceStatus, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrUserPresenceStatus"));
	}
	return Z_Registration_Info_UEnum_EOvrUserPresenceStatus.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrUserPresenceStatus>()
{
	return EOvrUserPresenceStatus_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrUserPresenceStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Describe the current status of the user and it can be retrieved with field FOvrUser::PresenceStatus. */" },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "Offline.Comment", "/** The user status is currently offline. */" },
		{ "Offline.Name", "EOvrUserPresenceStatus::Offline" },
		{ "Offline.ToolTip", "The user status is currently offline." },
		{ "Online.Comment", "/** The user status is currently online. */" },
		{ "Online.Name", "EOvrUserPresenceStatus::Online" },
		{ "Online.ToolTip", "The user status is currently online." },
		{ "ToolTip", "Describe the current status of the user and it can be retrieved with field FOvrUser::PresenceStatus." },
		{ "Unknown.Name", "EOvrUserPresenceStatus::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrUserPresenceStatus::Unknown", (int64)EOvrUserPresenceStatus::Unknown },
		{ "EOvrUserPresenceStatus::Online", (int64)EOvrUserPresenceStatus::Online },
		{ "EOvrUserPresenceStatus::Offline", (int64)EOvrUserPresenceStatus::Offline },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrUserPresenceStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrUserPresenceStatus",
	"EOvrUserPresenceStatus",
	Z_Construct_UEnum_OVRPlatform_EOvrUserPresenceStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrUserPresenceStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrUserPresenceStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrUserPresenceStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrUserPresenceStatus()
{
	if (!Z_Registration_Info_UEnum_EOvrUserPresenceStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrUserPresenceStatus.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrUserPresenceStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrUserPresenceStatus.InnerSingleton;
}
// End Enum EOvrUserPresenceStatus

// Begin Enum EOvrVoipBitrate
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrVoipBitrate;
static UEnum* EOvrVoipBitrate_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrVoipBitrate.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrVoipBitrate.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrVoipBitrate, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrVoipBitrate"));
	}
	return Z_Registration_Info_UEnum_EOvrVoipBitrate.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrVoipBitrate>()
{
	return EOvrVoipBitrate_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrVoipBitrate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "B128000.Comment", "/**\n     * At this point the audio quality should be perceptually indistinguishable from the uncompressed\n     * input.\n     */" },
		{ "B128000.Name", "EOvrVoipBitrate::B128000" },
		{ "B128000.ToolTip", "At this point the audio quality should be perceptually indistinguishable from the uncompressed\ninput." },
		{ "B16000.Comment", "/**\n     * Very low audio quality for minimal network usage. This may not give the full range of Hz for\n     * audio, but it will save on network usage.\n     */" },
		{ "B16000.Name", "EOvrVoipBitrate::B16000" },
		{ "B16000.ToolTip", "Very low audio quality for minimal network usage. This may not give the full range of Hz for\naudio, but it will save on network usage." },
		{ "B24000.Comment", "/** Lower audio quality but also less network usage. */" },
		{ "B24000.Name", "EOvrVoipBitrate::B24000" },
		{ "B24000.ToolTip", "Lower audio quality but also less network usage." },
		{ "B32000.Comment", "/**\n     * This is the default bitrate for voip connections. It should be the best tradeoff between\n     * audio quality and network usage.\n     */" },
		{ "B32000.Name", "EOvrVoipBitrate::B32000" },
		{ "B32000.ToolTip", "This is the default bitrate for voip connections. It should be the best tradeoff between\naudio quality and network usage." },
		{ "B64000.Comment", "/**\n     * Higher audio quality at the expense of network usage. Good if there's music being streamed\n     * over the connections\n     */" },
		{ "B64000.Name", "EOvrVoipBitrate::B64000" },
		{ "B64000.ToolTip", "Higher audio quality at the expense of network usage. Good if there's music being streamed\nover the connections" },
		{ "B96000.Comment", "/** Even higher audio quality for music streaming or radio-like quality. */" },
		{ "B96000.Name", "EOvrVoipBitrate::B96000" },
		{ "B96000.ToolTip", "Even higher audio quality for music streaming or radio-like quality." },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * It's a set of predefined values that represent different levels of audio quality for Voice over IP (VoIP) connections.\n * It can be used in FOvrVoipOptions::BitrateForNewConnections to set the maximum average bitrate the audio codec should use for new VoIP connections.\n */" },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "ToolTip", "It's a set of predefined values that represent different levels of audio quality for Voice over IP (VoIP) connections.\nIt can be used in FOvrVoipOptions::BitrateForNewConnections to set the maximum average bitrate the audio codec should use for new VoIP connections." },
		{ "Unknown.Name", "EOvrVoipBitrate::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrVoipBitrate::Unknown", (int64)EOvrVoipBitrate::Unknown },
		{ "EOvrVoipBitrate::B16000", (int64)EOvrVoipBitrate::B16000 },
		{ "EOvrVoipBitrate::B24000", (int64)EOvrVoipBitrate::B24000 },
		{ "EOvrVoipBitrate::B32000", (int64)EOvrVoipBitrate::B32000 },
		{ "EOvrVoipBitrate::B64000", (int64)EOvrVoipBitrate::B64000 },
		{ "EOvrVoipBitrate::B96000", (int64)EOvrVoipBitrate::B96000 },
		{ "EOvrVoipBitrate::B128000", (int64)EOvrVoipBitrate::B128000 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrVoipBitrate_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrVoipBitrate",
	"EOvrVoipBitrate",
	Z_Construct_UEnum_OVRPlatform_EOvrVoipBitrate_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrVoipBitrate_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrVoipBitrate_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrVoipBitrate_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrVoipBitrate()
{
	if (!Z_Registration_Info_UEnum_EOvrVoipBitrate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrVoipBitrate.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrVoipBitrate_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrVoipBitrate.InnerSingleton;
}
// End Enum EOvrVoipBitrate

// Begin Enum EOvrVoipDtxState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrVoipDtxState;
static UEnum* EOvrVoipDtxState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrVoipDtxState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrVoipDtxState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrVoipDtxState, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrVoipDtxState"));
	}
	return Z_Registration_Info_UEnum_EOvrVoipDtxState.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrVoipDtxState>()
{
	return EOvrVoipDtxState_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrVoipDtxState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This is an enum that defines the possible states for the Opus codec's discontinuous transmission (DTX) feature.\n * It allows you to control whether the Opus codec uses DTX to conserve battery power and reduce transmission rate during pauses in the voice chat.\n * It can be used as the type for the FOvrVoipOptions::CreateNewConnectionUseDtx\n */" },
		{ "Disabled.Comment", "/** This state indicates that the DTX feature is disabled. When disabled, the Opus codec will continuously transmit data, even during pauses in the voice chat. */" },
		{ "Disabled.Name", "EOvrVoipDtxState::Disabled" },
		{ "Disabled.ToolTip", "This state indicates that the DTX feature is disabled. When disabled, the Opus codec will continuously transmit data, even during pauses in the voice chat." },
		{ "Enabled.Comment", "/** This state indicates that the DTX feature is enabled. When enabled, the Opus codec will only transmit data when a person is speaking, which can conserve battery power and reduce transmission rate during pauses in the voice chat. */" },
		{ "Enabled.Name", "EOvrVoipDtxState::Enabled" },
		{ "Enabled.ToolTip", "This state indicates that the DTX feature is enabled. When enabled, the Opus codec will only transmit data when a person is speaking, which can conserve battery power and reduce transmission rate during pauses in the voice chat." },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "ToolTip", "This is an enum that defines the possible states for the Opus codec's discontinuous transmission (DTX) feature.\nIt allows you to control whether the Opus codec uses DTX to conserve battery power and reduce transmission rate during pauses in the voice chat.\nIt can be used as the type for the FOvrVoipOptions::CreateNewConnectionUseDtx" },
		{ "Unknown.Name", "EOvrVoipDtxState::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrVoipDtxState::Unknown", (int64)EOvrVoipDtxState::Unknown },
		{ "EOvrVoipDtxState::Enabled", (int64)EOvrVoipDtxState::Enabled },
		{ "EOvrVoipDtxState::Disabled", (int64)EOvrVoipDtxState::Disabled },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrVoipDtxState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrVoipDtxState",
	"EOvrVoipDtxState",
	Z_Construct_UEnum_OVRPlatform_EOvrVoipDtxState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrVoipDtxState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrVoipDtxState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrVoipDtxState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrVoipDtxState()
{
	if (!Z_Registration_Info_UEnum_EOvrVoipDtxState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrVoipDtxState.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrVoipDtxState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrVoipDtxState.InnerSingleton;
}
// End Enum EOvrVoipDtxState

// Begin Enum EOvrVoipMuteState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrVoipMuteState;
static UEnum* EOvrVoipMuteState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrVoipMuteState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrVoipMuteState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrVoipMuteState, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrVoipMuteState"));
	}
	return Z_Registration_Info_UEnum_EOvrVoipMuteState.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrVoipMuteState>()
{
	return EOvrVoipMuteState_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrVoipMuteState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** VoipMuteState enumeration. */" },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "Muted.Name", "EOvrVoipMuteState::Muted" },
		{ "ToolTip", "VoipMuteState enumeration." },
		{ "Unknown.Name", "EOvrVoipMuteState::Unknown" },
		{ "Unmuted.Name", "EOvrVoipMuteState::Unmuted" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrVoipMuteState::Unknown", (int64)EOvrVoipMuteState::Unknown },
		{ "EOvrVoipMuteState::Muted", (int64)EOvrVoipMuteState::Muted },
		{ "EOvrVoipMuteState::Unmuted", (int64)EOvrVoipMuteState::Unmuted },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrVoipMuteState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrVoipMuteState",
	"EOvrVoipMuteState",
	Z_Construct_UEnum_OVRPlatform_EOvrVoipMuteState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrVoipMuteState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrVoipMuteState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrVoipMuteState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrVoipMuteState()
{
	if (!Z_Registration_Info_UEnum_EOvrVoipMuteState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrVoipMuteState.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrVoipMuteState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrVoipMuteState.InnerSingleton;
}
// End Enum EOvrVoipMuteState

// Begin Enum EOvrVoipSampleRate
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrVoipSampleRate;
static UEnum* EOvrVoipSampleRate_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrVoipSampleRate.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrVoipSampleRate.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrVoipSampleRate, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrVoipSampleRate"));
	}
	return Z_Registration_Info_UEnum_EOvrVoipSampleRate.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrVoipSampleRate>()
{
	return EOvrVoipSampleRate_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrVoipSampleRate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** VoipSampleRate enumeration. */" },
		{ "HZ24000.Name", "EOvrVoipSampleRate::HZ24000" },
		{ "HZ44100.Name", "EOvrVoipSampleRate::HZ44100" },
		{ "HZ48000.Name", "EOvrVoipSampleRate::HZ48000" },
		{ "ModuleRelativePath", "Public/OVRPlatformEnums.h" },
		{ "ToolTip", "VoipSampleRate enumeration." },
		{ "Unknown.Name", "EOvrVoipSampleRate::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrVoipSampleRate::Unknown", (int64)EOvrVoipSampleRate::Unknown },
		{ "EOvrVoipSampleRate::HZ24000", (int64)EOvrVoipSampleRate::HZ24000 },
		{ "EOvrVoipSampleRate::HZ44100", (int64)EOvrVoipSampleRate::HZ44100 },
		{ "EOvrVoipSampleRate::HZ48000", (int64)EOvrVoipSampleRate::HZ48000 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrVoipSampleRate_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrVoipSampleRate",
	"EOvrVoipSampleRate",
	Z_Construct_UEnum_OVRPlatform_EOvrVoipSampleRate_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrVoipSampleRate_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrVoipSampleRate_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrVoipSampleRate_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrVoipSampleRate()
{
	if (!Z_Registration_Info_UEnum_EOvrVoipSampleRate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrVoipSampleRate.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrVoipSampleRate_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrVoipSampleRate.InnerSingleton;
}
// End Enum EOvrVoipSampleRate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Thirdparty_OculusPlatformSDK_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformEnums_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOvrAbuseReportType_StaticEnum, TEXT("EOvrAbuseReportType"), &Z_Registration_Info_UEnum_EOvrAbuseReportType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3556896673U) },
		{ EOvrAccountAgeCategory_StaticEnum, TEXT("EOvrAccountAgeCategory"), &Z_Registration_Info_UEnum_EOvrAccountAgeCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3276311111U) },
		{ EOvrAchievementType_StaticEnum, TEXT("EOvrAchievementType"), &Z_Registration_Info_UEnum_EOvrAchievementType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3816928298U) },
		{ EOvrAppAgeCategory_StaticEnum, TEXT("EOvrAppAgeCategory"), &Z_Registration_Info_UEnum_EOvrAppAgeCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2314652282U) },
		{ EOvrAppInstallResult_StaticEnum, TEXT("EOvrAppInstallResult"), &Z_Registration_Info_UEnum_EOvrAppInstallResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2221563158U) },
		{ EOvrAppStatus_StaticEnum, TEXT("EOvrAppStatus"), &Z_Registration_Info_UEnum_EOvrAppStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3987841447U) },
		{ EOvrChallengeCreationType_StaticEnum, TEXT("EOvrChallengeCreationType"), &Z_Registration_Info_UEnum_EOvrChallengeCreationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4154682203U) },
		{ EOvrChallengeViewerFilter_StaticEnum, TEXT("EOvrChallengeViewerFilter"), &Z_Registration_Info_UEnum_EOvrChallengeViewerFilter, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2581366048U) },
		{ EOvrChallengeVisibility_StaticEnum, TEXT("EOvrChallengeVisibility"), &Z_Registration_Info_UEnum_EOvrChallengeVisibility, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1440088292U) },
		{ EOvrKeyValuePairType_StaticEnum, TEXT("EOvrKeyValuePairType"), &Z_Registration_Info_UEnum_EOvrKeyValuePairType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3892066808U) },
		{ EOvrLaunchResult_StaticEnum, TEXT("EOvrLaunchResult"), &Z_Registration_Info_UEnum_EOvrLaunchResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 742670396U) },
		{ EOvrLaunchType_StaticEnum, TEXT("EOvrLaunchType"), &Z_Registration_Info_UEnum_EOvrLaunchType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3515398093U) },
		{ EOvrLeaderboardFilterType_StaticEnum, TEXT("EOvrLeaderboardFilterType"), &Z_Registration_Info_UEnum_EOvrLeaderboardFilterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 66510001U) },
		{ EOvrLeaderboardStartAt_StaticEnum, TEXT("EOvrLeaderboardStartAt"), &Z_Registration_Info_UEnum_EOvrLeaderboardStartAt, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1611269473U) },
		{ EOvrLivestreamingStartStatus_StaticEnum, TEXT("EOvrLivestreamingStartStatus"), &Z_Registration_Info_UEnum_EOvrLivestreamingStartStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 587257287U) },
		{ EOvrLogEventName_StaticEnum, TEXT("EOvrLogEventName"), &Z_Registration_Info_UEnum_EOvrLogEventName, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 779511201U) },
		{ EOvrLogEventParameter_StaticEnum, TEXT("EOvrLogEventParameter"), &Z_Registration_Info_UEnum_EOvrLogEventParameter, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3586707751U) },
		{ EOvrMediaContentType_StaticEnum, TEXT("EOvrMediaContentType"), &Z_Registration_Info_UEnum_EOvrMediaContentType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1606769935U) },
		{ EOvrMultiplayerErrorErrorKey_StaticEnum, TEXT("EOvrMultiplayerErrorErrorKey"), &Z_Registration_Info_UEnum_EOvrMultiplayerErrorErrorKey, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 242313898U) },
		{ EOvrNetSyncConnectionStatus_StaticEnum, TEXT("EOvrNetSyncConnectionStatus"), &Z_Registration_Info_UEnum_EOvrNetSyncConnectionStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 12733259U) },
		{ EOvrNetSyncDisconnectReason_StaticEnum, TEXT("EOvrNetSyncDisconnectReason"), &Z_Registration_Info_UEnum_EOvrNetSyncDisconnectReason, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2662327382U) },
		{ EOvrNetSyncVoipMicSource_StaticEnum, TEXT("EOvrNetSyncVoipMicSource"), &Z_Registration_Info_UEnum_EOvrNetSyncVoipMicSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1002696225U) },
		{ EOvrNetSyncVoipStreamMode_StaticEnum, TEXT("EOvrNetSyncVoipStreamMode"), &Z_Registration_Info_UEnum_EOvrNetSyncVoipStreamMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3111426676U) },
		{ EOvrOfferTerm_StaticEnum, TEXT("EOvrOfferTerm"), &Z_Registration_Info_UEnum_EOvrOfferTerm, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3119593985U) },
		{ EOvrOfferType_StaticEnum, TEXT("EOvrOfferType"), &Z_Registration_Info_UEnum_EOvrOfferType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 736760474U) },
		{ EOvrPartyUpdateAction_StaticEnum, TEXT("EOvrPartyUpdateAction"), &Z_Registration_Info_UEnum_EOvrPartyUpdateAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3618152502U) },
		{ EOvrPermissionGrantStatus_StaticEnum, TEXT("EOvrPermissionGrantStatus"), &Z_Registration_Info_UEnum_EOvrPermissionGrantStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2973008399U) },
		{ EOvrPlatformInitializeResult_StaticEnum, TEXT("EOvrPlatformInitializeResult"), &Z_Registration_Info_UEnum_EOvrPlatformInitializeResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3172586913U) },
		{ EOvrProductType_StaticEnum, TEXT("EOvrProductType"), &Z_Registration_Info_UEnum_EOvrProductType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 142306326U) },
		{ EOvrReportRequestResponse_StaticEnum, TEXT("EOvrReportRequestResponse"), &Z_Registration_Info_UEnum_EOvrReportRequestResponse, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2422182273U) },
		{ EOvrRichPresenceExtraContext_StaticEnum, TEXT("EOvrRichPresenceExtraContext"), &Z_Registration_Info_UEnum_EOvrRichPresenceExtraContext, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2401183676U) },
		{ EOvrSdkAccountType_StaticEnum, TEXT("EOvrSdkAccountType"), &Z_Registration_Info_UEnum_EOvrSdkAccountType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3522139040U) },
		{ EOvrServiceProvider_StaticEnum, TEXT("EOvrServiceProvider"), &Z_Registration_Info_UEnum_EOvrServiceProvider, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 373134564U) },
		{ EOvrShareMediaStatus_StaticEnum, TEXT("EOvrShareMediaStatus"), &Z_Registration_Info_UEnum_EOvrShareMediaStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4037650206U) },
		{ EOvrSystemVoipStatus_StaticEnum, TEXT("EOvrSystemVoipStatus"), &Z_Registration_Info_UEnum_EOvrSystemVoipStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2058008943U) },
		{ EOvrTimeWindow_StaticEnum, TEXT("EOvrTimeWindow"), &Z_Registration_Info_UEnum_EOvrTimeWindow, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1428063092U) },
		{ EOvrUserOrdering_StaticEnum, TEXT("EOvrUserOrdering"), &Z_Registration_Info_UEnum_EOvrUserOrdering, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3343775366U) },
		{ EOvrUserPresenceStatus_StaticEnum, TEXT("EOvrUserPresenceStatus"), &Z_Registration_Info_UEnum_EOvrUserPresenceStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3335896890U) },
		{ EOvrVoipBitrate_StaticEnum, TEXT("EOvrVoipBitrate"), &Z_Registration_Info_UEnum_EOvrVoipBitrate, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1977175825U) },
		{ EOvrVoipDtxState_StaticEnum, TEXT("EOvrVoipDtxState"), &Z_Registration_Info_UEnum_EOvrVoipDtxState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3268655473U) },
		{ EOvrVoipMuteState_StaticEnum, TEXT("EOvrVoipMuteState"), &Z_Registration_Info_UEnum_EOvrVoipMuteState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 248964625U) },
		{ EOvrVoipSampleRate_StaticEnum, TEXT("EOvrVoipSampleRate"), &Z_Registration_Info_UEnum_EOvrVoipSampleRate, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 619096054U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Thirdparty_OculusPlatformSDK_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformEnums_h_3882763445(TEXT("/Script/OVRPlatform"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Thirdparty_OculusPlatformSDK_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformEnums_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Thirdparty_OculusPlatformSDK_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformEnums_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
