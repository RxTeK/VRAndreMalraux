// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OVRPlatform/Public/OVRPlatformOptions.h"
#include "OVRPlatform/Public/OVRPlatformTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOVRPlatformOptions() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrAbuseReportType();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrChallengeViewerFilter();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrChallengeVisibility();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrMultiplayerErrorErrorKey();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipStreamMode();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrServiceProvider();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrTimeWindow();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrVoipBitrate();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrVoipDtxState();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrAbuseReportOptions();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrApplicationOptions();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrAvatarEditorOptions();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrChallengeOptions();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrGroupPresenceOptions();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrId();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrInviteOptions();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrMultiplayerErrorOptions();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrNetSyncOptions();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrRichPresenceOptions();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrRosterOptions();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrUserOptions();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrVoipOptions();
UPackage* Z_Construct_UPackage__Script_OVRPlatform();
// End Cross Module References

// Begin ScriptStruct FOvrAbuseReportOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OvrAbuseReportOptions;
class UScriptStruct* FOvrAbuseReportOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OvrAbuseReportOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OvrAbuseReportOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOvrAbuseReportOptions, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("OvrAbuseReportOptions"));
	}
	return Z_Registration_Info_UScriptStruct_OvrAbuseReportOptions.OuterSingleton;
}
template<> OVRPLATFORM_API UScriptStruct* StaticStruct<FOvrAbuseReportOptions>()
{
	return FOvrAbuseReportOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "OvrPlatform|Options|AbuseReport" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The Abuse Report Options provide a way for developers to customize the reporting flow and specify the type of content being reported,\n * which can be either a EOvrAbuseReportType::User or an EOvrAbuseReportType::Object,\n * helping to maintain a safe and respectful community within their application.\n */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Abuse Report Options provide a way for developers to customize the reporting flow and specify the type of content being reported,\nwhich can be either a EOvrAbuseReportType::User or an EOvrAbuseReportType::Object,\nhelping to maintain a safe and respectful community within their application." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreventPeopleChooser_MetaData[] = {
		{ "Category", "OvrPlatform|Options|AbuseReport|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Set whether or not to show the user selection step.\n     * If the reported object is a user, they can choose to block the reported user from further interactions within the platform.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set whether or not to show the user selection step.\nIf the reported object is a user, they can choose to block the reported user from further interactions within the platform." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReportType_MetaData[] = {
		{ "Category", "OvrPlatform|Options|AbuseReport|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The intended entity type #EOvrAbuseReportType being reported, it can be either a user EOvrAbuseReportType::User\n     * or an object/content EOvrAbuseReportType::Object.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The intended entity type #EOvrAbuseReportType being reported, it can be either a user EOvrAbuseReportType::User\nor an object/content EOvrAbuseReportType::Object." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_PreventPeopleChooser_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PreventPeopleChooser;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReportType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReportType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOvrAbuseReportOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics::NewProp_PreventPeopleChooser_SetBit(void* Obj)
{
	((FOvrAbuseReportOptions*)Obj)->PreventPeopleChooser = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics::NewProp_PreventPeopleChooser = { "PreventPeopleChooser", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOvrAbuseReportOptions), &Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics::NewProp_PreventPeopleChooser_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreventPeopleChooser_MetaData), NewProp_PreventPeopleChooser_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics::NewProp_ReportType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics::NewProp_ReportType = { "ReportType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrAbuseReportOptions, ReportType), Z_Construct_UEnum_OVRPlatform_EOvrAbuseReportType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReportType_MetaData), NewProp_ReportType_MetaData) }; // 3487705059
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics::NewProp_PreventPeopleChooser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics::NewProp_ReportType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics::NewProp_ReportType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	&NewStructOps,
	"OvrAbuseReportOptions",
	Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics::PropPointers),
	sizeof(FOvrAbuseReportOptions),
	alignof(FOvrAbuseReportOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOvrAbuseReportOptions()
{
	if (!Z_Registration_Info_UScriptStruct_OvrAbuseReportOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OvrAbuseReportOptions.InnerSingleton, Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OvrAbuseReportOptions.InnerSingleton;
}
// End ScriptStruct FOvrAbuseReportOptions

// Begin ScriptStruct FOvrAdvancedAbuseReportOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OvrAdvancedAbuseReportOptions;
class UScriptStruct* FOvrAdvancedAbuseReportOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OvrAdvancedAbuseReportOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OvrAdvancedAbuseReportOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("OvrAdvancedAbuseReportOptions"));
	}
	return Z_Registration_Info_UScriptStruct_OvrAdvancedAbuseReportOptions.OuterSingleton;
}
template<> OVRPLATFORM_API UScriptStruct* StaticStruct<FOvrAdvancedAbuseReportOptions>()
{
	return FOvrAdvancedAbuseReportOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "OvrPlatform|Options|AdvancedAbuseReport" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The Advanced Abuse Report Options provides a way for developers to customize the reporting flow and specify the type of content being reported,\n * which can be either a EOvrAbuseReportType::User or an EOvrAbuseReportType::Object,\n * helping to maintain a safe and respectful community within their application.\n */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Advanced Abuse Report Options provides a way for developers to customize the reporting flow and specify the type of content being reported,\nwhich can be either a EOvrAbuseReportType::User or an EOvrAbuseReportType::Object,\nhelping to maintain a safe and respectful community within their application." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeveloperDefinedContext_MetaData[] = {
		{ "Category", "OvrPlatform|Options|AdvancedAbuseReport|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * This field is intended to allow developers to pass custom metadata through the report flow.\n     * The metadata passed through is included with the report received by the developer.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This field is intended to allow developers to pass custom metadata through the report flow.\nThe metadata passed through is included with the report received by the developer." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectType_MetaData[] = {
		{ "Category", "OvrPlatform|Options|AdvancedAbuseReport|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * If #EOvrAbuseReportType is EOvrAbuseReportType::Object, a string representing the type of content being reported.\n     * This should correspond to the object_type string used in the UI.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If #EOvrAbuseReportType is EOvrAbuseReportType::Object, a string representing the type of content being reported.\nThis should correspond to the object_type string used in the UI." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReportType_MetaData[] = {
		{ "Category", "OvrPlatform|Options|AdvancedAbuseReport|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The intended entity type #EOvrAbuseReportType being reported, it can be either a user EOvrAbuseReportType::User\n     * or an object/content EOvrAbuseReportType::Object.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The intended entity type #EOvrAbuseReportType being reported, it can be either a user EOvrAbuseReportType::User\nor an object/content EOvrAbuseReportType::Object." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuggestedUsers_MetaData[] = {
		{ "Category", "OvrPlatform|Options|AdvancedAbuseReport|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Provide a list of users to suggest for reporting. This list should include users that the reporter has recently interacted with\n     * to aid them in selecting the right user to report.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Provide a list of users to suggest for reporting. This list should include users that the reporter has recently interacted with\nto aid them in selecting the right user to report." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeveloperDefinedContext_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeveloperDefinedContext_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DeveloperDefinedContext;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReportType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReportType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SuggestedUsers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SuggestedUsers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOvrAdvancedAbuseReportOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_DeveloperDefinedContext_ValueProp = { "DeveloperDefinedContext", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_DeveloperDefinedContext_Key_KeyProp = { "DeveloperDefinedContext_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_DeveloperDefinedContext = { "DeveloperDefinedContext", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrAdvancedAbuseReportOptions, DeveloperDefinedContext), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeveloperDefinedContext_MetaData), NewProp_DeveloperDefinedContext_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_ObjectType = { "ObjectType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrAdvancedAbuseReportOptions, ObjectType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectType_MetaData), NewProp_ObjectType_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_ReportType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_ReportType = { "ReportType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrAdvancedAbuseReportOptions, ReportType), Z_Construct_UEnum_OVRPlatform_EOvrAbuseReportType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReportType_MetaData), NewProp_ReportType_MetaData) }; // 3487705059
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_SuggestedUsers_Inner = { "SuggestedUsers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOvrId, METADATA_PARAMS(0, nullptr) }; // 3472719273
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_SuggestedUsers = { "SuggestedUsers", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrAdvancedAbuseReportOptions, SuggestedUsers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuggestedUsers_MetaData), NewProp_SuggestedUsers_MetaData) }; // 3472719273
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_DeveloperDefinedContext_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_DeveloperDefinedContext_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_DeveloperDefinedContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_ObjectType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_ReportType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_ReportType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_SuggestedUsers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewProp_SuggestedUsers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	&NewStructOps,
	"OvrAdvancedAbuseReportOptions",
	Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::PropPointers),
	sizeof(FOvrAdvancedAbuseReportOptions),
	alignof(FOvrAdvancedAbuseReportOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions()
{
	if (!Z_Registration_Info_UScriptStruct_OvrAdvancedAbuseReportOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OvrAdvancedAbuseReportOptions.InnerSingleton, Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OvrAdvancedAbuseReportOptions.InnerSingleton;
}
// End ScriptStruct FOvrAdvancedAbuseReportOptions

// Begin ScriptStruct FOvrApplicationOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OvrApplicationOptions;
class UScriptStruct* FOvrApplicationOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OvrApplicationOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OvrApplicationOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOvrApplicationOptions, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("OvrApplicationOptions"));
	}
	return Z_Registration_Info_UScriptStruct_OvrApplicationOptions.OuterSingleton;
}
template<> OVRPLATFORM_API UScriptStruct* StaticStruct<FOvrApplicationOptions>()
{
	return FOvrApplicationOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "OvrPlatform|Options|Application" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The Application option contains additional configuration to be passed in to UOvrRequestsBlueprintLibrary::Application_LaunchOtherApp() and\n * UOvrRequestsBlueprintLibrary::Application_InstallAppUpdateAndRelaunch(). It contains 5 fields FOvrApplicationOptions::DeeplinkMessage,\n * FOvrApplicationOptions::DestinationApiName, FOvrApplicationOptions::LobbySessionId, FOvrApplicationOptions::MatchSessionId\n * and FOvrApplicationOptions::RoomId.\n */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Application option contains additional configuration to be passed in to UOvrRequestsBlueprintLibrary::Application_LaunchOtherApp() and\nUOvrRequestsBlueprintLibrary::Application_InstallAppUpdateAndRelaunch(). It contains 5 fields FOvrApplicationOptions::DeeplinkMessage,\nFOvrApplicationOptions::DestinationApiName, FOvrApplicationOptions::LobbySessionId, FOvrApplicationOptions::MatchSessionId\nand FOvrApplicationOptions::RoomId." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeeplinkMessage_MetaData[] = {
		{ "Category", "OvrPlatform|Options|Application|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * A message to be passed to a launched app, which can be retrieved\n     * with field FOvrLaunchDetails::DeeplinkMessage.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A message to be passed to a launched app, which can be retrieved\nwith field FOvrLaunchDetails::DeeplinkMessage." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestinationApiName_MetaData[] = {
		{ "Category", "OvrPlatform|Options|Application|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * If provided, the intended destination to be passed to the launched\n     * app, which can be retrieved with field FOvrLaunchDetails::DestinationApiName.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If provided, the intended destination to be passed to the launched\napp, which can be retrieved with field FOvrLaunchDetails::DestinationApiName." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbySessionId_MetaData[] = {
		{ "Category", "OvrPlatform|Options|Application|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * If provided, the intended lobby where the launched app should take\n     * the user. All users with the same lobby_session_id should end up grouped\n     * together in the launched app, which can be retrieved with field FOvrLaunchDetails::LobbySessionID.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If provided, the intended lobby where the launched app should take\nthe user. All users with the same lobby_session_id should end up grouped\ntogether in the launched app, which can be retrieved with field FOvrLaunchDetails::LobbySessionID." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchSessionId_MetaData[] = {
		{ "Category", "OvrPlatform|Options|Application|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * If provided, the intended instance of the destination that a user\n     * should be launched into, which can be retrieved with field FOvrLaunchDetails::MatchSessionID.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If provided, the intended instance of the destination that a user\nshould be launched into, which can be retrieved with field FOvrLaunchDetails::MatchSessionID." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomId_MetaData[] = {
		{ "Category", "OvrPlatform|Options|Application|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * [Deprecated]If provided, the intended room where the launched app\n     * should take the user (all users heading to the same place should have the\n     * same value). A room_id of 0 is INVALID.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "[Deprecated]If provided, the intended room where the launched app\nshould take the user (all users heading to the same place should have the\nsame value). A room_id of 0 is INVALID." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeeplinkMessage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DestinationApiName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LobbySessionId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MatchSessionId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoomId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOvrApplicationOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::NewProp_DeeplinkMessage = { "DeeplinkMessage", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrApplicationOptions, DeeplinkMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeeplinkMessage_MetaData), NewProp_DeeplinkMessage_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::NewProp_DestinationApiName = { "DestinationApiName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrApplicationOptions, DestinationApiName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestinationApiName_MetaData), NewProp_DestinationApiName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::NewProp_LobbySessionId = { "LobbySessionId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrApplicationOptions, LobbySessionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbySessionId_MetaData), NewProp_LobbySessionId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::NewProp_MatchSessionId = { "MatchSessionId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrApplicationOptions, MatchSessionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchSessionId_MetaData), NewProp_MatchSessionId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::NewProp_RoomId = { "RoomId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrApplicationOptions, RoomId), Z_Construct_UScriptStruct_FOvrId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomId_MetaData), NewProp_RoomId_MetaData) }; // 3472719273
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::NewProp_DeeplinkMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::NewProp_DestinationApiName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::NewProp_LobbySessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::NewProp_MatchSessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::NewProp_RoomId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	&NewStructOps,
	"OvrApplicationOptions",
	Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::PropPointers),
	sizeof(FOvrApplicationOptions),
	alignof(FOvrApplicationOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOvrApplicationOptions()
{
	if (!Z_Registration_Info_UScriptStruct_OvrApplicationOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OvrApplicationOptions.InnerSingleton, Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OvrApplicationOptions.InnerSingleton;
}
// End ScriptStruct FOvrApplicationOptions

// Begin ScriptStruct FOvrAvatarEditorOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OvrAvatarEditorOptions;
class UScriptStruct* FOvrAvatarEditorOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OvrAvatarEditorOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OvrAvatarEditorOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOvrAvatarEditorOptions, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("OvrAvatarEditorOptions"));
	}
	return Z_Registration_Info_UScriptStruct_OvrAvatarEditorOptions.OuterSingleton;
}
template<> OVRPLATFORM_API UScriptStruct* StaticStruct<FOvrAvatarEditorOptions>()
{
	return FOvrAvatarEditorOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOvrAvatarEditorOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "OvrPlatform|Options|AvatarEditor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  The Avatar Editor Option is a feature that allows users to create and customize their avatars.\n * It is launched by the UOvrRequestsBlueprintLibrary::Avatar_LaunchAvatarEditor() request and provides a way for users\n * to specify the source of the request, allowing for more flexibility and customization in the avatar creation process.\n */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Avatar Editor Option is a feature that allows users to create and customize their avatars.\nIt is launched by the UOvrRequestsBlueprintLibrary::Avatar_LaunchAvatarEditor() request and provides a way for users\nto specify the source of the request, allowing for more flexibility and customization in the avatar creation process." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceOverride_MetaData[] = {
		{ "Category", "OvrPlatform|Options|AvatarEditor|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Optional override for where the request is coming from. This field allows you to specify the source of the request\n     * in the launched editor by calling UOvrRequestsBlueprintLibrary::Avatar_LaunchAvatarEditor(), which can be useful in cases where you want to track\n     * or identify the origin of the request.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional override for where the request is coming from. This field allows you to specify the source of the request\nin the launched editor by calling UOvrRequestsBlueprintLibrary::Avatar_LaunchAvatarEditor(), which can be useful in cases where you want to track\nor identify the origin of the request." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOvrAvatarEditorOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOvrAvatarEditorOptions_Statics::NewProp_SourceOverride = { "SourceOverride", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrAvatarEditorOptions, SourceOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceOverride_MetaData), NewProp_SourceOverride_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOvrAvatarEditorOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrAvatarEditorOptions_Statics::NewProp_SourceOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrAvatarEditorOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOvrAvatarEditorOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	&NewStructOps,
	"OvrAvatarEditorOptions",
	Z_Construct_UScriptStruct_FOvrAvatarEditorOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrAvatarEditorOptions_Statics::PropPointers),
	sizeof(FOvrAvatarEditorOptions),
	alignof(FOvrAvatarEditorOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrAvatarEditorOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOvrAvatarEditorOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOvrAvatarEditorOptions()
{
	if (!Z_Registration_Info_UScriptStruct_OvrAvatarEditorOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OvrAvatarEditorOptions.InnerSingleton, Z_Construct_UScriptStruct_FOvrAvatarEditorOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OvrAvatarEditorOptions.InnerSingleton;
}
// End ScriptStruct FOvrAvatarEditorOptions

// Begin ScriptStruct FOvrChallengeOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OvrChallengeOptions;
class UScriptStruct* FOvrChallengeOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OvrChallengeOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OvrChallengeOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOvrChallengeOptions, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("OvrChallengeOptions"));
	}
	return Z_Registration_Info_UScriptStruct_OvrChallengeOptions.OuterSingleton;
}
template<> OVRPLATFORM_API UScriptStruct* StaticStruct<FOvrChallengeOptions>()
{
	return FOvrChallengeOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "OvrPlatform|Options|Challenge" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The Challenge Option is a parameter that can be passed in the UOvrRequestsBlueprintLibrary::Challenges_GetList() method to retrieve\n * a list of challenges that match the specified options. The FOvrChallengeOptions parameter allows you to\n * specify the criteria for the challenges you want to retrieve, such as the viewer filter, the visibility, or the date range.\n */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Challenge Option is a parameter that can be passed in the UOvrRequestsBlueprintLibrary::Challenges_GetList() method to retrieve\na list of challenges that match the specified options. The FOvrChallengeOptions parameter allows you to\nspecify the criteria for the challenges you want to retrieve, such as the viewer filter, the visibility, or the date range." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "OvrPlatform|Options|Challenge|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The description of the challenge is a detailed and informative text that provides a comprehensive overview of the challenge's\n     * objectives, rules, and requirements, which can be retrieved with field FOvrChallenge::Description.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The description of the challenge is a detailed and informative text that provides a comprehensive overview of the challenge's\nobjectives, rules, and requirements, which can be retrieved with field FOvrChallenge::Description." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndDate_MetaData[] = {
		{ "Category", "OvrPlatform|Options|Challenge|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The challenge end date is the timestamp when this challenge ends, which can be retrieved using field FOvrChallenge::EndDate. */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The challenge end date is the timestamp when this challenge ends, which can be retrieved using field FOvrChallenge::EndDate." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncludeActiveChallenges_MetaData[] = {
		{ "Category", "OvrPlatform|Options|Challenge|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * This option indicates whether to include challenges that are currently active in the search results. By default, this is set to true,\n     * meaning that only active challenges will be returned.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This option indicates whether to include challenges that are currently active in the search results. By default, this is set to true,\nmeaning that only active challenges will be returned." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncludeFutureChallenges_MetaData[] = {
		{ "Category", "OvrPlatform|Options|Challenge|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * This option indicates whether to include challenges that have not yet started in the search results. By default, this is set to false,\n     * meaning that only active will be returned.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This option indicates whether to include challenges that have not yet started in the search results. By default, this is set to false,\nmeaning that only active will be returned." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncludePastChallenges_MetaData[] = {
		{ "Category", "OvrPlatform|Options|Challenge|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * This option indicates whether to include challenges that have already ended in the search results. By default, this is set to false,\n     * meaning that only active will be returned.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This option indicates whether to include challenges that have already ended in the search results. By default, this is set to false,\nmeaning that only active will be returned." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardName_MetaData[] = {
		{ "Category", "OvrPlatform|Options|Challenge|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Optional: Only find challenges belonging to this leaderboard. This filter allows you to narrow down the search results to only include challenges\n     * that are associated with a specific leaderboard.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional: Only find challenges belonging to this leaderboard. This filter allows you to narrow down the search results to only include challenges\nthat are associated with a specific leaderboard." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartDate_MetaData[] = {
		{ "Category", "OvrPlatform|Options|Challenge|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The challenge start date is the timestamp when this challenge begins, which can be retrieved using field FOvrChallenge::StartDate. */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The challenge start date is the timestamp when this challenge begins, which can be retrieved using field FOvrChallenge::StartDate." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[] = {
		{ "Category", "OvrPlatform|Options|Challenge|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The title of the challenge is a descriptive label that provides a concise summary of the challenge's purpose and objectives,\n     * which can be retrieved with field FOvrChallenge::Title.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The title of the challenge is a descriptive label that provides a concise summary of the challenge's purpose and objectives,\nwhich can be retrieved with field FOvrChallenge::Title." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewerFilter_MetaData[] = {
		{ "Category", "OvrPlatform|Options|Challenge|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * An enum that specifies what filter to apply to the list of returned challenges.\n     * \n     * Returns all public (EOvrChallengeVisibility::Public) and invite-only (EOvrChallengeVisibility::InviteOnly) FOvrChallenge in which the user is a participant or invitee. Excludes private (EOvrChallengeVisibility::Private) challenges.\n     * \n     * EOvrChallengeViewerFilter::Participating - Returns challenges the user is participating in.\n     * \n     * EOvrChallengeViewerFilter::Invited - Returns challenges the user is invited to.\n     * \n     * EOvrChallengeViewerFilter::ParticipatingOrInvited - Returns challenges the user is either participating in or invited to.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An enum that specifies what filter to apply to the list of returned challenges.\n\nReturns all public (EOvrChallengeVisibility::Public) and invite-only (EOvrChallengeVisibility::InviteOnly) FOvrChallenge in which the user is a participant or invitee. Excludes private (EOvrChallengeVisibility::Private) challenges.\n\nEOvrChallengeViewerFilter::Participating - Returns challenges the user is participating in.\n\nEOvrChallengeViewerFilter::Invited - Returns challenges the user is invited to.\n\nEOvrChallengeViewerFilter::ParticipatingOrInvited - Returns challenges the user is either participating in or invited to." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Visibility_MetaData[] = {
		{ "Category", "OvrPlatform|Options|Challenge|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The challenge visibility setting specifies who can see and participate in this challenge, which be retrieved with field FOvrChallenge::Visibility.\n     * There are three visibility levels: EOvrChallengeVisibility::Public, EOvrChallengeVisibility::InviteOnly and\n     * EOvrChallengeVisibility::Private.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The challenge visibility setting specifies who can see and participate in this challenge, which be retrieved with field FOvrChallenge::Visibility.\nThere are three visibility levels: EOvrChallengeVisibility::Public, EOvrChallengeVisibility::InviteOnly and\nEOvrChallengeVisibility::Private." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndDate;
	static void NewProp_IncludeActiveChallenges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludeActiveChallenges;
	static void NewProp_IncludeFutureChallenges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludeFutureChallenges;
	static void NewProp_IncludePastChallenges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludePastChallenges;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LeaderboardName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartDate;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ViewerFilter_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ViewerFilter;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Visibility_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Visibility;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOvrChallengeOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrChallengeOptions, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_EndDate = { "EndDate", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrChallengeOptions, EndDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndDate_MetaData), NewProp_EndDate_MetaData) };
void Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_IncludeActiveChallenges_SetBit(void* Obj)
{
	((FOvrChallengeOptions*)Obj)->IncludeActiveChallenges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_IncludeActiveChallenges = { "IncludeActiveChallenges", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOvrChallengeOptions), &Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_IncludeActiveChallenges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncludeActiveChallenges_MetaData), NewProp_IncludeActiveChallenges_MetaData) };
void Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_IncludeFutureChallenges_SetBit(void* Obj)
{
	((FOvrChallengeOptions*)Obj)->IncludeFutureChallenges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_IncludeFutureChallenges = { "IncludeFutureChallenges", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOvrChallengeOptions), &Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_IncludeFutureChallenges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncludeFutureChallenges_MetaData), NewProp_IncludeFutureChallenges_MetaData) };
void Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_IncludePastChallenges_SetBit(void* Obj)
{
	((FOvrChallengeOptions*)Obj)->IncludePastChallenges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_IncludePastChallenges = { "IncludePastChallenges", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOvrChallengeOptions), &Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_IncludePastChallenges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncludePastChallenges_MetaData), NewProp_IncludePastChallenges_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrChallengeOptions, LeaderboardName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaderboardName_MetaData), NewProp_LeaderboardName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_StartDate = { "StartDate", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrChallengeOptions, StartDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartDate_MetaData), NewProp_StartDate_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrChallengeOptions, Title), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Title_MetaData), NewProp_Title_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_ViewerFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_ViewerFilter = { "ViewerFilter", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrChallengeOptions, ViewerFilter), Z_Construct_UEnum_OVRPlatform_EOvrChallengeViewerFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewerFilter_MetaData), NewProp_ViewerFilter_MetaData) }; // 1368506461
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_Visibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_Visibility = { "Visibility", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrChallengeOptions, Visibility), Z_Construct_UEnum_OVRPlatform_EOvrChallengeVisibility, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Visibility_MetaData), NewProp_Visibility_MetaData) }; // 392116164
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_EndDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_IncludeActiveChallenges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_IncludeFutureChallenges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_IncludePastChallenges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_LeaderboardName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_StartDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_ViewerFilter_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_ViewerFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_Visibility_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewProp_Visibility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	&NewStructOps,
	"OvrChallengeOptions",
	Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::PropPointers),
	sizeof(FOvrChallengeOptions),
	alignof(FOvrChallengeOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOvrChallengeOptions()
{
	if (!Z_Registration_Info_UScriptStruct_OvrChallengeOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OvrChallengeOptions.InnerSingleton, Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OvrChallengeOptions.InnerSingleton;
}
// End ScriptStruct FOvrChallengeOptions

// Begin ScriptStruct FOvrGroupPresenceOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OvrGroupPresenceOptions;
class UScriptStruct* FOvrGroupPresenceOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OvrGroupPresenceOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OvrGroupPresenceOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOvrGroupPresenceOptions, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("OvrGroupPresenceOptions"));
	}
	return Z_Registration_Info_UScriptStruct_OvrGroupPresenceOptions.OuterSingleton;
}
template<> OVRPLATFORM_API UScriptStruct* StaticStruct<FOvrGroupPresenceOptions>()
{
	return FOvrGroupPresenceOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "OvrPlatform|Options|GroupPresence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The Group Presence Option, to be passed in to UOvrRequestsBlueprintLibrary::GroupPresence_Set(), is a set of fields that allows developers to specify the presence of a user in a group/squad/party.\n * It provides a way for developers to create a more immersive and social experience for their users by allowing them to join and interact with other users.\n */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Group Presence Option, to be passed in to UOvrRequestsBlueprintLibrary::GroupPresence_Set(), is a set of fields that allows developers to specify the presence of a user in a group/squad/party.\nIt provides a way for developers to create a more immersive and social experience for their users by allowing them to join and interact with other users." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeeplinkMessageOverride_MetaData[] = {
		{ "Category", "OvrPlatform|Options|GroupPresence|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Use FOvrGroupPresenceOptions::LobbySessionId or FOvrGroupPresenceOptions::MatchSessionId to specify the session. Use the deeplink message override for\n     * any additional data in whatever format you wish to aid in bringing users together. If not specified, the deeplink_message for the user will default to the one on the\n     * destination.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use FOvrGroupPresenceOptions::LobbySessionId or FOvrGroupPresenceOptions::MatchSessionId to specify the session. Use the deeplink message override for\nany additional data in whatever format you wish to aid in bringing users together. If not specified, the deeplink_message for the user will default to the one on the\ndestination." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestinationApiName_MetaData[] = {
		{ "Category", "OvrPlatform|Options|GroupPresence|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This the unique API Name that refers to an in-app destination */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This the unique API Name that refers to an in-app destination" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsJoinable_MetaData[] = {
		{ "Category", "OvrPlatform|Options|GroupPresence|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Set whether or not the person is shown as joinable or not to others.  A user that is joinable can invite others to join them. Set this to false if other\n     * users would not be able to join this user. For example: the current session is full, or only the host can invite others and the current user is not the host.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set whether or not the person is shown as joinable or not to others.  A user that is joinable can invite others to join them. Set this to false if other\nusers would not be able to join this user. For example: the current session is full, or only the host can invite others and the current user is not the host." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbySessionId_MetaData[] = {
		{ "Category", "OvrPlatform|Options|GroupPresence|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * This is a session that represents a closer group/squad/party of users. It is expected that all users with the same lobby session id can see or\n     * hear each other. Users with the same lobby session id in their group presence will show up in the roster and will show up as \"Recently Played With\"\n     * for future invites if they aren't already Oculus friends. This must be set in addition to is_joinable being true for a user to use invites.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a session that represents a closer group/squad/party of users. It is expected that all users with the same lobby session id can see or\nhear each other. Users with the same lobby session id in their group presence will show up in the roster and will show up as \"Recently Played With\"\nfor future invites if they aren't already Oculus friends. This must be set in addition to is_joinable being true for a user to use invites." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchSessionId_MetaData[] = {
		{ "Category", "OvrPlatform|Options|GroupPresence|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * This is a session that represents all the users that are playing a specific instance of a map, game mode, round, etc. This\n     * can include users from multiple different lobbies that joined together and the users may or may not remain together after the match is over.\n     * Users with the same match session id in their group presence will not show up in the Roster, but will show up as \"Recently Played with\" for future invites.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a session that represents all the users that are playing a specific instance of a map, game mode, round, etc. This\ncan include users from multiple different lobbies that joined together and the users may or may not remain together after the match is over.\nUsers with the same match session id in their group presence will not show up in the Roster, but will show up as \"Recently Played with\" for future invites." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeeplinkMessageOverride;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DestinationApiName;
	static void NewProp_IsJoinable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsJoinable;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LobbySessionId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MatchSessionId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOvrGroupPresenceOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::NewProp_DeeplinkMessageOverride = { "DeeplinkMessageOverride", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrGroupPresenceOptions, DeeplinkMessageOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeeplinkMessageOverride_MetaData), NewProp_DeeplinkMessageOverride_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::NewProp_DestinationApiName = { "DestinationApiName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrGroupPresenceOptions, DestinationApiName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestinationApiName_MetaData), NewProp_DestinationApiName_MetaData) };
void Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::NewProp_IsJoinable_SetBit(void* Obj)
{
	((FOvrGroupPresenceOptions*)Obj)->IsJoinable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::NewProp_IsJoinable = { "IsJoinable", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOvrGroupPresenceOptions), &Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::NewProp_IsJoinable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsJoinable_MetaData), NewProp_IsJoinable_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::NewProp_LobbySessionId = { "LobbySessionId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrGroupPresenceOptions, LobbySessionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbySessionId_MetaData), NewProp_LobbySessionId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::NewProp_MatchSessionId = { "MatchSessionId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrGroupPresenceOptions, MatchSessionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchSessionId_MetaData), NewProp_MatchSessionId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::NewProp_DeeplinkMessageOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::NewProp_DestinationApiName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::NewProp_IsJoinable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::NewProp_LobbySessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::NewProp_MatchSessionId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	&NewStructOps,
	"OvrGroupPresenceOptions",
	Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::PropPointers),
	sizeof(FOvrGroupPresenceOptions),
	alignof(FOvrGroupPresenceOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOvrGroupPresenceOptions()
{
	if (!Z_Registration_Info_UScriptStruct_OvrGroupPresenceOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OvrGroupPresenceOptions.InnerSingleton, Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OvrGroupPresenceOptions.InnerSingleton;
}
// End ScriptStruct FOvrGroupPresenceOptions

// Begin ScriptStruct FOvrInviteOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OvrInviteOptions;
class UScriptStruct* FOvrInviteOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OvrInviteOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OvrInviteOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOvrInviteOptions, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("OvrInviteOptions"));
	}
	return Z_Registration_Info_UScriptStruct_OvrInviteOptions.OuterSingleton;
}
template<> OVRPLATFORM_API UScriptStruct* StaticStruct<FOvrInviteOptions>()
{
	return FOvrInviteOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOvrInviteOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "OvrPlatform|Options|Invite" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The Invite Option, to be passed in to UOvrRequestsBlueprintLibrary::GroupPresence_GetInvitableUsers() and UOvrRequestsBlueprintLibrary::GroupPresence_LaunchInvitePanel(),\n * is a field that allows developers to specify a list of suggested users to be added to the invitable users list, making it easier for users to\n * connect with others and create a more social experience.\n */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Invite Option, to be passed in to UOvrRequestsBlueprintLibrary::GroupPresence_GetInvitableUsers() and UOvrRequestsBlueprintLibrary::GroupPresence_LaunchInvitePanel(),\nis a field that allows developers to specify a list of suggested users to be added to the invitable users list, making it easier for users to\nconnect with others and create a more social experience." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuggestedUsers_MetaData[] = {
		{ "Category", "OvrPlatform|Options|Invite|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Passing in these users will add them to the invitable users list. From the UOvrRequestsBlueprintLibrary::GroupPresence_LaunchInvitePanel(), the user can open the invite list,\n     * where the suggested users will be added.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Passing in these users will add them to the invitable users list. From the UOvrRequestsBlueprintLibrary::GroupPresence_LaunchInvitePanel(), the user can open the invite list,\nwhere the suggested users will be added." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SuggestedUsers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SuggestedUsers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOvrInviteOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOvrInviteOptions_Statics::NewProp_SuggestedUsers_Inner = { "SuggestedUsers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOvrId, METADATA_PARAMS(0, nullptr) }; // 3472719273
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOvrInviteOptions_Statics::NewProp_SuggestedUsers = { "SuggestedUsers", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrInviteOptions, SuggestedUsers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuggestedUsers_MetaData), NewProp_SuggestedUsers_MetaData) }; // 3472719273
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOvrInviteOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrInviteOptions_Statics::NewProp_SuggestedUsers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrInviteOptions_Statics::NewProp_SuggestedUsers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrInviteOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOvrInviteOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	&NewStructOps,
	"OvrInviteOptions",
	Z_Construct_UScriptStruct_FOvrInviteOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrInviteOptions_Statics::PropPointers),
	sizeof(FOvrInviteOptions),
	alignof(FOvrInviteOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrInviteOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOvrInviteOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOvrInviteOptions()
{
	if (!Z_Registration_Info_UScriptStruct_OvrInviteOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OvrInviteOptions.InnerSingleton, Z_Construct_UScriptStruct_FOvrInviteOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OvrInviteOptions.InnerSingleton;
}
// End ScriptStruct FOvrInviteOptions

// Begin ScriptStruct FOvrMultiplayerErrorOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OvrMultiplayerErrorOptions;
class UScriptStruct* FOvrMultiplayerErrorOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OvrMultiplayerErrorOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OvrMultiplayerErrorOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOvrMultiplayerErrorOptions, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("OvrMultiplayerErrorOptions"));
	}
	return Z_Registration_Info_UScriptStruct_OvrMultiplayerErrorOptions.OuterSingleton;
}
template<> OVRPLATFORM_API UScriptStruct* StaticStruct<FOvrMultiplayerErrorOptions>()
{
	return FOvrMultiplayerErrorOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOvrMultiplayerErrorOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "OvrPlatform|Options|MultiplayerError" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The multiplayer error option is a feature that allows developers to display general error messages to FOvrUser in invokable error dialogs.\n * This option is particularly useful in multiplayer games or applications where errors can occur due to various reasons such as network connectivity\n * issues, server downtime, or other technical problems.\n * Read more about error dialogues in our [docs](https://developer.oculus.com/documentation/unreal/ps-error-dialogs/).\n */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The multiplayer error option is a feature that allows developers to display general error messages to FOvrUser in invokable error dialogs.\nThis option is particularly useful in multiplayer games or applications where errors can occur due to various reasons such as network connectivity\nissues, server downtime, or other technical problems.\nRead more about error dialogues in our [docs](https://developer.oculus.com/documentation/unreal/ps-error-dialogs/)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorKey_MetaData[] = {
		{ "Category", "OvrPlatform|Options|MultiplayerError|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Key associated with the predefined error message to be shown to users.\n     * \n     * Key List:\n     * \n     * - EOvrMultiplayerErrorErrorKey::DestinationUnavailable\n     * \n     * - EOvrMultiplayerErrorErrorKey::DlcRequired\n     * \n     * - EOvrMultiplayerErrorErrorKey::General\n     * \n     * - EOvrMultiplayerErrorErrorKey::GroupFull\n     * \n     * - EOvrMultiplayerErrorErrorKey::InviterNotJoinable\n     * \n     * - EOvrMultiplayerErrorErrorKey::LevelNotHighEnough\n     * \n     * - EOvrMultiplayerErrorErrorKey::LevelNotUnlocked\n     * \n     * - EOvrMultiplayerErrorErrorKey::NetworkTimeout\n     * \n     * - EOvrMultiplayerErrorErrorKey::NoLongerAvailable\n     * \n     * - EOvrMultiplayerErrorErrorKey::UpdateRequired\n     * \n     * - EOvrMultiplayerErrorErrorKey::TutorialRequired\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Key associated with the predefined error message to be shown to users.\n\nKey List:\n\n- EOvrMultiplayerErrorErrorKey::DestinationUnavailable\n\n- EOvrMultiplayerErrorErrorKey::DlcRequired\n\n- EOvrMultiplayerErrorErrorKey::General\n\n- EOvrMultiplayerErrorErrorKey::GroupFull\n\n- EOvrMultiplayerErrorErrorKey::InviterNotJoinable\n\n- EOvrMultiplayerErrorErrorKey::LevelNotHighEnough\n\n- EOvrMultiplayerErrorErrorKey::LevelNotUnlocked\n\n- EOvrMultiplayerErrorErrorKey::NetworkTimeout\n\n- EOvrMultiplayerErrorErrorKey::NoLongerAvailable\n\n- EOvrMultiplayerErrorErrorKey::UpdateRequired\n\n- EOvrMultiplayerErrorErrorKey::TutorialRequired" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ErrorKey_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ErrorKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOvrMultiplayerErrorOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOvrMultiplayerErrorOptions_Statics::NewProp_ErrorKey_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOvrMultiplayerErrorOptions_Statics::NewProp_ErrorKey = { "ErrorKey", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrMultiplayerErrorOptions, ErrorKey), Z_Construct_UEnum_OVRPlatform_EOvrMultiplayerErrorErrorKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorKey_MetaData), NewProp_ErrorKey_MetaData) }; // 613917319
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOvrMultiplayerErrorOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrMultiplayerErrorOptions_Statics::NewProp_ErrorKey_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrMultiplayerErrorOptions_Statics::NewProp_ErrorKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrMultiplayerErrorOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOvrMultiplayerErrorOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	&NewStructOps,
	"OvrMultiplayerErrorOptions",
	Z_Construct_UScriptStruct_FOvrMultiplayerErrorOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrMultiplayerErrorOptions_Statics::PropPointers),
	sizeof(FOvrMultiplayerErrorOptions),
	alignof(FOvrMultiplayerErrorOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrMultiplayerErrorOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOvrMultiplayerErrorOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOvrMultiplayerErrorOptions()
{
	if (!Z_Registration_Info_UScriptStruct_OvrMultiplayerErrorOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OvrMultiplayerErrorOptions.InnerSingleton, Z_Construct_UScriptStruct_FOvrMultiplayerErrorOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OvrMultiplayerErrorOptions.InnerSingleton;
}
// End ScriptStruct FOvrMultiplayerErrorOptions

// Begin ScriptStruct FOvrNetSyncOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OvrNetSyncOptions;
class UScriptStruct* FOvrNetSyncOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OvrNetSyncOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OvrNetSyncOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOvrNetSyncOptions, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("OvrNetSyncOptions"));
	}
	return Z_Registration_Info_UScriptStruct_OvrNetSyncOptions.OuterSingleton;
}
template<> OVRPLATFORM_API UScriptStruct* StaticStruct<FOvrNetSyncOptions>()
{
	return FOvrNetSyncOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "OvrPlatform|Options|NetSync" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The NetSyncOption configures network connections, focusing on VoIP data streams.\n * It includes 'zone_id' for unique identifiers within the application, 'voip_stream_default' to set default VoIP stream modes , and 'voip_group' to assign a VoIP group upon connection.\n * It can be set when create a new connection and retrieved using FOvrNetSyncConnection.\n */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The NetSyncOption configures network connections, focusing on VoIP data streams.\nIt includes 'zone_id' for unique identifiers within the application, 'voip_stream_default' to set default VoIP stream modes , and 'voip_group' to assign a VoIP group upon connection.\nIt can be set when create a new connection and retrieved using FOvrNetSyncConnection." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoipGroup_MetaData[] = {
		{ "Category", "OvrPlatform|Options|NetSync|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * If provided, immediately set the voip_group to this value upon\n     * connection and can be retrieved using field FOvrNetSyncSession::VoipGroup\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If provided, immediately set the voip_group to this value upon\nconnection and can be retrieved using field FOvrNetSyncSession::VoipGroup" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoipStreamDefault_MetaData[] = {
		{ "Category", "OvrPlatform|Options|NetSync|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * When a new remote voip user connects, default that connection to this\n     * stream type by default. There are three modes:\n     * EOvrNetSyncVoipStreamMode::Unknown, EOvrNetSyncVoipStreamMode::Ambisonic, EOvrNetSyncVoipStreamMode::Mono.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When a new remote voip user connects, default that connection to this\nstream type by default. There are three modes:\nEOvrNetSyncVoipStreamMode::Unknown, EOvrNetSyncVoipStreamMode::Ambisonic, EOvrNetSyncVoipStreamMode::Mono." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoneId_MetaData[] = {
		{ "Category", "OvrPlatform|Options|NetSync|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A `string` represents the unique identifier within the current application grouping.  */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A `string` represents the unique identifier within the current application grouping." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_VoipGroup;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VoipStreamDefault_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VoipStreamDefault;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ZoneId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOvrNetSyncOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::NewProp_VoipGroup = { "VoipGroup", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrNetSyncOptions, VoipGroup), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoipGroup_MetaData), NewProp_VoipGroup_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::NewProp_VoipStreamDefault_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::NewProp_VoipStreamDefault = { "VoipStreamDefault", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrNetSyncOptions, VoipStreamDefault), Z_Construct_UEnum_OVRPlatform_EOvrNetSyncVoipStreamMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoipStreamDefault_MetaData), NewProp_VoipStreamDefault_MetaData) }; // 3947542100
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::NewProp_ZoneId = { "ZoneId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrNetSyncOptions, ZoneId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoneId_MetaData), NewProp_ZoneId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::NewProp_VoipGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::NewProp_VoipStreamDefault_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::NewProp_VoipStreamDefault,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::NewProp_ZoneId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	&NewStructOps,
	"OvrNetSyncOptions",
	Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::PropPointers),
	sizeof(FOvrNetSyncOptions),
	alignof(FOvrNetSyncOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOvrNetSyncOptions()
{
	if (!Z_Registration_Info_UScriptStruct_OvrNetSyncOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OvrNetSyncOptions.InnerSingleton, Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OvrNetSyncOptions.InnerSingleton;
}
// End ScriptStruct FOvrNetSyncOptions

// Begin ScriptStruct FOvrRichPresenceOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OvrRichPresenceOptions;
class UScriptStruct* FOvrRichPresenceOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OvrRichPresenceOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OvrRichPresenceOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOvrRichPresenceOptions, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("OvrRichPresenceOptions"));
	}
	return Z_Registration_Info_UScriptStruct_OvrRichPresenceOptions.OuterSingleton;
}
template<> OVRPLATFORM_API UScriptStruct* StaticStruct<FOvrRichPresenceOptions>()
{
	return FOvrRichPresenceOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "OvrPlatform|Options|RichPresence" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApiName_MetaData[] = {
		{ "Category", "OvrPlatform|Options|RichPresence|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \\deprecated Use FOvrGroupPresenceOptions::DestinationApiName */" },
#endif
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use FOvrGroupPresenceOptions::DestinationApiName" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\\deprecated Use FOvrGroupPresenceOptions::DestinationApiName" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeeplinkMessageOverride_MetaData[] = {
		{ "Category", "OvrPlatform|Options|RichPresence|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \\deprecated Use FOvrGroupPresenceOptions::DeeplinkMessageOverride  */" },
#endif
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use FOvrGroupPresenceOptions::DeeplinkMessageOverride" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\\deprecated Use FOvrGroupPresenceOptions::DeeplinkMessageOverride" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsJoinable_MetaData[] = {
		{ "Category", "OvrPlatform|Options|RichPresence|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \\deprecated Use FOvrGroupPresenceOptions::IsJoinable */" },
#endif
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use FOvrGroupPresenceOptions::IsJoinable" },
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\\deprecated Use FOvrGroupPresenceOptions::IsJoinable" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ApiName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeeplinkMessageOverride;
	static void NewProp_IsJoinable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsJoinable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOvrRichPresenceOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::NewProp_ApiName = { "ApiName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrRichPresenceOptions, ApiName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApiName_MetaData), NewProp_ApiName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::NewProp_DeeplinkMessageOverride = { "DeeplinkMessageOverride", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrRichPresenceOptions, DeeplinkMessageOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeeplinkMessageOverride_MetaData), NewProp_DeeplinkMessageOverride_MetaData) };
void Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::NewProp_IsJoinable_SetBit(void* Obj)
{
	((FOvrRichPresenceOptions*)Obj)->IsJoinable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::NewProp_IsJoinable = { "IsJoinable", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOvrRichPresenceOptions), &Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::NewProp_IsJoinable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsJoinable_MetaData), NewProp_IsJoinable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::NewProp_ApiName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::NewProp_DeeplinkMessageOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::NewProp_IsJoinable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	&NewStructOps,
	"OvrRichPresenceOptions",
	Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::PropPointers),
	sizeof(FOvrRichPresenceOptions),
	alignof(FOvrRichPresenceOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOvrRichPresenceOptions()
{
	if (!Z_Registration_Info_UScriptStruct_OvrRichPresenceOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OvrRichPresenceOptions.InnerSingleton, Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OvrRichPresenceOptions.InnerSingleton;
}
// End ScriptStruct FOvrRichPresenceOptions

// Begin ScriptStruct FOvrRosterOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OvrRosterOptions;
class UScriptStruct* FOvrRosterOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OvrRosterOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OvrRosterOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOvrRosterOptions, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("OvrRosterOptions"));
	}
	return Z_Registration_Info_UScriptStruct_OvrRosterOptions.OuterSingleton;
}
template<> OVRPLATFORM_API UScriptStruct* StaticStruct<FOvrRosterOptions>()
{
	return FOvrRosterOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOvrRosterOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "OvrPlatform|Options|Roster" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The roster option, to be passed into UOvrRequestsBlueprintLibrary::GroupPresence_LaunchRosterPanel() which is used to launch the panel displaying the current users in the roster/party. You can read more about rosters in our [docs](https://developer.oculus.com/documentation/unreal/ps-roster/). */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The roster option, to be passed into UOvrRequestsBlueprintLibrary::GroupPresence_LaunchRosterPanel() which is used to launch the panel displaying the current users in the roster/party. You can read more about rosters in our [docs](https://developer.oculus.com/documentation/unreal/ps-roster/)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuggestedUsers_MetaData[] = {
		{ "Category", "OvrPlatform|Options|Roster|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Passing in these users will add them to the invitable users list. From the UOvrRequestsBlueprintLibrary::GroupPresence_LaunchRosterPanel(), the FOvrUser can open the invite list,\n     * where the suggested users will be added.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Passing in these users will add them to the invitable users list. From the UOvrRequestsBlueprintLibrary::GroupPresence_LaunchRosterPanel(), the FOvrUser can open the invite list,\nwhere the suggested users will be added." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SuggestedUsers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SuggestedUsers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOvrRosterOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOvrRosterOptions_Statics::NewProp_SuggestedUsers_Inner = { "SuggestedUsers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOvrId, METADATA_PARAMS(0, nullptr) }; // 3472719273
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOvrRosterOptions_Statics::NewProp_SuggestedUsers = { "SuggestedUsers", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrRosterOptions, SuggestedUsers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuggestedUsers_MetaData), NewProp_SuggestedUsers_MetaData) }; // 3472719273
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOvrRosterOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrRosterOptions_Statics::NewProp_SuggestedUsers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrRosterOptions_Statics::NewProp_SuggestedUsers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrRosterOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOvrRosterOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	&NewStructOps,
	"OvrRosterOptions",
	Z_Construct_UScriptStruct_FOvrRosterOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrRosterOptions_Statics::PropPointers),
	sizeof(FOvrRosterOptions),
	alignof(FOvrRosterOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrRosterOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOvrRosterOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOvrRosterOptions()
{
	if (!Z_Registration_Info_UScriptStruct_OvrRosterOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OvrRosterOptions.InnerSingleton, Z_Construct_UScriptStruct_FOvrRosterOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OvrRosterOptions.InnerSingleton;
}
// End ScriptStruct FOvrRosterOptions

// Begin ScriptStruct FOvrUserOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OvrUserOptions;
class UScriptStruct* FOvrUserOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OvrUserOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OvrUserOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOvrUserOptions, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("OvrUserOptions"));
	}
	return Z_Registration_Info_UScriptStruct_OvrUserOptions.OuterSingleton;
}
template<> OVRPLATFORM_API UScriptStruct* StaticStruct<FOvrUserOptions>()
{
	return FOvrUserOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOvrUserOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "OvrPlatform|Options|User" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The user_options configuration is used to specify additional settings for the FOvrUser.\n * It allows you to customize the response by specifying the time window,\n * maximum number of users, and service providers for which linked accounts should be retrieved.\n */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The user_options configuration is used to specify additional settings for the FOvrUser.\nIt allows you to customize the response by specifying the time window,\nmaximum number of users, and service providers for which linked accounts should be retrieved." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxUsers_MetaData[] = {
		{ "Category", "OvrPlatform|Options|User|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This field specifies the maximum number of FOvrUser that should be returned in the response.  */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This field specifies the maximum number of FOvrUser that should be returned in the response." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServiceProviders_MetaData[] = {
		{ "Category", "OvrPlatform|Options|User|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** It's an array of #EOvrServiceProvider objects that specifies the service providers for which linked accounts should be retrieved. */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "It's an array of #EOvrServiceProvider objects that specifies the service providers for which linked accounts should be retrieved." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeWindow_MetaData[] = {
		{ "Category", "OvrPlatform|Options|User|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This field specifies the time window in seconds for which the linked accounts should be retrieved. */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This field specifies the time window in seconds for which the linked accounts should be retrieved." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxUsers;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ServiceProviders_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ServiceProviders_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ServiceProviders;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TimeWindow_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeWindow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOvrUserOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOvrUserOptions_Statics::NewProp_MaxUsers = { "MaxUsers", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrUserOptions, MaxUsers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxUsers_MetaData), NewProp_MaxUsers_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOvrUserOptions_Statics::NewProp_ServiceProviders_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOvrUserOptions_Statics::NewProp_ServiceProviders_Inner = { "ServiceProviders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OVRPlatform_EOvrServiceProvider, METADATA_PARAMS(0, nullptr) }; // 65093178
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOvrUserOptions_Statics::NewProp_ServiceProviders = { "ServiceProviders", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrUserOptions, ServiceProviders), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServiceProviders_MetaData), NewProp_ServiceProviders_MetaData) }; // 65093178
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOvrUserOptions_Statics::NewProp_TimeWindow_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOvrUserOptions_Statics::NewProp_TimeWindow = { "TimeWindow", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrUserOptions, TimeWindow), Z_Construct_UEnum_OVRPlatform_EOvrTimeWindow, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeWindow_MetaData), NewProp_TimeWindow_MetaData) }; // 2950352369
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOvrUserOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrUserOptions_Statics::NewProp_MaxUsers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrUserOptions_Statics::NewProp_ServiceProviders_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrUserOptions_Statics::NewProp_ServiceProviders_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrUserOptions_Statics::NewProp_ServiceProviders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrUserOptions_Statics::NewProp_TimeWindow_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrUserOptions_Statics::NewProp_TimeWindow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrUserOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOvrUserOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	&NewStructOps,
	"OvrUserOptions",
	Z_Construct_UScriptStruct_FOvrUserOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrUserOptions_Statics::PropPointers),
	sizeof(FOvrUserOptions),
	alignof(FOvrUserOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrUserOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOvrUserOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOvrUserOptions()
{
	if (!Z_Registration_Info_UScriptStruct_OvrUserOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OvrUserOptions.InnerSingleton, Z_Construct_UScriptStruct_FOvrUserOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OvrUserOptions.InnerSingleton;
}
// End ScriptStruct FOvrUserOptions

// Begin ScriptStruct FOvrVoipOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OvrVoipOptions;
class UScriptStruct* FOvrVoipOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OvrVoipOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OvrVoipOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOvrVoipOptions, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("OvrVoipOptions"));
	}
	return Z_Registration_Info_UScriptStruct_OvrVoipOptions.OuterSingleton;
}
template<> OVRPLATFORM_API UScriptStruct* StaticStruct<FOvrVoipOptions>()
{
	return FOvrVoipOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOvrVoipOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "OvrPlatform|Options|Voip" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The voip_options configuration is used to specify additional settings for the VoIP transmission for a FOvrUser.\n * It consists of two primary options which include using DTX for transmission and setting a maxmimum bitrate for the network connection.\n * You can read more about VoIP [here](https://developer.oculus.com/documentation/unity/ps-parties/#voip-options).\n */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The voip_options configuration is used to specify additional settings for the VoIP transmission for a FOvrUser.\nIt consists of two primary options which include using DTX for transmission and setting a maxmimum bitrate for the network connection.\nYou can read more about VoIP [here](https://developer.oculus.com/documentation/unity/ps-parties/#voip-options)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BitrateForNewConnections_MetaData[] = {
		{ "Category", "OvrPlatform|Options|Voip|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Sets the maximum average bitrate the audio codec should use. Higher bitrates\n     * will increase audio quality at the expense of increased network usage. Use a lower\n     * bitrate if you think the quality is good but the network usage is too much. Use a\n     * higher bitrate if you think the quality is bad and you can afford to have a large\n     * streaming bitrate.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the maximum average bitrate the audio codec should use. Higher bitrates\nwill increase audio quality at the expense of increased network usage. Use a lower\nbitrate if you think the quality is good but the network usage is too much. Use a\nhigher bitrate if you think the quality is bad and you can afford to have a large\nstreaming bitrate." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreateNewConnectionUseDtx_MetaData[] = {
		{ "Category", "OvrPlatform|Options|Voip|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Set the opus codec to use discontinous transmission (DTX). DTX only transmits\n     * data when a person is speaking. Setting this to EOvrVoipDtxState::Enabled takes advantage of the fact\n     * that in a two-way converstation each individual speaks for less than half the time.\n     * Enabling DTX will conserve battery power and reduce transmission rate when a pause\n     * in the voice chat is detected.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformOptions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the opus codec to use discontinous transmission (DTX). DTX only transmits\ndata when a person is speaking. Setting this to EOvrVoipDtxState::Enabled takes advantage of the fact\nthat in a two-way converstation each individual speaks for less than half the time.\nEnabling DTX will conserve battery power and reduce transmission rate when a pause\nin the voice chat is detected." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_BitrateForNewConnections_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BitrateForNewConnections;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CreateNewConnectionUseDtx_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CreateNewConnectionUseDtx;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOvrVoipOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOvrVoipOptions_Statics::NewProp_BitrateForNewConnections_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOvrVoipOptions_Statics::NewProp_BitrateForNewConnections = { "BitrateForNewConnections", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrVoipOptions, BitrateForNewConnections), Z_Construct_UEnum_OVRPlatform_EOvrVoipBitrate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BitrateForNewConnections_MetaData), NewProp_BitrateForNewConnections_MetaData) }; // 51185622
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOvrVoipOptions_Statics::NewProp_CreateNewConnectionUseDtx_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOvrVoipOptions_Statics::NewProp_CreateNewConnectionUseDtx = { "CreateNewConnectionUseDtx", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrVoipOptions, CreateNewConnectionUseDtx), Z_Construct_UEnum_OVRPlatform_EOvrVoipDtxState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreateNewConnectionUseDtx_MetaData), NewProp_CreateNewConnectionUseDtx_MetaData) }; // 2850649278
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOvrVoipOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrVoipOptions_Statics::NewProp_BitrateForNewConnections_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrVoipOptions_Statics::NewProp_BitrateForNewConnections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrVoipOptions_Statics::NewProp_CreateNewConnectionUseDtx_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrVoipOptions_Statics::NewProp_CreateNewConnectionUseDtx,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrVoipOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOvrVoipOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	&NewStructOps,
	"OvrVoipOptions",
	Z_Construct_UScriptStruct_FOvrVoipOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrVoipOptions_Statics::PropPointers),
	sizeof(FOvrVoipOptions),
	alignof(FOvrVoipOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrVoipOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOvrVoipOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOvrVoipOptions()
{
	if (!Z_Registration_Info_UScriptStruct_OvrVoipOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OvrVoipOptions.InnerSingleton, Z_Construct_UScriptStruct_FOvrVoipOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OvrVoipOptions.InnerSingleton;
}
// End ScriptStruct FOvrVoipOptions

// Begin Registration
struct Z_CompiledInDeferFile_FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformOptions_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOvrAbuseReportOptions::StaticStruct, Z_Construct_UScriptStruct_FOvrAbuseReportOptions_Statics::NewStructOps, TEXT("OvrAbuseReportOptions"), &Z_Registration_Info_UScriptStruct_OvrAbuseReportOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOvrAbuseReportOptions), 1642175849U) },
		{ FOvrAdvancedAbuseReportOptions::StaticStruct, Z_Construct_UScriptStruct_FOvrAdvancedAbuseReportOptions_Statics::NewStructOps, TEXT("OvrAdvancedAbuseReportOptions"), &Z_Registration_Info_UScriptStruct_OvrAdvancedAbuseReportOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOvrAdvancedAbuseReportOptions), 3631543876U) },
		{ FOvrApplicationOptions::StaticStruct, Z_Construct_UScriptStruct_FOvrApplicationOptions_Statics::NewStructOps, TEXT("OvrApplicationOptions"), &Z_Registration_Info_UScriptStruct_OvrApplicationOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOvrApplicationOptions), 212567281U) },
		{ FOvrAvatarEditorOptions::StaticStruct, Z_Construct_UScriptStruct_FOvrAvatarEditorOptions_Statics::NewStructOps, TEXT("OvrAvatarEditorOptions"), &Z_Registration_Info_UScriptStruct_OvrAvatarEditorOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOvrAvatarEditorOptions), 1013856721U) },
		{ FOvrChallengeOptions::StaticStruct, Z_Construct_UScriptStruct_FOvrChallengeOptions_Statics::NewStructOps, TEXT("OvrChallengeOptions"), &Z_Registration_Info_UScriptStruct_OvrChallengeOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOvrChallengeOptions), 2537014370U) },
		{ FOvrGroupPresenceOptions::StaticStruct, Z_Construct_UScriptStruct_FOvrGroupPresenceOptions_Statics::NewStructOps, TEXT("OvrGroupPresenceOptions"), &Z_Registration_Info_UScriptStruct_OvrGroupPresenceOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOvrGroupPresenceOptions), 3131674535U) },
		{ FOvrInviteOptions::StaticStruct, Z_Construct_UScriptStruct_FOvrInviteOptions_Statics::NewStructOps, TEXT("OvrInviteOptions"), &Z_Registration_Info_UScriptStruct_OvrInviteOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOvrInviteOptions), 1041899074U) },
		{ FOvrMultiplayerErrorOptions::StaticStruct, Z_Construct_UScriptStruct_FOvrMultiplayerErrorOptions_Statics::NewStructOps, TEXT("OvrMultiplayerErrorOptions"), &Z_Registration_Info_UScriptStruct_OvrMultiplayerErrorOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOvrMultiplayerErrorOptions), 1199652810U) },
		{ FOvrNetSyncOptions::StaticStruct, Z_Construct_UScriptStruct_FOvrNetSyncOptions_Statics::NewStructOps, TEXT("OvrNetSyncOptions"), &Z_Registration_Info_UScriptStruct_OvrNetSyncOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOvrNetSyncOptions), 4291618875U) },
		{ FOvrRichPresenceOptions::StaticStruct, Z_Construct_UScriptStruct_FOvrRichPresenceOptions_Statics::NewStructOps, TEXT("OvrRichPresenceOptions"), &Z_Registration_Info_UScriptStruct_OvrRichPresenceOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOvrRichPresenceOptions), 2962796999U) },
		{ FOvrRosterOptions::StaticStruct, Z_Construct_UScriptStruct_FOvrRosterOptions_Statics::NewStructOps, TEXT("OvrRosterOptions"), &Z_Registration_Info_UScriptStruct_OvrRosterOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOvrRosterOptions), 2259277142U) },
		{ FOvrUserOptions::StaticStruct, Z_Construct_UScriptStruct_FOvrUserOptions_Statics::NewStructOps, TEXT("OvrUserOptions"), &Z_Registration_Info_UScriptStruct_OvrUserOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOvrUserOptions), 3743573410U) },
		{ FOvrVoipOptions::StaticStruct, Z_Construct_UScriptStruct_FOvrVoipOptions_Statics::NewStructOps, TEXT("OvrVoipOptions"), &Z_Registration_Info_UScriptStruct_OvrVoipOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOvrVoipOptions), 3716269658U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformOptions_h_2400416027(TEXT("/Script/OVRPlatform"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformOptions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformOptions_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
