// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OVRPlatform/Public/OVRPlatformPageRequests.h"
#include "OVRPlatform/Public/OVRPlatformModels.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOVRPlatformPageRequests() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
OVRPLATFORM_API UClass* Z_Construct_UClass_UOvrPageRequestsBlueprintLibrary();
OVRPLATFORM_API UClass* Z_Construct_UClass_UOvrPageRequestsBlueprintLibrary_NoRegister();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrBidirectionalArrayIteratorInputPins();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrForwardArrayIteratorInputPins();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrPageRequestOutputPins();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrAchievementDefinition();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrAchievementDefinitionPages();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrAchievementProgress();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrAchievementProgressPages();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrApplicationInvite();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrApplicationInvitePages();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrBlockedUser();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrBlockedUserPages();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrChallenge();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrChallengeEntry();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrChallengeEntryPages();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrChallengePages();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrCowatchViewer();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrCowatchViewerPages();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrDestination();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrDestinationPages();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrLeaderboard();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrLeaderboardEntry();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrLeaderboardEntryPages();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrLeaderboardPages();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrProduct();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrProductPages();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrPurchase();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrPurchasePages();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrUser();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrUserCapability();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrUserCapabilityPages();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrUserPages();
UPackage* Z_Construct_UPackage__Script_OVRPlatform();
// End Cross Module References

// Begin Enum EOvrForwardArrayIteratorInputPins
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrForwardArrayIteratorInputPins;
static UEnum* EOvrForwardArrayIteratorInputPins_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrForwardArrayIteratorInputPins.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrForwardArrayIteratorInputPins.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrForwardArrayIteratorInputPins, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrForwardArrayIteratorInputPins"));
	}
	return Z_Registration_Info_UEnum_EOvrForwardArrayIteratorInputPins.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrForwardArrayIteratorInputPins>()
{
	return EOvrForwardArrayIteratorInputPins_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrForwardArrayIteratorInputPins_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Execute.Comment", "/** Returns the current page of the array. */" },
		{ "Execute.Name", "EOvrForwardArrayIteratorInputPins::Execute" },
		{ "Execute.ToolTip", "Returns the current page of the array." },
		{ "ModuleRelativePath", "Public/OVRPlatformPageRequests.h" },
		{ "NextPage.Comment", "/** Requests the next page of the array. */" },
		{ "NextPage.Name", "EOvrForwardArrayIteratorInputPins::NextPage" },
		{ "NextPage.ToolTip", "Requests the next page of the array." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrForwardArrayIteratorInputPins::Execute", (int64)EOvrForwardArrayIteratorInputPins::Execute },
		{ "EOvrForwardArrayIteratorInputPins::NextPage", (int64)EOvrForwardArrayIteratorInputPins::NextPage },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrForwardArrayIteratorInputPins_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrForwardArrayIteratorInputPins",
	"EOvrForwardArrayIteratorInputPins",
	Z_Construct_UEnum_OVRPlatform_EOvrForwardArrayIteratorInputPins_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrForwardArrayIteratorInputPins_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrForwardArrayIteratorInputPins_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrForwardArrayIteratorInputPins_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrForwardArrayIteratorInputPins()
{
	if (!Z_Registration_Info_UEnum_EOvrForwardArrayIteratorInputPins.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrForwardArrayIteratorInputPins.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrForwardArrayIteratorInputPins_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrForwardArrayIteratorInputPins.InnerSingleton;
}
// End Enum EOvrForwardArrayIteratorInputPins

// Begin Enum EOvrBidirectionalArrayIteratorInputPins
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOvrBidirectionalArrayIteratorInputPins;
static UEnum* EOvrBidirectionalArrayIteratorInputPins_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOvrBidirectionalArrayIteratorInputPins.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOvrBidirectionalArrayIteratorInputPins.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OVRPlatform_EOvrBidirectionalArrayIteratorInputPins, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("EOvrBidirectionalArrayIteratorInputPins"));
	}
	return Z_Registration_Info_UEnum_EOvrBidirectionalArrayIteratorInputPins.OuterSingleton;
}
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrBidirectionalArrayIteratorInputPins>()
{
	return EOvrBidirectionalArrayIteratorInputPins_StaticEnum();
}
struct Z_Construct_UEnum_OVRPlatform_EOvrBidirectionalArrayIteratorInputPins_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Execute.Comment", "/** Returns the current page of the array. */" },
		{ "Execute.Name", "EOvrBidirectionalArrayIteratorInputPins::Execute" },
		{ "Execute.ToolTip", "Returns the current page of the array." },
		{ "ModuleRelativePath", "Public/OVRPlatformPageRequests.h" },
		{ "NextPage.Comment", "/** Requests the next page of the array. */" },
		{ "NextPage.Name", "EOvrBidirectionalArrayIteratorInputPins::NextPage" },
		{ "NextPage.ToolTip", "Requests the next page of the array." },
		{ "PreviousPage.Comment", "/** Requests the previous page of the array. */" },
		{ "PreviousPage.Name", "EOvrBidirectionalArrayIteratorInputPins::PreviousPage" },
		{ "PreviousPage.ToolTip", "Requests the previous page of the array." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOvrBidirectionalArrayIteratorInputPins::Execute", (int64)EOvrBidirectionalArrayIteratorInputPins::Execute },
		{ "EOvrBidirectionalArrayIteratorInputPins::NextPage", (int64)EOvrBidirectionalArrayIteratorInputPins::NextPage },
		{ "EOvrBidirectionalArrayIteratorInputPins::PreviousPage", (int64)EOvrBidirectionalArrayIteratorInputPins::PreviousPage },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OVRPlatform_EOvrBidirectionalArrayIteratorInputPins_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	"EOvrBidirectionalArrayIteratorInputPins",
	"EOvrBidirectionalArrayIteratorInputPins",
	Z_Construct_UEnum_OVRPlatform_EOvrBidirectionalArrayIteratorInputPins_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrBidirectionalArrayIteratorInputPins_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OVRPlatform_EOvrBidirectionalArrayIteratorInputPins_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OVRPlatform_EOvrBidirectionalArrayIteratorInputPins_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OVRPlatform_EOvrBidirectionalArrayIteratorInputPins()
{
	if (!Z_Registration_Info_UEnum_EOvrBidirectionalArrayIteratorInputPins.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOvrBidirectionalArrayIteratorInputPins.InnerSingleton, Z_Construct_UEnum_OVRPlatform_EOvrBidirectionalArrayIteratorInputPins_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOvrBidirectionalArrayIteratorInputPins.InnerSingleton;
}
// End Enum EOvrBidirectionalArrayIteratorInputPins

// Begin Class UOvrPageRequestsBlueprintLibrary Function FetchAchievementDefinitionPage
struct Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementDefinitionPage_Statics
{
	struct OvrPageRequestsBlueprintLibrary_eventFetchAchievementDefinitionPage_Parms
	{
		UObject* WorldContextObject;
		EOvrForwardArrayIteratorInputPins InExecs;
		EOvrPageRequestOutputPins OutExecs;
		FLatentActionInfo LatentInfo;
		FOvrAchievementDefinitionPages AchievementDefinitionPages;
		TArray<FOvrAchievementDefinition> AchievementDefinitionArray;
		bool bHasNextPage;
		FString ErrorMsg;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "AchievementDefinitionPages" },
		{ "Category", "OvrPlatform|Models|AchievementDefinitionArray" },
		{ "Comment", "/**\n     * Fetches a page from an FOvrAchievementDefinitionPages paged array.\n     * @param AchievementDefinitionPages - a FOvrAchievementDefinitionPages\n     * @param AchievementDefinitionArray - an array of FOvrAchievementDefinition\n     * @param bHasNextPage - if more pages are available after this one.\n     * @param WorldContextObject - the world context\n     * @param InExecs - an array of input pins that will be executed as a result of this request.\n     * @param OutExecs - an array of output pins that will be executed as a result of this request.\n     * @param LatentInfo - information about the latent action that will be performed as a result of this request.\n     * @param ErrorMsg - error message if the request failed, which contains failure reason, it is empty if the request succeeded.\n     */" },
		{ "ExpandEnumAsExecs", "InExecs,OutExecs" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/OVRPlatformPageRequests.h" },
		{ "ToolTip", "Fetches a page from an FOvrAchievementDefinitionPages paged array.\n@param AchievementDefinitionPages - a FOvrAchievementDefinitionPages\n@param AchievementDefinitionArray - an array of FOvrAchievementDefinition\n@param bHasNextPage - if more pages are available after this one.\n@param WorldContextObject - the world context\n@param InExecs - an array of input pins that will be executed as a result of this request.\n@param OutExecs - an array of output pins that will be executed as a result of this request.\n@param LatentInfo - information about the latent action that will be performed as a result of this request.\n@param ErrorMsg - error message if the request failed, which contains failure reason, it is empty if the request succeeded." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InExecs_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AchievementDefinitionPages_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InExecs_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InExecs;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutExecs_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutExecs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AchievementDefinitionPages;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AchievementDefinitionArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AchievementDefinitionArray;
	static void NewProp_bHasNextPage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasNextPage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementDefinitionPage_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchAchievementDefinitionPage_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementDefinitionPage_Statics::NewProp_InExecs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementDefinitionPage_Statics::NewProp_InExecs = { "InExecs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchAchievementDefinitionPage_Parms, InExecs), Z_Construct_UEnum_OVRPlatform_EOvrForwardArrayIteratorInputPins, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InExecs_MetaData), NewProp_InExecs_MetaData) }; // 2447575664
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementDefinitionPage_Statics::NewProp_OutExecs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementDefinitionPage_Statics::NewProp_OutExecs = { "OutExecs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchAchievementDefinitionPage_Parms, OutExecs), Z_Construct_UEnum_OVRPlatform_EOvrPageRequestOutputPins, METADATA_PARAMS(0, nullptr) }; // 1972563946
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementDefinitionPage_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchAchievementDefinitionPage_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementDefinitionPage_Statics::NewProp_AchievementDefinitionPages = { "AchievementDefinitionPages", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchAchievementDefinitionPage_Parms, AchievementDefinitionPages), Z_Construct_UScriptStruct_FOvrAchievementDefinitionPages, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AchievementDefinitionPages_MetaData), NewProp_AchievementDefinitionPages_MetaData) }; // 556729345
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementDefinitionPage_Statics::NewProp_AchievementDefinitionArray_Inner = { "AchievementDefinitionArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOvrAchievementDefinition, METADATA_PARAMS(0, nullptr) }; // 2837283710
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementDefinitionPage_Statics::NewProp_AchievementDefinitionArray = { "AchievementDefinitionArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchAchievementDefinitionPage_Parms, AchievementDefinitionArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2837283710
void Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementDefinitionPage_Statics::NewProp_bHasNextPage_SetBit(void* Obj)
{
	((OvrPageRequestsBlueprintLibrary_eventFetchAchievementDefinitionPage_Parms*)Obj)->bHasNextPage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementDefinitionPage_Statics::NewProp_bHasNextPage = { "bHasNextPage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OvrPageRequestsBlueprintLibrary_eventFetchAchievementDefinitionPage_Parms), &Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementDefinitionPage_Statics::NewProp_bHasNextPage_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementDefinitionPage_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchAchievementDefinitionPage_Parms, ErrorMsg), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementDefinitionPage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementDefinitionPage_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementDefinitionPage_Statics::NewProp_InExecs_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementDefinitionPage_Statics::NewProp_InExecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementDefinitionPage_Statics::NewProp_OutExecs_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementDefinitionPage_Statics::NewProp_OutExecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementDefinitionPage_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementDefinitionPage_Statics::NewProp_AchievementDefinitionPages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementDefinitionPage_Statics::NewProp_AchievementDefinitionArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementDefinitionPage_Statics::NewProp_AchievementDefinitionArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementDefinitionPage_Statics::NewProp_bHasNextPage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementDefinitionPage_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementDefinitionPage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementDefinitionPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOvrPageRequestsBlueprintLibrary, nullptr, "FetchAchievementDefinitionPage", nullptr, nullptr, Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementDefinitionPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementDefinitionPage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementDefinitionPage_Statics::OvrPageRequestsBlueprintLibrary_eventFetchAchievementDefinitionPage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementDefinitionPage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementDefinitionPage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementDefinitionPage_Statics::OvrPageRequestsBlueprintLibrary_eventFetchAchievementDefinitionPage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementDefinitionPage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementDefinitionPage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOvrPageRequestsBlueprintLibrary::execFetchAchievementDefinitionPage)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM_REF(EOvrForwardArrayIteratorInputPins,Z_Param_Out_InExecs);
	P_GET_ENUM_REF(EOvrPageRequestOutputPins,Z_Param_Out_OutExecs);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_STRUCT_REF(FOvrAchievementDefinitionPages,Z_Param_Out_AchievementDefinitionPages);
	P_GET_TARRAY_REF(FOvrAchievementDefinition,Z_Param_Out_AchievementDefinitionArray);
	P_GET_UBOOL_REF(Z_Param_Out_bHasNextPage);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ErrorMsg);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOvrPageRequestsBlueprintLibrary::FetchAchievementDefinitionPage(Z_Param_WorldContextObject,(EOvrForwardArrayIteratorInputPins&)(Z_Param_Out_InExecs),(EOvrPageRequestOutputPins&)(Z_Param_Out_OutExecs),Z_Param_LatentInfo,Z_Param_Out_AchievementDefinitionPages,Z_Param_Out_AchievementDefinitionArray,Z_Param_Out_bHasNextPage,Z_Param_Out_ErrorMsg);
	P_NATIVE_END;
}
// End Class UOvrPageRequestsBlueprintLibrary Function FetchAchievementDefinitionPage

// Begin Class UOvrPageRequestsBlueprintLibrary Function FetchAchievementProgressPage
struct Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementProgressPage_Statics
{
	struct OvrPageRequestsBlueprintLibrary_eventFetchAchievementProgressPage_Parms
	{
		UObject* WorldContextObject;
		EOvrForwardArrayIteratorInputPins InExecs;
		EOvrPageRequestOutputPins OutExecs;
		FLatentActionInfo LatentInfo;
		FOvrAchievementProgressPages AchievementProgressPages;
		TArray<FOvrAchievementProgress> AchievementProgressArray;
		bool bHasNextPage;
		FString ErrorMsg;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "AchievementProgressPages" },
		{ "Category", "OvrPlatform|Models|AchievementProgressArray" },
		{ "Comment", "/**\n     * Fetches a page from an FOvrAchievementProgressPages paged array.\n     * @param AchievementProgressPages - a FOvrAchievementProgressPages\n     * @param AchievementProgressArray - an array of FOvrAchievementProgress\n     * @param bHasNextPage - if more pages are available after this one.\n     * @param WorldContextObject - the world context\n     * @param InExecs - an array of input pins that will be executed as a result of this request.\n     * @param OutExecs - an array of output pins that will be executed as a result of this request.\n     * @param LatentInfo - information about the latent action that will be performed as a result of this request.\n     * @param ErrorMsg - error message if the request failed, which contains failure reason, it is empty if the request succeeded.\n     */" },
		{ "ExpandEnumAsExecs", "InExecs,OutExecs" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/OVRPlatformPageRequests.h" },
		{ "ToolTip", "Fetches a page from an FOvrAchievementProgressPages paged array.\n@param AchievementProgressPages - a FOvrAchievementProgressPages\n@param AchievementProgressArray - an array of FOvrAchievementProgress\n@param bHasNextPage - if more pages are available after this one.\n@param WorldContextObject - the world context\n@param InExecs - an array of input pins that will be executed as a result of this request.\n@param OutExecs - an array of output pins that will be executed as a result of this request.\n@param LatentInfo - information about the latent action that will be performed as a result of this request.\n@param ErrorMsg - error message if the request failed, which contains failure reason, it is empty if the request succeeded." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InExecs_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AchievementProgressPages_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InExecs_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InExecs;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutExecs_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutExecs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AchievementProgressPages;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AchievementProgressArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AchievementProgressArray;
	static void NewProp_bHasNextPage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasNextPage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementProgressPage_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchAchievementProgressPage_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementProgressPage_Statics::NewProp_InExecs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementProgressPage_Statics::NewProp_InExecs = { "InExecs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchAchievementProgressPage_Parms, InExecs), Z_Construct_UEnum_OVRPlatform_EOvrForwardArrayIteratorInputPins, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InExecs_MetaData), NewProp_InExecs_MetaData) }; // 2447575664
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementProgressPage_Statics::NewProp_OutExecs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementProgressPage_Statics::NewProp_OutExecs = { "OutExecs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchAchievementProgressPage_Parms, OutExecs), Z_Construct_UEnum_OVRPlatform_EOvrPageRequestOutputPins, METADATA_PARAMS(0, nullptr) }; // 1972563946
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementProgressPage_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchAchievementProgressPage_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementProgressPage_Statics::NewProp_AchievementProgressPages = { "AchievementProgressPages", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchAchievementProgressPage_Parms, AchievementProgressPages), Z_Construct_UScriptStruct_FOvrAchievementProgressPages, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AchievementProgressPages_MetaData), NewProp_AchievementProgressPages_MetaData) }; // 3702093670
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementProgressPage_Statics::NewProp_AchievementProgressArray_Inner = { "AchievementProgressArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOvrAchievementProgress, METADATA_PARAMS(0, nullptr) }; // 3191348341
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementProgressPage_Statics::NewProp_AchievementProgressArray = { "AchievementProgressArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchAchievementProgressPage_Parms, AchievementProgressArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3191348341
void Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementProgressPage_Statics::NewProp_bHasNextPage_SetBit(void* Obj)
{
	((OvrPageRequestsBlueprintLibrary_eventFetchAchievementProgressPage_Parms*)Obj)->bHasNextPage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementProgressPage_Statics::NewProp_bHasNextPage = { "bHasNextPage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OvrPageRequestsBlueprintLibrary_eventFetchAchievementProgressPage_Parms), &Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementProgressPage_Statics::NewProp_bHasNextPage_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementProgressPage_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchAchievementProgressPage_Parms, ErrorMsg), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementProgressPage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementProgressPage_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementProgressPage_Statics::NewProp_InExecs_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementProgressPage_Statics::NewProp_InExecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementProgressPage_Statics::NewProp_OutExecs_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementProgressPage_Statics::NewProp_OutExecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementProgressPage_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementProgressPage_Statics::NewProp_AchievementProgressPages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementProgressPage_Statics::NewProp_AchievementProgressArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementProgressPage_Statics::NewProp_AchievementProgressArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementProgressPage_Statics::NewProp_bHasNextPage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementProgressPage_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementProgressPage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementProgressPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOvrPageRequestsBlueprintLibrary, nullptr, "FetchAchievementProgressPage", nullptr, nullptr, Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementProgressPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementProgressPage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementProgressPage_Statics::OvrPageRequestsBlueprintLibrary_eventFetchAchievementProgressPage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementProgressPage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementProgressPage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementProgressPage_Statics::OvrPageRequestsBlueprintLibrary_eventFetchAchievementProgressPage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementProgressPage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementProgressPage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOvrPageRequestsBlueprintLibrary::execFetchAchievementProgressPage)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM_REF(EOvrForwardArrayIteratorInputPins,Z_Param_Out_InExecs);
	P_GET_ENUM_REF(EOvrPageRequestOutputPins,Z_Param_Out_OutExecs);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_STRUCT_REF(FOvrAchievementProgressPages,Z_Param_Out_AchievementProgressPages);
	P_GET_TARRAY_REF(FOvrAchievementProgress,Z_Param_Out_AchievementProgressArray);
	P_GET_UBOOL_REF(Z_Param_Out_bHasNextPage);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ErrorMsg);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOvrPageRequestsBlueprintLibrary::FetchAchievementProgressPage(Z_Param_WorldContextObject,(EOvrForwardArrayIteratorInputPins&)(Z_Param_Out_InExecs),(EOvrPageRequestOutputPins&)(Z_Param_Out_OutExecs),Z_Param_LatentInfo,Z_Param_Out_AchievementProgressPages,Z_Param_Out_AchievementProgressArray,Z_Param_Out_bHasNextPage,Z_Param_Out_ErrorMsg);
	P_NATIVE_END;
}
// End Class UOvrPageRequestsBlueprintLibrary Function FetchAchievementProgressPage

// Begin Class UOvrPageRequestsBlueprintLibrary Function FetchApplicationInvitePage
struct Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchApplicationInvitePage_Statics
{
	struct OvrPageRequestsBlueprintLibrary_eventFetchApplicationInvitePage_Parms
	{
		UObject* WorldContextObject;
		EOvrForwardArrayIteratorInputPins InExecs;
		EOvrPageRequestOutputPins OutExecs;
		FLatentActionInfo LatentInfo;
		FOvrApplicationInvitePages ApplicationInvitePages;
		TArray<FOvrApplicationInvite> ApplicationInviteArray;
		bool bHasNextPage;
		FString ErrorMsg;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "ApplicationInvitePages" },
		{ "Category", "OvrPlatform|Models|ApplicationInviteArray" },
		{ "Comment", "/**\n     * Fetches a page from an FOvrApplicationInvitePages paged array.\n     * @param ApplicationInvitePages - a FOvrApplicationInvitePages\n     * @param ApplicationInviteArray - an array of FOvrApplicationInvite\n     * @param bHasNextPage - if more pages are available after this one.\n     * @param WorldContextObject - the world context\n     * @param InExecs - an array of input pins that will be executed as a result of this request.\n     * @param OutExecs - an array of output pins that will be executed as a result of this request.\n     * @param LatentInfo - information about the latent action that will be performed as a result of this request.\n     * @param ErrorMsg - error message if the request failed, which contains failure reason, it is empty if the request succeeded.\n     */" },
		{ "ExpandEnumAsExecs", "InExecs,OutExecs" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/OVRPlatformPageRequests.h" },
		{ "ToolTip", "Fetches a page from an FOvrApplicationInvitePages paged array.\n@param ApplicationInvitePages - a FOvrApplicationInvitePages\n@param ApplicationInviteArray - an array of FOvrApplicationInvite\n@param bHasNextPage - if more pages are available after this one.\n@param WorldContextObject - the world context\n@param InExecs - an array of input pins that will be executed as a result of this request.\n@param OutExecs - an array of output pins that will be executed as a result of this request.\n@param LatentInfo - information about the latent action that will be performed as a result of this request.\n@param ErrorMsg - error message if the request failed, which contains failure reason, it is empty if the request succeeded." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InExecs_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationInvitePages_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InExecs_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InExecs;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutExecs_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutExecs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ApplicationInvitePages;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ApplicationInviteArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ApplicationInviteArray;
	static void NewProp_bHasNextPage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasNextPage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchApplicationInvitePage_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchApplicationInvitePage_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchApplicationInvitePage_Statics::NewProp_InExecs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchApplicationInvitePage_Statics::NewProp_InExecs = { "InExecs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchApplicationInvitePage_Parms, InExecs), Z_Construct_UEnum_OVRPlatform_EOvrForwardArrayIteratorInputPins, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InExecs_MetaData), NewProp_InExecs_MetaData) }; // 2447575664
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchApplicationInvitePage_Statics::NewProp_OutExecs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchApplicationInvitePage_Statics::NewProp_OutExecs = { "OutExecs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchApplicationInvitePage_Parms, OutExecs), Z_Construct_UEnum_OVRPlatform_EOvrPageRequestOutputPins, METADATA_PARAMS(0, nullptr) }; // 1972563946
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchApplicationInvitePage_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchApplicationInvitePage_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchApplicationInvitePage_Statics::NewProp_ApplicationInvitePages = { "ApplicationInvitePages", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchApplicationInvitePage_Parms, ApplicationInvitePages), Z_Construct_UScriptStruct_FOvrApplicationInvitePages, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplicationInvitePages_MetaData), NewProp_ApplicationInvitePages_MetaData) }; // 926696861
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchApplicationInvitePage_Statics::NewProp_ApplicationInviteArray_Inner = { "ApplicationInviteArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOvrApplicationInvite, METADATA_PARAMS(0, nullptr) }; // 3552133902
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchApplicationInvitePage_Statics::NewProp_ApplicationInviteArray = { "ApplicationInviteArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchApplicationInvitePage_Parms, ApplicationInviteArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3552133902
void Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchApplicationInvitePage_Statics::NewProp_bHasNextPage_SetBit(void* Obj)
{
	((OvrPageRequestsBlueprintLibrary_eventFetchApplicationInvitePage_Parms*)Obj)->bHasNextPage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchApplicationInvitePage_Statics::NewProp_bHasNextPage = { "bHasNextPage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OvrPageRequestsBlueprintLibrary_eventFetchApplicationInvitePage_Parms), &Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchApplicationInvitePage_Statics::NewProp_bHasNextPage_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchApplicationInvitePage_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchApplicationInvitePage_Parms, ErrorMsg), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchApplicationInvitePage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchApplicationInvitePage_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchApplicationInvitePage_Statics::NewProp_InExecs_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchApplicationInvitePage_Statics::NewProp_InExecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchApplicationInvitePage_Statics::NewProp_OutExecs_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchApplicationInvitePage_Statics::NewProp_OutExecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchApplicationInvitePage_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchApplicationInvitePage_Statics::NewProp_ApplicationInvitePages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchApplicationInvitePage_Statics::NewProp_ApplicationInviteArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchApplicationInvitePage_Statics::NewProp_ApplicationInviteArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchApplicationInvitePage_Statics::NewProp_bHasNextPage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchApplicationInvitePage_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchApplicationInvitePage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchApplicationInvitePage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOvrPageRequestsBlueprintLibrary, nullptr, "FetchApplicationInvitePage", nullptr, nullptr, Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchApplicationInvitePage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchApplicationInvitePage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchApplicationInvitePage_Statics::OvrPageRequestsBlueprintLibrary_eventFetchApplicationInvitePage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchApplicationInvitePage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchApplicationInvitePage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchApplicationInvitePage_Statics::OvrPageRequestsBlueprintLibrary_eventFetchApplicationInvitePage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchApplicationInvitePage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchApplicationInvitePage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOvrPageRequestsBlueprintLibrary::execFetchApplicationInvitePage)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM_REF(EOvrForwardArrayIteratorInputPins,Z_Param_Out_InExecs);
	P_GET_ENUM_REF(EOvrPageRequestOutputPins,Z_Param_Out_OutExecs);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_STRUCT_REF(FOvrApplicationInvitePages,Z_Param_Out_ApplicationInvitePages);
	P_GET_TARRAY_REF(FOvrApplicationInvite,Z_Param_Out_ApplicationInviteArray);
	P_GET_UBOOL_REF(Z_Param_Out_bHasNextPage);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ErrorMsg);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOvrPageRequestsBlueprintLibrary::FetchApplicationInvitePage(Z_Param_WorldContextObject,(EOvrForwardArrayIteratorInputPins&)(Z_Param_Out_InExecs),(EOvrPageRequestOutputPins&)(Z_Param_Out_OutExecs),Z_Param_LatentInfo,Z_Param_Out_ApplicationInvitePages,Z_Param_Out_ApplicationInviteArray,Z_Param_Out_bHasNextPage,Z_Param_Out_ErrorMsg);
	P_NATIVE_END;
}
// End Class UOvrPageRequestsBlueprintLibrary Function FetchApplicationInvitePage

// Begin Class UOvrPageRequestsBlueprintLibrary Function FetchBlockedUserPage
struct Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchBlockedUserPage_Statics
{
	struct OvrPageRequestsBlueprintLibrary_eventFetchBlockedUserPage_Parms
	{
		UObject* WorldContextObject;
		EOvrForwardArrayIteratorInputPins InExecs;
		EOvrPageRequestOutputPins OutExecs;
		FLatentActionInfo LatentInfo;
		FOvrBlockedUserPages BlockedUserPages;
		TArray<FOvrBlockedUser> BlockedUserArray;
		bool bHasNextPage;
		FString ErrorMsg;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "BlockedUserPages" },
		{ "Category", "OvrPlatform|Models|BlockedUserArray" },
		{ "Comment", "/**\n     * Fetches a page from an FOvrBlockedUserPages paged array.\n     * @param BlockedUserPages - a FOvrBlockedUserPages\n     * @param BlockedUserArray - an array of FOvrBlockedUser\n     * @param bHasNextPage - if more pages are available after this one.\n     * @param WorldContextObject - the world context\n     * @param InExecs - an array of input pins that will be executed as a result of this request.\n     * @param OutExecs - an array of output pins that will be executed as a result of this request.\n     * @param LatentInfo - information about the latent action that will be performed as a result of this request.\n     * @param ErrorMsg - error message if the request failed, which contains failure reason, it is empty if the request succeeded.\n     */" },
		{ "ExpandEnumAsExecs", "InExecs,OutExecs" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/OVRPlatformPageRequests.h" },
		{ "ToolTip", "Fetches a page from an FOvrBlockedUserPages paged array.\n@param BlockedUserPages - a FOvrBlockedUserPages\n@param BlockedUserArray - an array of FOvrBlockedUser\n@param bHasNextPage - if more pages are available after this one.\n@param WorldContextObject - the world context\n@param InExecs - an array of input pins that will be executed as a result of this request.\n@param OutExecs - an array of output pins that will be executed as a result of this request.\n@param LatentInfo - information about the latent action that will be performed as a result of this request.\n@param ErrorMsg - error message if the request failed, which contains failure reason, it is empty if the request succeeded." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InExecs_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockedUserPages_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InExecs_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InExecs;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutExecs_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutExecs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockedUserPages;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockedUserArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlockedUserArray;
	static void NewProp_bHasNextPage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasNextPage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchBlockedUserPage_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchBlockedUserPage_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchBlockedUserPage_Statics::NewProp_InExecs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchBlockedUserPage_Statics::NewProp_InExecs = { "InExecs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchBlockedUserPage_Parms, InExecs), Z_Construct_UEnum_OVRPlatform_EOvrForwardArrayIteratorInputPins, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InExecs_MetaData), NewProp_InExecs_MetaData) }; // 2447575664
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchBlockedUserPage_Statics::NewProp_OutExecs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchBlockedUserPage_Statics::NewProp_OutExecs = { "OutExecs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchBlockedUserPage_Parms, OutExecs), Z_Construct_UEnum_OVRPlatform_EOvrPageRequestOutputPins, METADATA_PARAMS(0, nullptr) }; // 1972563946
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchBlockedUserPage_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchBlockedUserPage_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchBlockedUserPage_Statics::NewProp_BlockedUserPages = { "BlockedUserPages", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchBlockedUserPage_Parms, BlockedUserPages), Z_Construct_UScriptStruct_FOvrBlockedUserPages, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockedUserPages_MetaData), NewProp_BlockedUserPages_MetaData) }; // 2439090477
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchBlockedUserPage_Statics::NewProp_BlockedUserArray_Inner = { "BlockedUserArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOvrBlockedUser, METADATA_PARAMS(0, nullptr) }; // 4053625168
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchBlockedUserPage_Statics::NewProp_BlockedUserArray = { "BlockedUserArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchBlockedUserPage_Parms, BlockedUserArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4053625168
void Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchBlockedUserPage_Statics::NewProp_bHasNextPage_SetBit(void* Obj)
{
	((OvrPageRequestsBlueprintLibrary_eventFetchBlockedUserPage_Parms*)Obj)->bHasNextPage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchBlockedUserPage_Statics::NewProp_bHasNextPage = { "bHasNextPage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OvrPageRequestsBlueprintLibrary_eventFetchBlockedUserPage_Parms), &Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchBlockedUserPage_Statics::NewProp_bHasNextPage_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchBlockedUserPage_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchBlockedUserPage_Parms, ErrorMsg), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchBlockedUserPage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchBlockedUserPage_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchBlockedUserPage_Statics::NewProp_InExecs_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchBlockedUserPage_Statics::NewProp_InExecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchBlockedUserPage_Statics::NewProp_OutExecs_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchBlockedUserPage_Statics::NewProp_OutExecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchBlockedUserPage_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchBlockedUserPage_Statics::NewProp_BlockedUserPages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchBlockedUserPage_Statics::NewProp_BlockedUserArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchBlockedUserPage_Statics::NewProp_BlockedUserArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchBlockedUserPage_Statics::NewProp_bHasNextPage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchBlockedUserPage_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchBlockedUserPage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchBlockedUserPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOvrPageRequestsBlueprintLibrary, nullptr, "FetchBlockedUserPage", nullptr, nullptr, Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchBlockedUserPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchBlockedUserPage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchBlockedUserPage_Statics::OvrPageRequestsBlueprintLibrary_eventFetchBlockedUserPage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchBlockedUserPage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchBlockedUserPage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchBlockedUserPage_Statics::OvrPageRequestsBlueprintLibrary_eventFetchBlockedUserPage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchBlockedUserPage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchBlockedUserPage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOvrPageRequestsBlueprintLibrary::execFetchBlockedUserPage)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM_REF(EOvrForwardArrayIteratorInputPins,Z_Param_Out_InExecs);
	P_GET_ENUM_REF(EOvrPageRequestOutputPins,Z_Param_Out_OutExecs);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_STRUCT_REF(FOvrBlockedUserPages,Z_Param_Out_BlockedUserPages);
	P_GET_TARRAY_REF(FOvrBlockedUser,Z_Param_Out_BlockedUserArray);
	P_GET_UBOOL_REF(Z_Param_Out_bHasNextPage);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ErrorMsg);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOvrPageRequestsBlueprintLibrary::FetchBlockedUserPage(Z_Param_WorldContextObject,(EOvrForwardArrayIteratorInputPins&)(Z_Param_Out_InExecs),(EOvrPageRequestOutputPins&)(Z_Param_Out_OutExecs),Z_Param_LatentInfo,Z_Param_Out_BlockedUserPages,Z_Param_Out_BlockedUserArray,Z_Param_Out_bHasNextPage,Z_Param_Out_ErrorMsg);
	P_NATIVE_END;
}
// End Class UOvrPageRequestsBlueprintLibrary Function FetchBlockedUserPage

// Begin Class UOvrPageRequestsBlueprintLibrary Function FetchChallengeEntryPage
struct Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengeEntryPage_Statics
{
	struct OvrPageRequestsBlueprintLibrary_eventFetchChallengeEntryPage_Parms
	{
		UObject* WorldContextObject;
		EOvrBidirectionalArrayIteratorInputPins InExecs;
		EOvrPageRequestOutputPins OutExecs;
		FLatentActionInfo LatentInfo;
		FOvrChallengeEntryPages ChallengeEntryPages;
		TArray<FOvrChallengeEntry> ChallengeEntryArray;
		bool bHasNextPage;
		bool bHasPreviousPage;
		FString ErrorMsg;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "ChallengeEntryPages" },
		{ "Category", "OvrPlatform|Models|ChallengeEntryArray" },
		{ "Comment", "/**\n     * Fetches a page from a bidirectional FOvrChallengeEntryPages paged array.\n     * @param ChallengeEntryPages - a FOvrChallengeEntryPages\n     * @param ChallengeEntryArray - an array of FOvrChallengeEntry\n     * @param bHasNextPage - if more pages are available after this one.\n     * @param bHasPreviousPage - if more pages are available before this one.\n     * @param WorldContextObject - the world context\n     * @param InExecs - an array of input pins that will be executed as a result of this request.\n     * @param OutExecs - an array of output pins that will be executed as a result of this request.\n     * @param LatentInfo - information about the latent action that will be performed as a result of this request.\n     * @param ErrorMsg - error message if the request failed, which contains failure reason, it is empty if the request succeeded.\n     */" },
		{ "ExpandEnumAsExecs", "InExecs,OutExecs" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/OVRPlatformPageRequests.h" },
		{ "ToolTip", "Fetches a page from a bidirectional FOvrChallengeEntryPages paged array.\n@param ChallengeEntryPages - a FOvrChallengeEntryPages\n@param ChallengeEntryArray - an array of FOvrChallengeEntry\n@param bHasNextPage - if more pages are available after this one.\n@param bHasPreviousPage - if more pages are available before this one.\n@param WorldContextObject - the world context\n@param InExecs - an array of input pins that will be executed as a result of this request.\n@param OutExecs - an array of output pins that will be executed as a result of this request.\n@param LatentInfo - information about the latent action that will be performed as a result of this request.\n@param ErrorMsg - error message if the request failed, which contains failure reason, it is empty if the request succeeded." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InExecs_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChallengeEntryPages_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InExecs_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InExecs;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutExecs_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutExecs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChallengeEntryPages;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChallengeEntryArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChallengeEntryArray;
	static void NewProp_bHasNextPage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasNextPage;
	static void NewProp_bHasPreviousPage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasPreviousPage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengeEntryPage_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchChallengeEntryPage_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengeEntryPage_Statics::NewProp_InExecs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengeEntryPage_Statics::NewProp_InExecs = { "InExecs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchChallengeEntryPage_Parms, InExecs), Z_Construct_UEnum_OVRPlatform_EOvrBidirectionalArrayIteratorInputPins, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InExecs_MetaData), NewProp_InExecs_MetaData) }; // 2235052359
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengeEntryPage_Statics::NewProp_OutExecs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengeEntryPage_Statics::NewProp_OutExecs = { "OutExecs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchChallengeEntryPage_Parms, OutExecs), Z_Construct_UEnum_OVRPlatform_EOvrPageRequestOutputPins, METADATA_PARAMS(0, nullptr) }; // 1972563946
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengeEntryPage_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchChallengeEntryPage_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengeEntryPage_Statics::NewProp_ChallengeEntryPages = { "ChallengeEntryPages", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchChallengeEntryPage_Parms, ChallengeEntryPages), Z_Construct_UScriptStruct_FOvrChallengeEntryPages, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChallengeEntryPages_MetaData), NewProp_ChallengeEntryPages_MetaData) }; // 2918398308
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengeEntryPage_Statics::NewProp_ChallengeEntryArray_Inner = { "ChallengeEntryArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOvrChallengeEntry, METADATA_PARAMS(0, nullptr) }; // 893410007
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengeEntryPage_Statics::NewProp_ChallengeEntryArray = { "ChallengeEntryArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchChallengeEntryPage_Parms, ChallengeEntryArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 893410007
void Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengeEntryPage_Statics::NewProp_bHasNextPage_SetBit(void* Obj)
{
	((OvrPageRequestsBlueprintLibrary_eventFetchChallengeEntryPage_Parms*)Obj)->bHasNextPage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengeEntryPage_Statics::NewProp_bHasNextPage = { "bHasNextPage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OvrPageRequestsBlueprintLibrary_eventFetchChallengeEntryPage_Parms), &Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengeEntryPage_Statics::NewProp_bHasNextPage_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengeEntryPage_Statics::NewProp_bHasPreviousPage_SetBit(void* Obj)
{
	((OvrPageRequestsBlueprintLibrary_eventFetchChallengeEntryPage_Parms*)Obj)->bHasPreviousPage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengeEntryPage_Statics::NewProp_bHasPreviousPage = { "bHasPreviousPage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OvrPageRequestsBlueprintLibrary_eventFetchChallengeEntryPage_Parms), &Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengeEntryPage_Statics::NewProp_bHasPreviousPage_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengeEntryPage_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchChallengeEntryPage_Parms, ErrorMsg), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengeEntryPage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengeEntryPage_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengeEntryPage_Statics::NewProp_InExecs_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengeEntryPage_Statics::NewProp_InExecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengeEntryPage_Statics::NewProp_OutExecs_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengeEntryPage_Statics::NewProp_OutExecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengeEntryPage_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengeEntryPage_Statics::NewProp_ChallengeEntryPages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengeEntryPage_Statics::NewProp_ChallengeEntryArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengeEntryPage_Statics::NewProp_ChallengeEntryArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengeEntryPage_Statics::NewProp_bHasNextPage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengeEntryPage_Statics::NewProp_bHasPreviousPage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengeEntryPage_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengeEntryPage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengeEntryPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOvrPageRequestsBlueprintLibrary, nullptr, "FetchChallengeEntryPage", nullptr, nullptr, Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengeEntryPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengeEntryPage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengeEntryPage_Statics::OvrPageRequestsBlueprintLibrary_eventFetchChallengeEntryPage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengeEntryPage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengeEntryPage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengeEntryPage_Statics::OvrPageRequestsBlueprintLibrary_eventFetchChallengeEntryPage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengeEntryPage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengeEntryPage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOvrPageRequestsBlueprintLibrary::execFetchChallengeEntryPage)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM_REF(EOvrBidirectionalArrayIteratorInputPins,Z_Param_Out_InExecs);
	P_GET_ENUM_REF(EOvrPageRequestOutputPins,Z_Param_Out_OutExecs);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_STRUCT_REF(FOvrChallengeEntryPages,Z_Param_Out_ChallengeEntryPages);
	P_GET_TARRAY_REF(FOvrChallengeEntry,Z_Param_Out_ChallengeEntryArray);
	P_GET_UBOOL_REF(Z_Param_Out_bHasNextPage);
	P_GET_UBOOL_REF(Z_Param_Out_bHasPreviousPage);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ErrorMsg);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOvrPageRequestsBlueprintLibrary::FetchChallengeEntryPage(Z_Param_WorldContextObject,(EOvrBidirectionalArrayIteratorInputPins&)(Z_Param_Out_InExecs),(EOvrPageRequestOutputPins&)(Z_Param_Out_OutExecs),Z_Param_LatentInfo,Z_Param_Out_ChallengeEntryPages,Z_Param_Out_ChallengeEntryArray,Z_Param_Out_bHasNextPage,Z_Param_Out_bHasPreviousPage,Z_Param_Out_ErrorMsg);
	P_NATIVE_END;
}
// End Class UOvrPageRequestsBlueprintLibrary Function FetchChallengeEntryPage

// Begin Class UOvrPageRequestsBlueprintLibrary Function FetchChallengePage
struct Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengePage_Statics
{
	struct OvrPageRequestsBlueprintLibrary_eventFetchChallengePage_Parms
	{
		UObject* WorldContextObject;
		EOvrBidirectionalArrayIteratorInputPins InExecs;
		EOvrPageRequestOutputPins OutExecs;
		FLatentActionInfo LatentInfo;
		FOvrChallengePages ChallengePages;
		TArray<FOvrChallenge> ChallengeArray;
		bool bHasNextPage;
		bool bHasPreviousPage;
		FString ErrorMsg;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "ChallengePages" },
		{ "Category", "OvrPlatform|Models|ChallengeArray" },
		{ "Comment", "/**\n     * Fetches a page from a bidirectional FOvrChallengePages paged array.\n     * @param ChallengePages - a FOvrChallengePages\n     * @param ChallengeArray - an array of FOvrChallenge\n     * @param bHasNextPage - if more pages are available after this one.\n     * @param bHasPreviousPage - if more pages are available before this one.\n     * @param WorldContextObject - the world context\n     * @param InExecs - an array of input pins that will be executed as a result of this request.\n     * @param OutExecs - an array of output pins that will be executed as a result of this request.\n     * @param LatentInfo - information about the latent action that will be performed as a result of this request.\n     * @param ErrorMsg - error message if the request failed, which contains failure reason, it is empty if the request succeeded.\n     */" },
		{ "ExpandEnumAsExecs", "InExecs,OutExecs" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/OVRPlatformPageRequests.h" },
		{ "ToolTip", "Fetches a page from a bidirectional FOvrChallengePages paged array.\n@param ChallengePages - a FOvrChallengePages\n@param ChallengeArray - an array of FOvrChallenge\n@param bHasNextPage - if more pages are available after this one.\n@param bHasPreviousPage - if more pages are available before this one.\n@param WorldContextObject - the world context\n@param InExecs - an array of input pins that will be executed as a result of this request.\n@param OutExecs - an array of output pins that will be executed as a result of this request.\n@param LatentInfo - information about the latent action that will be performed as a result of this request.\n@param ErrorMsg - error message if the request failed, which contains failure reason, it is empty if the request succeeded." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InExecs_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChallengePages_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InExecs_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InExecs;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutExecs_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutExecs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChallengePages;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChallengeArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChallengeArray;
	static void NewProp_bHasNextPage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasNextPage;
	static void NewProp_bHasPreviousPage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasPreviousPage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengePage_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchChallengePage_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengePage_Statics::NewProp_InExecs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengePage_Statics::NewProp_InExecs = { "InExecs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchChallengePage_Parms, InExecs), Z_Construct_UEnum_OVRPlatform_EOvrBidirectionalArrayIteratorInputPins, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InExecs_MetaData), NewProp_InExecs_MetaData) }; // 2235052359
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengePage_Statics::NewProp_OutExecs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengePage_Statics::NewProp_OutExecs = { "OutExecs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchChallengePage_Parms, OutExecs), Z_Construct_UEnum_OVRPlatform_EOvrPageRequestOutputPins, METADATA_PARAMS(0, nullptr) }; // 1972563946
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengePage_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchChallengePage_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengePage_Statics::NewProp_ChallengePages = { "ChallengePages", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchChallengePage_Parms, ChallengePages), Z_Construct_UScriptStruct_FOvrChallengePages, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChallengePages_MetaData), NewProp_ChallengePages_MetaData) }; // 1447146501
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengePage_Statics::NewProp_ChallengeArray_Inner = { "ChallengeArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOvrChallenge, METADATA_PARAMS(0, nullptr) }; // 2634269440
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengePage_Statics::NewProp_ChallengeArray = { "ChallengeArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchChallengePage_Parms, ChallengeArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2634269440
void Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengePage_Statics::NewProp_bHasNextPage_SetBit(void* Obj)
{
	((OvrPageRequestsBlueprintLibrary_eventFetchChallengePage_Parms*)Obj)->bHasNextPage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengePage_Statics::NewProp_bHasNextPage = { "bHasNextPage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OvrPageRequestsBlueprintLibrary_eventFetchChallengePage_Parms), &Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengePage_Statics::NewProp_bHasNextPage_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengePage_Statics::NewProp_bHasPreviousPage_SetBit(void* Obj)
{
	((OvrPageRequestsBlueprintLibrary_eventFetchChallengePage_Parms*)Obj)->bHasPreviousPage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengePage_Statics::NewProp_bHasPreviousPage = { "bHasPreviousPage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OvrPageRequestsBlueprintLibrary_eventFetchChallengePage_Parms), &Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengePage_Statics::NewProp_bHasPreviousPage_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengePage_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchChallengePage_Parms, ErrorMsg), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengePage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengePage_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengePage_Statics::NewProp_InExecs_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengePage_Statics::NewProp_InExecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengePage_Statics::NewProp_OutExecs_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengePage_Statics::NewProp_OutExecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengePage_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengePage_Statics::NewProp_ChallengePages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengePage_Statics::NewProp_ChallengeArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengePage_Statics::NewProp_ChallengeArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengePage_Statics::NewProp_bHasNextPage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengePage_Statics::NewProp_bHasPreviousPage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengePage_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengePage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengePage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOvrPageRequestsBlueprintLibrary, nullptr, "FetchChallengePage", nullptr, nullptr, Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengePage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengePage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengePage_Statics::OvrPageRequestsBlueprintLibrary_eventFetchChallengePage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengePage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengePage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengePage_Statics::OvrPageRequestsBlueprintLibrary_eventFetchChallengePage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengePage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengePage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOvrPageRequestsBlueprintLibrary::execFetchChallengePage)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM_REF(EOvrBidirectionalArrayIteratorInputPins,Z_Param_Out_InExecs);
	P_GET_ENUM_REF(EOvrPageRequestOutputPins,Z_Param_Out_OutExecs);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_STRUCT_REF(FOvrChallengePages,Z_Param_Out_ChallengePages);
	P_GET_TARRAY_REF(FOvrChallenge,Z_Param_Out_ChallengeArray);
	P_GET_UBOOL_REF(Z_Param_Out_bHasNextPage);
	P_GET_UBOOL_REF(Z_Param_Out_bHasPreviousPage);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ErrorMsg);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOvrPageRequestsBlueprintLibrary::FetchChallengePage(Z_Param_WorldContextObject,(EOvrBidirectionalArrayIteratorInputPins&)(Z_Param_Out_InExecs),(EOvrPageRequestOutputPins&)(Z_Param_Out_OutExecs),Z_Param_LatentInfo,Z_Param_Out_ChallengePages,Z_Param_Out_ChallengeArray,Z_Param_Out_bHasNextPage,Z_Param_Out_bHasPreviousPage,Z_Param_Out_ErrorMsg);
	P_NATIVE_END;
}
// End Class UOvrPageRequestsBlueprintLibrary Function FetchChallengePage

// Begin Class UOvrPageRequestsBlueprintLibrary Function FetchCowatchViewerPage
struct Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchCowatchViewerPage_Statics
{
	struct OvrPageRequestsBlueprintLibrary_eventFetchCowatchViewerPage_Parms
	{
		UObject* WorldContextObject;
		EOvrForwardArrayIteratorInputPins InExecs;
		EOvrPageRequestOutputPins OutExecs;
		FLatentActionInfo LatentInfo;
		FOvrCowatchViewerPages CowatchViewerPages;
		TArray<FOvrCowatchViewer> CowatchViewerArray;
		bool bHasNextPage;
		FString ErrorMsg;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "CowatchViewerPages" },
		{ "Category", "OvrPlatform|Models|CowatchViewerArray" },
		{ "Comment", "/**\n     * Fetches a page from an FOvrCowatchViewerPages paged array.\n     * @param CowatchViewerPages - a FOvrCowatchViewerPages\n     * @param CowatchViewerArray - an array of FOvrCowatchViewer\n     * @param bHasNextPage - if more pages are available after this one.\n     * @param WorldContextObject - the world context\n     * @param InExecs - an array of input pins that will be executed as a result of this request.\n     * @param OutExecs - an array of output pins that will be executed as a result of this request.\n     * @param LatentInfo - information about the latent action that will be performed as a result of this request.\n     * @param ErrorMsg - error message if the request failed, which contains failure reason, it is empty if the request succeeded.\n     */" },
		{ "ExpandEnumAsExecs", "InExecs,OutExecs" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/OVRPlatformPageRequests.h" },
		{ "ToolTip", "Fetches a page from an FOvrCowatchViewerPages paged array.\n@param CowatchViewerPages - a FOvrCowatchViewerPages\n@param CowatchViewerArray - an array of FOvrCowatchViewer\n@param bHasNextPage - if more pages are available after this one.\n@param WorldContextObject - the world context\n@param InExecs - an array of input pins that will be executed as a result of this request.\n@param OutExecs - an array of output pins that will be executed as a result of this request.\n@param LatentInfo - information about the latent action that will be performed as a result of this request.\n@param ErrorMsg - error message if the request failed, which contains failure reason, it is empty if the request succeeded." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InExecs_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CowatchViewerPages_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InExecs_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InExecs;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutExecs_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutExecs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CowatchViewerPages;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CowatchViewerArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CowatchViewerArray;
	static void NewProp_bHasNextPage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasNextPage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchCowatchViewerPage_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchCowatchViewerPage_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchCowatchViewerPage_Statics::NewProp_InExecs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchCowatchViewerPage_Statics::NewProp_InExecs = { "InExecs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchCowatchViewerPage_Parms, InExecs), Z_Construct_UEnum_OVRPlatform_EOvrForwardArrayIteratorInputPins, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InExecs_MetaData), NewProp_InExecs_MetaData) }; // 2447575664
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchCowatchViewerPage_Statics::NewProp_OutExecs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchCowatchViewerPage_Statics::NewProp_OutExecs = { "OutExecs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchCowatchViewerPage_Parms, OutExecs), Z_Construct_UEnum_OVRPlatform_EOvrPageRequestOutputPins, METADATA_PARAMS(0, nullptr) }; // 1972563946
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchCowatchViewerPage_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchCowatchViewerPage_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchCowatchViewerPage_Statics::NewProp_CowatchViewerPages = { "CowatchViewerPages", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchCowatchViewerPage_Parms, CowatchViewerPages), Z_Construct_UScriptStruct_FOvrCowatchViewerPages, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CowatchViewerPages_MetaData), NewProp_CowatchViewerPages_MetaData) }; // 103973212
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchCowatchViewerPage_Statics::NewProp_CowatchViewerArray_Inner = { "CowatchViewerArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOvrCowatchViewer, METADATA_PARAMS(0, nullptr) }; // 1886813120
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchCowatchViewerPage_Statics::NewProp_CowatchViewerArray = { "CowatchViewerArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchCowatchViewerPage_Parms, CowatchViewerArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1886813120
void Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchCowatchViewerPage_Statics::NewProp_bHasNextPage_SetBit(void* Obj)
{
	((OvrPageRequestsBlueprintLibrary_eventFetchCowatchViewerPage_Parms*)Obj)->bHasNextPage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchCowatchViewerPage_Statics::NewProp_bHasNextPage = { "bHasNextPage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OvrPageRequestsBlueprintLibrary_eventFetchCowatchViewerPage_Parms), &Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchCowatchViewerPage_Statics::NewProp_bHasNextPage_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchCowatchViewerPage_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchCowatchViewerPage_Parms, ErrorMsg), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchCowatchViewerPage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchCowatchViewerPage_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchCowatchViewerPage_Statics::NewProp_InExecs_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchCowatchViewerPage_Statics::NewProp_InExecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchCowatchViewerPage_Statics::NewProp_OutExecs_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchCowatchViewerPage_Statics::NewProp_OutExecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchCowatchViewerPage_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchCowatchViewerPage_Statics::NewProp_CowatchViewerPages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchCowatchViewerPage_Statics::NewProp_CowatchViewerArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchCowatchViewerPage_Statics::NewProp_CowatchViewerArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchCowatchViewerPage_Statics::NewProp_bHasNextPage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchCowatchViewerPage_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchCowatchViewerPage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchCowatchViewerPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOvrPageRequestsBlueprintLibrary, nullptr, "FetchCowatchViewerPage", nullptr, nullptr, Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchCowatchViewerPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchCowatchViewerPage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchCowatchViewerPage_Statics::OvrPageRequestsBlueprintLibrary_eventFetchCowatchViewerPage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchCowatchViewerPage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchCowatchViewerPage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchCowatchViewerPage_Statics::OvrPageRequestsBlueprintLibrary_eventFetchCowatchViewerPage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchCowatchViewerPage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchCowatchViewerPage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOvrPageRequestsBlueprintLibrary::execFetchCowatchViewerPage)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM_REF(EOvrForwardArrayIteratorInputPins,Z_Param_Out_InExecs);
	P_GET_ENUM_REF(EOvrPageRequestOutputPins,Z_Param_Out_OutExecs);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_STRUCT_REF(FOvrCowatchViewerPages,Z_Param_Out_CowatchViewerPages);
	P_GET_TARRAY_REF(FOvrCowatchViewer,Z_Param_Out_CowatchViewerArray);
	P_GET_UBOOL_REF(Z_Param_Out_bHasNextPage);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ErrorMsg);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOvrPageRequestsBlueprintLibrary::FetchCowatchViewerPage(Z_Param_WorldContextObject,(EOvrForwardArrayIteratorInputPins&)(Z_Param_Out_InExecs),(EOvrPageRequestOutputPins&)(Z_Param_Out_OutExecs),Z_Param_LatentInfo,Z_Param_Out_CowatchViewerPages,Z_Param_Out_CowatchViewerArray,Z_Param_Out_bHasNextPage,Z_Param_Out_ErrorMsg);
	P_NATIVE_END;
}
// End Class UOvrPageRequestsBlueprintLibrary Function FetchCowatchViewerPage

// Begin Class UOvrPageRequestsBlueprintLibrary Function FetchDestinationPage
struct Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchDestinationPage_Statics
{
	struct OvrPageRequestsBlueprintLibrary_eventFetchDestinationPage_Parms
	{
		UObject* WorldContextObject;
		EOvrForwardArrayIteratorInputPins InExecs;
		EOvrPageRequestOutputPins OutExecs;
		FLatentActionInfo LatentInfo;
		FOvrDestinationPages DestinationPages;
		TArray<FOvrDestination> DestinationArray;
		bool bHasNextPage;
		FString ErrorMsg;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "DestinationPages" },
		{ "Category", "OvrPlatform|Models|DestinationArray" },
		{ "Comment", "/**\n     * Fetches a page from an FOvrDestinationPages paged array.\n     * @param DestinationPages - a FOvrDestinationPages\n     * @param DestinationArray - an array of FOvrDestination\n     * @param bHasNextPage - if more pages are available after this one.\n     * @param WorldContextObject - the world context\n     * @param InExecs - an array of input pins that will be executed as a result of this request.\n     * @param OutExecs - an array of output pins that will be executed as a result of this request.\n     * @param LatentInfo - information about the latent action that will be performed as a result of this request.\n     * @param ErrorMsg - error message if the request failed, which contains failure reason, it is empty if the request succeeded.\n     */" },
		{ "ExpandEnumAsExecs", "InExecs,OutExecs" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/OVRPlatformPageRequests.h" },
		{ "ToolTip", "Fetches a page from an FOvrDestinationPages paged array.\n@param DestinationPages - a FOvrDestinationPages\n@param DestinationArray - an array of FOvrDestination\n@param bHasNextPage - if more pages are available after this one.\n@param WorldContextObject - the world context\n@param InExecs - an array of input pins that will be executed as a result of this request.\n@param OutExecs - an array of output pins that will be executed as a result of this request.\n@param LatentInfo - information about the latent action that will be performed as a result of this request.\n@param ErrorMsg - error message if the request failed, which contains failure reason, it is empty if the request succeeded." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InExecs_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestinationPages_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InExecs_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InExecs;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutExecs_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutExecs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DestinationPages;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DestinationArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DestinationArray;
	static void NewProp_bHasNextPage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasNextPage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchDestinationPage_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchDestinationPage_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchDestinationPage_Statics::NewProp_InExecs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchDestinationPage_Statics::NewProp_InExecs = { "InExecs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchDestinationPage_Parms, InExecs), Z_Construct_UEnum_OVRPlatform_EOvrForwardArrayIteratorInputPins, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InExecs_MetaData), NewProp_InExecs_MetaData) }; // 2447575664
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchDestinationPage_Statics::NewProp_OutExecs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchDestinationPage_Statics::NewProp_OutExecs = { "OutExecs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchDestinationPage_Parms, OutExecs), Z_Construct_UEnum_OVRPlatform_EOvrPageRequestOutputPins, METADATA_PARAMS(0, nullptr) }; // 1972563946
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchDestinationPage_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchDestinationPage_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchDestinationPage_Statics::NewProp_DestinationPages = { "DestinationPages", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchDestinationPage_Parms, DestinationPages), Z_Construct_UScriptStruct_FOvrDestinationPages, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestinationPages_MetaData), NewProp_DestinationPages_MetaData) }; // 1822791831
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchDestinationPage_Statics::NewProp_DestinationArray_Inner = { "DestinationArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOvrDestination, METADATA_PARAMS(0, nullptr) }; // 2184819378
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchDestinationPage_Statics::NewProp_DestinationArray = { "DestinationArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchDestinationPage_Parms, DestinationArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2184819378
void Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchDestinationPage_Statics::NewProp_bHasNextPage_SetBit(void* Obj)
{
	((OvrPageRequestsBlueprintLibrary_eventFetchDestinationPage_Parms*)Obj)->bHasNextPage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchDestinationPage_Statics::NewProp_bHasNextPage = { "bHasNextPage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OvrPageRequestsBlueprintLibrary_eventFetchDestinationPage_Parms), &Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchDestinationPage_Statics::NewProp_bHasNextPage_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchDestinationPage_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchDestinationPage_Parms, ErrorMsg), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchDestinationPage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchDestinationPage_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchDestinationPage_Statics::NewProp_InExecs_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchDestinationPage_Statics::NewProp_InExecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchDestinationPage_Statics::NewProp_OutExecs_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchDestinationPage_Statics::NewProp_OutExecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchDestinationPage_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchDestinationPage_Statics::NewProp_DestinationPages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchDestinationPage_Statics::NewProp_DestinationArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchDestinationPage_Statics::NewProp_DestinationArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchDestinationPage_Statics::NewProp_bHasNextPage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchDestinationPage_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchDestinationPage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchDestinationPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOvrPageRequestsBlueprintLibrary, nullptr, "FetchDestinationPage", nullptr, nullptr, Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchDestinationPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchDestinationPage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchDestinationPage_Statics::OvrPageRequestsBlueprintLibrary_eventFetchDestinationPage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchDestinationPage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchDestinationPage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchDestinationPage_Statics::OvrPageRequestsBlueprintLibrary_eventFetchDestinationPage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchDestinationPage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchDestinationPage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOvrPageRequestsBlueprintLibrary::execFetchDestinationPage)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM_REF(EOvrForwardArrayIteratorInputPins,Z_Param_Out_InExecs);
	P_GET_ENUM_REF(EOvrPageRequestOutputPins,Z_Param_Out_OutExecs);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_STRUCT_REF(FOvrDestinationPages,Z_Param_Out_DestinationPages);
	P_GET_TARRAY_REF(FOvrDestination,Z_Param_Out_DestinationArray);
	P_GET_UBOOL_REF(Z_Param_Out_bHasNextPage);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ErrorMsg);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOvrPageRequestsBlueprintLibrary::FetchDestinationPage(Z_Param_WorldContextObject,(EOvrForwardArrayIteratorInputPins&)(Z_Param_Out_InExecs),(EOvrPageRequestOutputPins&)(Z_Param_Out_OutExecs),Z_Param_LatentInfo,Z_Param_Out_DestinationPages,Z_Param_Out_DestinationArray,Z_Param_Out_bHasNextPage,Z_Param_Out_ErrorMsg);
	P_NATIVE_END;
}
// End Class UOvrPageRequestsBlueprintLibrary Function FetchDestinationPage

// Begin Class UOvrPageRequestsBlueprintLibrary Function FetchLeaderboardEntryPage
struct Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardEntryPage_Statics
{
	struct OvrPageRequestsBlueprintLibrary_eventFetchLeaderboardEntryPage_Parms
	{
		UObject* WorldContextObject;
		EOvrBidirectionalArrayIteratorInputPins InExecs;
		EOvrPageRequestOutputPins OutExecs;
		FLatentActionInfo LatentInfo;
		FOvrLeaderboardEntryPages LeaderboardEntryPages;
		TArray<FOvrLeaderboardEntry> LeaderboardEntryArray;
		bool bHasNextPage;
		bool bHasPreviousPage;
		FString ErrorMsg;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "LeaderboardEntryPages" },
		{ "Category", "OvrPlatform|Models|LeaderboardEntryArray" },
		{ "Comment", "/**\n     * Fetches a page from a bidirectional FOvrLeaderboardEntryPages paged array.\n     * @param LeaderboardEntryPages - a FOvrLeaderboardEntryPages\n     * @param LeaderboardEntryArray - an array of FOvrLeaderboardEntry\n     * @param bHasNextPage - if more pages are available after this one.\n     * @param bHasPreviousPage - if more pages are available before this one.\n     * @param WorldContextObject - the world context\n     * @param InExecs - an array of input pins that will be executed as a result of this request.\n     * @param OutExecs - an array of output pins that will be executed as a result of this request.\n     * @param LatentInfo - information about the latent action that will be performed as a result of this request.\n     * @param ErrorMsg - error message if the request failed, which contains failure reason, it is empty if the request succeeded.\n     */" },
		{ "ExpandEnumAsExecs", "InExecs,OutExecs" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/OVRPlatformPageRequests.h" },
		{ "ToolTip", "Fetches a page from a bidirectional FOvrLeaderboardEntryPages paged array.\n@param LeaderboardEntryPages - a FOvrLeaderboardEntryPages\n@param LeaderboardEntryArray - an array of FOvrLeaderboardEntry\n@param bHasNextPage - if more pages are available after this one.\n@param bHasPreviousPage - if more pages are available before this one.\n@param WorldContextObject - the world context\n@param InExecs - an array of input pins that will be executed as a result of this request.\n@param OutExecs - an array of output pins that will be executed as a result of this request.\n@param LatentInfo - information about the latent action that will be performed as a result of this request.\n@param ErrorMsg - error message if the request failed, which contains failure reason, it is empty if the request succeeded." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InExecs_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardEntryPages_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InExecs_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InExecs;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutExecs_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutExecs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeaderboardEntryPages;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeaderboardEntryArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LeaderboardEntryArray;
	static void NewProp_bHasNextPage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasNextPage;
	static void NewProp_bHasPreviousPage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasPreviousPage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardEntryPage_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchLeaderboardEntryPage_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardEntryPage_Statics::NewProp_InExecs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardEntryPage_Statics::NewProp_InExecs = { "InExecs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchLeaderboardEntryPage_Parms, InExecs), Z_Construct_UEnum_OVRPlatform_EOvrBidirectionalArrayIteratorInputPins, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InExecs_MetaData), NewProp_InExecs_MetaData) }; // 2235052359
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardEntryPage_Statics::NewProp_OutExecs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardEntryPage_Statics::NewProp_OutExecs = { "OutExecs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchLeaderboardEntryPage_Parms, OutExecs), Z_Construct_UEnum_OVRPlatform_EOvrPageRequestOutputPins, METADATA_PARAMS(0, nullptr) }; // 1972563946
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardEntryPage_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchLeaderboardEntryPage_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardEntryPage_Statics::NewProp_LeaderboardEntryPages = { "LeaderboardEntryPages", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchLeaderboardEntryPage_Parms, LeaderboardEntryPages), Z_Construct_UScriptStruct_FOvrLeaderboardEntryPages, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaderboardEntryPages_MetaData), NewProp_LeaderboardEntryPages_MetaData) }; // 236345326
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardEntryPage_Statics::NewProp_LeaderboardEntryArray_Inner = { "LeaderboardEntryArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOvrLeaderboardEntry, METADATA_PARAMS(0, nullptr) }; // 196305562
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardEntryPage_Statics::NewProp_LeaderboardEntryArray = { "LeaderboardEntryArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchLeaderboardEntryPage_Parms, LeaderboardEntryArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 196305562
void Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardEntryPage_Statics::NewProp_bHasNextPage_SetBit(void* Obj)
{
	((OvrPageRequestsBlueprintLibrary_eventFetchLeaderboardEntryPage_Parms*)Obj)->bHasNextPage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardEntryPage_Statics::NewProp_bHasNextPage = { "bHasNextPage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OvrPageRequestsBlueprintLibrary_eventFetchLeaderboardEntryPage_Parms), &Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardEntryPage_Statics::NewProp_bHasNextPage_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardEntryPage_Statics::NewProp_bHasPreviousPage_SetBit(void* Obj)
{
	((OvrPageRequestsBlueprintLibrary_eventFetchLeaderboardEntryPage_Parms*)Obj)->bHasPreviousPage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardEntryPage_Statics::NewProp_bHasPreviousPage = { "bHasPreviousPage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OvrPageRequestsBlueprintLibrary_eventFetchLeaderboardEntryPage_Parms), &Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardEntryPage_Statics::NewProp_bHasPreviousPage_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardEntryPage_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchLeaderboardEntryPage_Parms, ErrorMsg), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardEntryPage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardEntryPage_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardEntryPage_Statics::NewProp_InExecs_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardEntryPage_Statics::NewProp_InExecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardEntryPage_Statics::NewProp_OutExecs_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardEntryPage_Statics::NewProp_OutExecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardEntryPage_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardEntryPage_Statics::NewProp_LeaderboardEntryPages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardEntryPage_Statics::NewProp_LeaderboardEntryArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardEntryPage_Statics::NewProp_LeaderboardEntryArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardEntryPage_Statics::NewProp_bHasNextPage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardEntryPage_Statics::NewProp_bHasPreviousPage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardEntryPage_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardEntryPage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardEntryPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOvrPageRequestsBlueprintLibrary, nullptr, "FetchLeaderboardEntryPage", nullptr, nullptr, Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardEntryPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardEntryPage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardEntryPage_Statics::OvrPageRequestsBlueprintLibrary_eventFetchLeaderboardEntryPage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardEntryPage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardEntryPage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardEntryPage_Statics::OvrPageRequestsBlueprintLibrary_eventFetchLeaderboardEntryPage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardEntryPage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardEntryPage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOvrPageRequestsBlueprintLibrary::execFetchLeaderboardEntryPage)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM_REF(EOvrBidirectionalArrayIteratorInputPins,Z_Param_Out_InExecs);
	P_GET_ENUM_REF(EOvrPageRequestOutputPins,Z_Param_Out_OutExecs);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_STRUCT_REF(FOvrLeaderboardEntryPages,Z_Param_Out_LeaderboardEntryPages);
	P_GET_TARRAY_REF(FOvrLeaderboardEntry,Z_Param_Out_LeaderboardEntryArray);
	P_GET_UBOOL_REF(Z_Param_Out_bHasNextPage);
	P_GET_UBOOL_REF(Z_Param_Out_bHasPreviousPage);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ErrorMsg);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOvrPageRequestsBlueprintLibrary::FetchLeaderboardEntryPage(Z_Param_WorldContextObject,(EOvrBidirectionalArrayIteratorInputPins&)(Z_Param_Out_InExecs),(EOvrPageRequestOutputPins&)(Z_Param_Out_OutExecs),Z_Param_LatentInfo,Z_Param_Out_LeaderboardEntryPages,Z_Param_Out_LeaderboardEntryArray,Z_Param_Out_bHasNextPage,Z_Param_Out_bHasPreviousPage,Z_Param_Out_ErrorMsg);
	P_NATIVE_END;
}
// End Class UOvrPageRequestsBlueprintLibrary Function FetchLeaderboardEntryPage

// Begin Class UOvrPageRequestsBlueprintLibrary Function FetchLeaderboardPage
struct Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardPage_Statics
{
	struct OvrPageRequestsBlueprintLibrary_eventFetchLeaderboardPage_Parms
	{
		UObject* WorldContextObject;
		EOvrForwardArrayIteratorInputPins InExecs;
		EOvrPageRequestOutputPins OutExecs;
		FLatentActionInfo LatentInfo;
		FOvrLeaderboardPages LeaderboardPages;
		TArray<FOvrLeaderboard> LeaderboardArray;
		bool bHasNextPage;
		FString ErrorMsg;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "LeaderboardPages" },
		{ "Category", "OvrPlatform|Models|LeaderboardArray" },
		{ "Comment", "/**\n     * Fetches a page from an FOvrLeaderboardPages paged array.\n     * @param LeaderboardPages - a FOvrLeaderboardPages\n     * @param LeaderboardArray - an array of FOvrLeaderboard\n     * @param bHasNextPage - if more pages are available after this one.\n     * @param WorldContextObject - the world context\n     * @param InExecs - an array of input pins that will be executed as a result of this request.\n     * @param OutExecs - an array of output pins that will be executed as a result of this request.\n     * @param LatentInfo - information about the latent action that will be performed as a result of this request.\n     * @param ErrorMsg - error message if the request failed, which contains failure reason, it is empty if the request succeeded.\n     */" },
		{ "ExpandEnumAsExecs", "InExecs,OutExecs" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/OVRPlatformPageRequests.h" },
		{ "ToolTip", "Fetches a page from an FOvrLeaderboardPages paged array.\n@param LeaderboardPages - a FOvrLeaderboardPages\n@param LeaderboardArray - an array of FOvrLeaderboard\n@param bHasNextPage - if more pages are available after this one.\n@param WorldContextObject - the world context\n@param InExecs - an array of input pins that will be executed as a result of this request.\n@param OutExecs - an array of output pins that will be executed as a result of this request.\n@param LatentInfo - information about the latent action that will be performed as a result of this request.\n@param ErrorMsg - error message if the request failed, which contains failure reason, it is empty if the request succeeded." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InExecs_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardPages_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InExecs_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InExecs;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutExecs_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutExecs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeaderboardPages;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeaderboardArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LeaderboardArray;
	static void NewProp_bHasNextPage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasNextPage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardPage_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchLeaderboardPage_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardPage_Statics::NewProp_InExecs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardPage_Statics::NewProp_InExecs = { "InExecs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchLeaderboardPage_Parms, InExecs), Z_Construct_UEnum_OVRPlatform_EOvrForwardArrayIteratorInputPins, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InExecs_MetaData), NewProp_InExecs_MetaData) }; // 2447575664
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardPage_Statics::NewProp_OutExecs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardPage_Statics::NewProp_OutExecs = { "OutExecs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchLeaderboardPage_Parms, OutExecs), Z_Construct_UEnum_OVRPlatform_EOvrPageRequestOutputPins, METADATA_PARAMS(0, nullptr) }; // 1972563946
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardPage_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchLeaderboardPage_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardPage_Statics::NewProp_LeaderboardPages = { "LeaderboardPages", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchLeaderboardPage_Parms, LeaderboardPages), Z_Construct_UScriptStruct_FOvrLeaderboardPages, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaderboardPages_MetaData), NewProp_LeaderboardPages_MetaData) }; // 1842966768
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardPage_Statics::NewProp_LeaderboardArray_Inner = { "LeaderboardArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOvrLeaderboard, METADATA_PARAMS(0, nullptr) }; // 1598285689
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardPage_Statics::NewProp_LeaderboardArray = { "LeaderboardArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchLeaderboardPage_Parms, LeaderboardArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1598285689
void Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardPage_Statics::NewProp_bHasNextPage_SetBit(void* Obj)
{
	((OvrPageRequestsBlueprintLibrary_eventFetchLeaderboardPage_Parms*)Obj)->bHasNextPage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardPage_Statics::NewProp_bHasNextPage = { "bHasNextPage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OvrPageRequestsBlueprintLibrary_eventFetchLeaderboardPage_Parms), &Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardPage_Statics::NewProp_bHasNextPage_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardPage_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchLeaderboardPage_Parms, ErrorMsg), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardPage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardPage_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardPage_Statics::NewProp_InExecs_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardPage_Statics::NewProp_InExecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardPage_Statics::NewProp_OutExecs_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardPage_Statics::NewProp_OutExecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardPage_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardPage_Statics::NewProp_LeaderboardPages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardPage_Statics::NewProp_LeaderboardArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardPage_Statics::NewProp_LeaderboardArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardPage_Statics::NewProp_bHasNextPage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardPage_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardPage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOvrPageRequestsBlueprintLibrary, nullptr, "FetchLeaderboardPage", nullptr, nullptr, Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardPage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardPage_Statics::OvrPageRequestsBlueprintLibrary_eventFetchLeaderboardPage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardPage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardPage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardPage_Statics::OvrPageRequestsBlueprintLibrary_eventFetchLeaderboardPage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardPage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardPage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOvrPageRequestsBlueprintLibrary::execFetchLeaderboardPage)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM_REF(EOvrForwardArrayIteratorInputPins,Z_Param_Out_InExecs);
	P_GET_ENUM_REF(EOvrPageRequestOutputPins,Z_Param_Out_OutExecs);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_STRUCT_REF(FOvrLeaderboardPages,Z_Param_Out_LeaderboardPages);
	P_GET_TARRAY_REF(FOvrLeaderboard,Z_Param_Out_LeaderboardArray);
	P_GET_UBOOL_REF(Z_Param_Out_bHasNextPage);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ErrorMsg);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOvrPageRequestsBlueprintLibrary::FetchLeaderboardPage(Z_Param_WorldContextObject,(EOvrForwardArrayIteratorInputPins&)(Z_Param_Out_InExecs),(EOvrPageRequestOutputPins&)(Z_Param_Out_OutExecs),Z_Param_LatentInfo,Z_Param_Out_LeaderboardPages,Z_Param_Out_LeaderboardArray,Z_Param_Out_bHasNextPage,Z_Param_Out_ErrorMsg);
	P_NATIVE_END;
}
// End Class UOvrPageRequestsBlueprintLibrary Function FetchLeaderboardPage

// Begin Class UOvrPageRequestsBlueprintLibrary Function FetchProductPage
struct Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchProductPage_Statics
{
	struct OvrPageRequestsBlueprintLibrary_eventFetchProductPage_Parms
	{
		UObject* WorldContextObject;
		EOvrForwardArrayIteratorInputPins InExecs;
		EOvrPageRequestOutputPins OutExecs;
		FLatentActionInfo LatentInfo;
		FOvrProductPages ProductPages;
		TArray<FOvrProduct> ProductArray;
		bool bHasNextPage;
		FString ErrorMsg;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "ProductPages" },
		{ "Category", "OvrPlatform|Models|ProductArray" },
		{ "Comment", "/**\n     * Fetches a page from an FOvrProductPages paged array.\n     * @param ProductPages - a FOvrProductPages\n     * @param ProductArray - an array of FOvrProduct\n     * @param bHasNextPage - if more pages are available after this one.\n     * @param WorldContextObject - the world context\n     * @param InExecs - an array of input pins that will be executed as a result of this request.\n     * @param OutExecs - an array of output pins that will be executed as a result of this request.\n     * @param LatentInfo - information about the latent action that will be performed as a result of this request.\n     * @param ErrorMsg - error message if the request failed, which contains failure reason, it is empty if the request succeeded.\n     */" },
		{ "ExpandEnumAsExecs", "InExecs,OutExecs" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/OVRPlatformPageRequests.h" },
		{ "ToolTip", "Fetches a page from an FOvrProductPages paged array.\n@param ProductPages - a FOvrProductPages\n@param ProductArray - an array of FOvrProduct\n@param bHasNextPage - if more pages are available after this one.\n@param WorldContextObject - the world context\n@param InExecs - an array of input pins that will be executed as a result of this request.\n@param OutExecs - an array of output pins that will be executed as a result of this request.\n@param LatentInfo - information about the latent action that will be performed as a result of this request.\n@param ErrorMsg - error message if the request failed, which contains failure reason, it is empty if the request succeeded." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InExecs_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProductPages_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InExecs_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InExecs;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutExecs_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutExecs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProductPages;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProductArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ProductArray;
	static void NewProp_bHasNextPage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasNextPage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchProductPage_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchProductPage_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchProductPage_Statics::NewProp_InExecs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchProductPage_Statics::NewProp_InExecs = { "InExecs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchProductPage_Parms, InExecs), Z_Construct_UEnum_OVRPlatform_EOvrForwardArrayIteratorInputPins, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InExecs_MetaData), NewProp_InExecs_MetaData) }; // 2447575664
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchProductPage_Statics::NewProp_OutExecs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchProductPage_Statics::NewProp_OutExecs = { "OutExecs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchProductPage_Parms, OutExecs), Z_Construct_UEnum_OVRPlatform_EOvrPageRequestOutputPins, METADATA_PARAMS(0, nullptr) }; // 1972563946
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchProductPage_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchProductPage_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchProductPage_Statics::NewProp_ProductPages = { "ProductPages", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchProductPage_Parms, ProductPages), Z_Construct_UScriptStruct_FOvrProductPages, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProductPages_MetaData), NewProp_ProductPages_MetaData) }; // 3855574234
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchProductPage_Statics::NewProp_ProductArray_Inner = { "ProductArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOvrProduct, METADATA_PARAMS(0, nullptr) }; // 4159421430
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchProductPage_Statics::NewProp_ProductArray = { "ProductArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchProductPage_Parms, ProductArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4159421430
void Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchProductPage_Statics::NewProp_bHasNextPage_SetBit(void* Obj)
{
	((OvrPageRequestsBlueprintLibrary_eventFetchProductPage_Parms*)Obj)->bHasNextPage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchProductPage_Statics::NewProp_bHasNextPage = { "bHasNextPage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OvrPageRequestsBlueprintLibrary_eventFetchProductPage_Parms), &Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchProductPage_Statics::NewProp_bHasNextPage_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchProductPage_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchProductPage_Parms, ErrorMsg), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchProductPage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchProductPage_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchProductPage_Statics::NewProp_InExecs_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchProductPage_Statics::NewProp_InExecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchProductPage_Statics::NewProp_OutExecs_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchProductPage_Statics::NewProp_OutExecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchProductPage_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchProductPage_Statics::NewProp_ProductPages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchProductPage_Statics::NewProp_ProductArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchProductPage_Statics::NewProp_ProductArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchProductPage_Statics::NewProp_bHasNextPage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchProductPage_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchProductPage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchProductPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOvrPageRequestsBlueprintLibrary, nullptr, "FetchProductPage", nullptr, nullptr, Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchProductPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchProductPage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchProductPage_Statics::OvrPageRequestsBlueprintLibrary_eventFetchProductPage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchProductPage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchProductPage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchProductPage_Statics::OvrPageRequestsBlueprintLibrary_eventFetchProductPage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchProductPage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchProductPage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOvrPageRequestsBlueprintLibrary::execFetchProductPage)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM_REF(EOvrForwardArrayIteratorInputPins,Z_Param_Out_InExecs);
	P_GET_ENUM_REF(EOvrPageRequestOutputPins,Z_Param_Out_OutExecs);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_STRUCT_REF(FOvrProductPages,Z_Param_Out_ProductPages);
	P_GET_TARRAY_REF(FOvrProduct,Z_Param_Out_ProductArray);
	P_GET_UBOOL_REF(Z_Param_Out_bHasNextPage);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ErrorMsg);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOvrPageRequestsBlueprintLibrary::FetchProductPage(Z_Param_WorldContextObject,(EOvrForwardArrayIteratorInputPins&)(Z_Param_Out_InExecs),(EOvrPageRequestOutputPins&)(Z_Param_Out_OutExecs),Z_Param_LatentInfo,Z_Param_Out_ProductPages,Z_Param_Out_ProductArray,Z_Param_Out_bHasNextPage,Z_Param_Out_ErrorMsg);
	P_NATIVE_END;
}
// End Class UOvrPageRequestsBlueprintLibrary Function FetchProductPage

// Begin Class UOvrPageRequestsBlueprintLibrary Function FetchPurchasePage
struct Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchPurchasePage_Statics
{
	struct OvrPageRequestsBlueprintLibrary_eventFetchPurchasePage_Parms
	{
		UObject* WorldContextObject;
		EOvrForwardArrayIteratorInputPins InExecs;
		EOvrPageRequestOutputPins OutExecs;
		FLatentActionInfo LatentInfo;
		FOvrPurchasePages PurchasePages;
		TArray<FOvrPurchase> PurchaseArray;
		bool bHasNextPage;
		FString ErrorMsg;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "PurchasePages" },
		{ "Category", "OvrPlatform|Models|PurchaseArray" },
		{ "Comment", "/**\n     * Fetches a page from an FOvrPurchasePages paged array.\n     * @param PurchasePages - a FOvrPurchasePages\n     * @param PurchaseArray - an array of FOvrPurchase\n     * @param bHasNextPage - if more pages are available after this one.\n     * @param WorldContextObject - the world context\n     * @param InExecs - an array of input pins that will be executed as a result of this request.\n     * @param OutExecs - an array of output pins that will be executed as a result of this request.\n     * @param LatentInfo - information about the latent action that will be performed as a result of this request.\n     * @param ErrorMsg - error message if the request failed, which contains failure reason, it is empty if the request succeeded.\n     */" },
		{ "ExpandEnumAsExecs", "InExecs,OutExecs" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/OVRPlatformPageRequests.h" },
		{ "ToolTip", "Fetches a page from an FOvrPurchasePages paged array.\n@param PurchasePages - a FOvrPurchasePages\n@param PurchaseArray - an array of FOvrPurchase\n@param bHasNextPage - if more pages are available after this one.\n@param WorldContextObject - the world context\n@param InExecs - an array of input pins that will be executed as a result of this request.\n@param OutExecs - an array of output pins that will be executed as a result of this request.\n@param LatentInfo - information about the latent action that will be performed as a result of this request.\n@param ErrorMsg - error message if the request failed, which contains failure reason, it is empty if the request succeeded." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InExecs_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PurchasePages_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InExecs_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InExecs;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutExecs_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutExecs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PurchasePages;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PurchaseArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PurchaseArray;
	static void NewProp_bHasNextPage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasNextPage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchPurchasePage_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchPurchasePage_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchPurchasePage_Statics::NewProp_InExecs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchPurchasePage_Statics::NewProp_InExecs = { "InExecs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchPurchasePage_Parms, InExecs), Z_Construct_UEnum_OVRPlatform_EOvrForwardArrayIteratorInputPins, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InExecs_MetaData), NewProp_InExecs_MetaData) }; // 2447575664
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchPurchasePage_Statics::NewProp_OutExecs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchPurchasePage_Statics::NewProp_OutExecs = { "OutExecs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchPurchasePage_Parms, OutExecs), Z_Construct_UEnum_OVRPlatform_EOvrPageRequestOutputPins, METADATA_PARAMS(0, nullptr) }; // 1972563946
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchPurchasePage_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchPurchasePage_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchPurchasePage_Statics::NewProp_PurchasePages = { "PurchasePages", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchPurchasePage_Parms, PurchasePages), Z_Construct_UScriptStruct_FOvrPurchasePages, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PurchasePages_MetaData), NewProp_PurchasePages_MetaData) }; // 433996204
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchPurchasePage_Statics::NewProp_PurchaseArray_Inner = { "PurchaseArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOvrPurchase, METADATA_PARAMS(0, nullptr) }; // 2935408682
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchPurchasePage_Statics::NewProp_PurchaseArray = { "PurchaseArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchPurchasePage_Parms, PurchaseArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2935408682
void Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchPurchasePage_Statics::NewProp_bHasNextPage_SetBit(void* Obj)
{
	((OvrPageRequestsBlueprintLibrary_eventFetchPurchasePage_Parms*)Obj)->bHasNextPage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchPurchasePage_Statics::NewProp_bHasNextPage = { "bHasNextPage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OvrPageRequestsBlueprintLibrary_eventFetchPurchasePage_Parms), &Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchPurchasePage_Statics::NewProp_bHasNextPage_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchPurchasePage_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchPurchasePage_Parms, ErrorMsg), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchPurchasePage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchPurchasePage_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchPurchasePage_Statics::NewProp_InExecs_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchPurchasePage_Statics::NewProp_InExecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchPurchasePage_Statics::NewProp_OutExecs_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchPurchasePage_Statics::NewProp_OutExecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchPurchasePage_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchPurchasePage_Statics::NewProp_PurchasePages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchPurchasePage_Statics::NewProp_PurchaseArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchPurchasePage_Statics::NewProp_PurchaseArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchPurchasePage_Statics::NewProp_bHasNextPage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchPurchasePage_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchPurchasePage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchPurchasePage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOvrPageRequestsBlueprintLibrary, nullptr, "FetchPurchasePage", nullptr, nullptr, Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchPurchasePage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchPurchasePage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchPurchasePage_Statics::OvrPageRequestsBlueprintLibrary_eventFetchPurchasePage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchPurchasePage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchPurchasePage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchPurchasePage_Statics::OvrPageRequestsBlueprintLibrary_eventFetchPurchasePage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchPurchasePage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchPurchasePage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOvrPageRequestsBlueprintLibrary::execFetchPurchasePage)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM_REF(EOvrForwardArrayIteratorInputPins,Z_Param_Out_InExecs);
	P_GET_ENUM_REF(EOvrPageRequestOutputPins,Z_Param_Out_OutExecs);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_STRUCT_REF(FOvrPurchasePages,Z_Param_Out_PurchasePages);
	P_GET_TARRAY_REF(FOvrPurchase,Z_Param_Out_PurchaseArray);
	P_GET_UBOOL_REF(Z_Param_Out_bHasNextPage);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ErrorMsg);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOvrPageRequestsBlueprintLibrary::FetchPurchasePage(Z_Param_WorldContextObject,(EOvrForwardArrayIteratorInputPins&)(Z_Param_Out_InExecs),(EOvrPageRequestOutputPins&)(Z_Param_Out_OutExecs),Z_Param_LatentInfo,Z_Param_Out_PurchasePages,Z_Param_Out_PurchaseArray,Z_Param_Out_bHasNextPage,Z_Param_Out_ErrorMsg);
	P_NATIVE_END;
}
// End Class UOvrPageRequestsBlueprintLibrary Function FetchPurchasePage

// Begin Class UOvrPageRequestsBlueprintLibrary Function FetchUserCapabilityPage
struct Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserCapabilityPage_Statics
{
	struct OvrPageRequestsBlueprintLibrary_eventFetchUserCapabilityPage_Parms
	{
		UObject* WorldContextObject;
		EOvrForwardArrayIteratorInputPins InExecs;
		EOvrPageRequestOutputPins OutExecs;
		FLatentActionInfo LatentInfo;
		FOvrUserCapabilityPages UserCapabilityPages;
		TArray<FOvrUserCapability> UserCapabilityArray;
		bool bHasNextPage;
		FString ErrorMsg;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "UserCapabilityPages" },
		{ "Category", "OvrPlatform|Models|UserCapabilityArray" },
		{ "Comment", "/**\n     * Fetches a page from an FOvrUserCapabilityPages paged array.\n     * @param UserCapabilityPages - a FOvrUserCapabilityPages\n     * @param UserCapabilityArray - an array of FOvrUserCapability\n     * @param bHasNextPage - if more pages are available after this one.\n     * @param WorldContextObject - the world context\n     * @param InExecs - an array of input pins that will be executed as a result of this request.\n     * @param OutExecs - an array of output pins that will be executed as a result of this request.\n     * @param LatentInfo - information about the latent action that will be performed as a result of this request.\n     * @param ErrorMsg - error message if the request failed, which contains failure reason, it is empty if the request succeeded.\n     */" },
		{ "ExpandEnumAsExecs", "InExecs,OutExecs" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/OVRPlatformPageRequests.h" },
		{ "ToolTip", "Fetches a page from an FOvrUserCapabilityPages paged array.\n@param UserCapabilityPages - a FOvrUserCapabilityPages\n@param UserCapabilityArray - an array of FOvrUserCapability\n@param bHasNextPage - if more pages are available after this one.\n@param WorldContextObject - the world context\n@param InExecs - an array of input pins that will be executed as a result of this request.\n@param OutExecs - an array of output pins that will be executed as a result of this request.\n@param LatentInfo - information about the latent action that will be performed as a result of this request.\n@param ErrorMsg - error message if the request failed, which contains failure reason, it is empty if the request succeeded." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InExecs_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserCapabilityPages_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InExecs_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InExecs;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutExecs_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutExecs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserCapabilityPages;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserCapabilityArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UserCapabilityArray;
	static void NewProp_bHasNextPage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasNextPage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserCapabilityPage_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchUserCapabilityPage_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserCapabilityPage_Statics::NewProp_InExecs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserCapabilityPage_Statics::NewProp_InExecs = { "InExecs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchUserCapabilityPage_Parms, InExecs), Z_Construct_UEnum_OVRPlatform_EOvrForwardArrayIteratorInputPins, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InExecs_MetaData), NewProp_InExecs_MetaData) }; // 2447575664
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserCapabilityPage_Statics::NewProp_OutExecs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserCapabilityPage_Statics::NewProp_OutExecs = { "OutExecs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchUserCapabilityPage_Parms, OutExecs), Z_Construct_UEnum_OVRPlatform_EOvrPageRequestOutputPins, METADATA_PARAMS(0, nullptr) }; // 1972563946
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserCapabilityPage_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchUserCapabilityPage_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserCapabilityPage_Statics::NewProp_UserCapabilityPages = { "UserCapabilityPages", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchUserCapabilityPage_Parms, UserCapabilityPages), Z_Construct_UScriptStruct_FOvrUserCapabilityPages, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserCapabilityPages_MetaData), NewProp_UserCapabilityPages_MetaData) }; // 2882022483
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserCapabilityPage_Statics::NewProp_UserCapabilityArray_Inner = { "UserCapabilityArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOvrUserCapability, METADATA_PARAMS(0, nullptr) }; // 2992612467
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserCapabilityPage_Statics::NewProp_UserCapabilityArray = { "UserCapabilityArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchUserCapabilityPage_Parms, UserCapabilityArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2992612467
void Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserCapabilityPage_Statics::NewProp_bHasNextPage_SetBit(void* Obj)
{
	((OvrPageRequestsBlueprintLibrary_eventFetchUserCapabilityPage_Parms*)Obj)->bHasNextPage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserCapabilityPage_Statics::NewProp_bHasNextPage = { "bHasNextPage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OvrPageRequestsBlueprintLibrary_eventFetchUserCapabilityPage_Parms), &Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserCapabilityPage_Statics::NewProp_bHasNextPage_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserCapabilityPage_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchUserCapabilityPage_Parms, ErrorMsg), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserCapabilityPage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserCapabilityPage_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserCapabilityPage_Statics::NewProp_InExecs_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserCapabilityPage_Statics::NewProp_InExecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserCapabilityPage_Statics::NewProp_OutExecs_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserCapabilityPage_Statics::NewProp_OutExecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserCapabilityPage_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserCapabilityPage_Statics::NewProp_UserCapabilityPages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserCapabilityPage_Statics::NewProp_UserCapabilityArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserCapabilityPage_Statics::NewProp_UserCapabilityArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserCapabilityPage_Statics::NewProp_bHasNextPage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserCapabilityPage_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserCapabilityPage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserCapabilityPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOvrPageRequestsBlueprintLibrary, nullptr, "FetchUserCapabilityPage", nullptr, nullptr, Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserCapabilityPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserCapabilityPage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserCapabilityPage_Statics::OvrPageRequestsBlueprintLibrary_eventFetchUserCapabilityPage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserCapabilityPage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserCapabilityPage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserCapabilityPage_Statics::OvrPageRequestsBlueprintLibrary_eventFetchUserCapabilityPage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserCapabilityPage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserCapabilityPage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOvrPageRequestsBlueprintLibrary::execFetchUserCapabilityPage)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM_REF(EOvrForwardArrayIteratorInputPins,Z_Param_Out_InExecs);
	P_GET_ENUM_REF(EOvrPageRequestOutputPins,Z_Param_Out_OutExecs);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_STRUCT_REF(FOvrUserCapabilityPages,Z_Param_Out_UserCapabilityPages);
	P_GET_TARRAY_REF(FOvrUserCapability,Z_Param_Out_UserCapabilityArray);
	P_GET_UBOOL_REF(Z_Param_Out_bHasNextPage);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ErrorMsg);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOvrPageRequestsBlueprintLibrary::FetchUserCapabilityPage(Z_Param_WorldContextObject,(EOvrForwardArrayIteratorInputPins&)(Z_Param_Out_InExecs),(EOvrPageRequestOutputPins&)(Z_Param_Out_OutExecs),Z_Param_LatentInfo,Z_Param_Out_UserCapabilityPages,Z_Param_Out_UserCapabilityArray,Z_Param_Out_bHasNextPage,Z_Param_Out_ErrorMsg);
	P_NATIVE_END;
}
// End Class UOvrPageRequestsBlueprintLibrary Function FetchUserCapabilityPage

// Begin Class UOvrPageRequestsBlueprintLibrary Function FetchUserPage
struct Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserPage_Statics
{
	struct OvrPageRequestsBlueprintLibrary_eventFetchUserPage_Parms
	{
		UObject* WorldContextObject;
		EOvrForwardArrayIteratorInputPins InExecs;
		EOvrPageRequestOutputPins OutExecs;
		FLatentActionInfo LatentInfo;
		FOvrUserPages UserPages;
		TArray<FOvrUser> UserArray;
		bool bHasNextPage;
		FString ErrorMsg;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "UserPages" },
		{ "Category", "OvrPlatform|Models|UserArray" },
		{ "Comment", "/**\n     * Fetches a page from an FOvrUserPages paged array.\n     * @param UserPages - a FOvrUserPages\n     * @param UserArray - an array of FOvrUser\n     * @param bHasNextPage - if more pages are available after this one.\n     * @param WorldContextObject - the world context\n     * @param InExecs - an array of input pins that will be executed as a result of this request.\n     * @param OutExecs - an array of output pins that will be executed as a result of this request.\n     * @param LatentInfo - information about the latent action that will be performed as a result of this request.\n     * @param ErrorMsg - error message if the request failed, which contains failure reason, it is empty if the request succeeded.\n     */" },
		{ "ExpandEnumAsExecs", "InExecs,OutExecs" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/OVRPlatformPageRequests.h" },
		{ "ToolTip", "Fetches a page from an FOvrUserPages paged array.\n@param UserPages - a FOvrUserPages\n@param UserArray - an array of FOvrUser\n@param bHasNextPage - if more pages are available after this one.\n@param WorldContextObject - the world context\n@param InExecs - an array of input pins that will be executed as a result of this request.\n@param OutExecs - an array of output pins that will be executed as a result of this request.\n@param LatentInfo - information about the latent action that will be performed as a result of this request.\n@param ErrorMsg - error message if the request failed, which contains failure reason, it is empty if the request succeeded." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InExecs_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserPages_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InExecs_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InExecs;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutExecs_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutExecs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserPages;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UserArray;
	static void NewProp_bHasNextPage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasNextPage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserPage_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchUserPage_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserPage_Statics::NewProp_InExecs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserPage_Statics::NewProp_InExecs = { "InExecs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchUserPage_Parms, InExecs), Z_Construct_UEnum_OVRPlatform_EOvrForwardArrayIteratorInputPins, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InExecs_MetaData), NewProp_InExecs_MetaData) }; // 2447575664
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserPage_Statics::NewProp_OutExecs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserPage_Statics::NewProp_OutExecs = { "OutExecs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchUserPage_Parms, OutExecs), Z_Construct_UEnum_OVRPlatform_EOvrPageRequestOutputPins, METADATA_PARAMS(0, nullptr) }; // 1972563946
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserPage_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchUserPage_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserPage_Statics::NewProp_UserPages = { "UserPages", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchUserPage_Parms, UserPages), Z_Construct_UScriptStruct_FOvrUserPages, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserPages_MetaData), NewProp_UserPages_MetaData) }; // 2127707215
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserPage_Statics::NewProp_UserArray_Inner = { "UserArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOvrUser, METADATA_PARAMS(0, nullptr) }; // 3527542399
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserPage_Statics::NewProp_UserArray = { "UserArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchUserPage_Parms, UserArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3527542399
void Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserPage_Statics::NewProp_bHasNextPage_SetBit(void* Obj)
{
	((OvrPageRequestsBlueprintLibrary_eventFetchUserPage_Parms*)Obj)->bHasNextPage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserPage_Statics::NewProp_bHasNextPage = { "bHasNextPage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OvrPageRequestsBlueprintLibrary_eventFetchUserPage_Parms), &Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserPage_Statics::NewProp_bHasNextPage_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserPage_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPageRequestsBlueprintLibrary_eventFetchUserPage_Parms, ErrorMsg), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserPage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserPage_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserPage_Statics::NewProp_InExecs_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserPage_Statics::NewProp_InExecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserPage_Statics::NewProp_OutExecs_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserPage_Statics::NewProp_OutExecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserPage_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserPage_Statics::NewProp_UserPages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserPage_Statics::NewProp_UserArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserPage_Statics::NewProp_UserArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserPage_Statics::NewProp_bHasNextPage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserPage_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserPage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOvrPageRequestsBlueprintLibrary, nullptr, "FetchUserPage", nullptr, nullptr, Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserPage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserPage_Statics::OvrPageRequestsBlueprintLibrary_eventFetchUserPage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserPage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserPage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserPage_Statics::OvrPageRequestsBlueprintLibrary_eventFetchUserPage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserPage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserPage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOvrPageRequestsBlueprintLibrary::execFetchUserPage)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM_REF(EOvrForwardArrayIteratorInputPins,Z_Param_Out_InExecs);
	P_GET_ENUM_REF(EOvrPageRequestOutputPins,Z_Param_Out_OutExecs);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_STRUCT_REF(FOvrUserPages,Z_Param_Out_UserPages);
	P_GET_TARRAY_REF(FOvrUser,Z_Param_Out_UserArray);
	P_GET_UBOOL_REF(Z_Param_Out_bHasNextPage);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ErrorMsg);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOvrPageRequestsBlueprintLibrary::FetchUserPage(Z_Param_WorldContextObject,(EOvrForwardArrayIteratorInputPins&)(Z_Param_Out_InExecs),(EOvrPageRequestOutputPins&)(Z_Param_Out_OutExecs),Z_Param_LatentInfo,Z_Param_Out_UserPages,Z_Param_Out_UserArray,Z_Param_Out_bHasNextPage,Z_Param_Out_ErrorMsg);
	P_NATIVE_END;
}
// End Class UOvrPageRequestsBlueprintLibrary Function FetchUserPage

// Begin Class UOvrPageRequestsBlueprintLibrary
void UOvrPageRequestsBlueprintLibrary::StaticRegisterNativesUOvrPageRequestsBlueprintLibrary()
{
	UClass* Class = UOvrPageRequestsBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FetchAchievementDefinitionPage", &UOvrPageRequestsBlueprintLibrary::execFetchAchievementDefinitionPage },
		{ "FetchAchievementProgressPage", &UOvrPageRequestsBlueprintLibrary::execFetchAchievementProgressPage },
		{ "FetchApplicationInvitePage", &UOvrPageRequestsBlueprintLibrary::execFetchApplicationInvitePage },
		{ "FetchBlockedUserPage", &UOvrPageRequestsBlueprintLibrary::execFetchBlockedUserPage },
		{ "FetchChallengeEntryPage", &UOvrPageRequestsBlueprintLibrary::execFetchChallengeEntryPage },
		{ "FetchChallengePage", &UOvrPageRequestsBlueprintLibrary::execFetchChallengePage },
		{ "FetchCowatchViewerPage", &UOvrPageRequestsBlueprintLibrary::execFetchCowatchViewerPage },
		{ "FetchDestinationPage", &UOvrPageRequestsBlueprintLibrary::execFetchDestinationPage },
		{ "FetchLeaderboardEntryPage", &UOvrPageRequestsBlueprintLibrary::execFetchLeaderboardEntryPage },
		{ "FetchLeaderboardPage", &UOvrPageRequestsBlueprintLibrary::execFetchLeaderboardPage },
		{ "FetchProductPage", &UOvrPageRequestsBlueprintLibrary::execFetchProductPage },
		{ "FetchPurchasePage", &UOvrPageRequestsBlueprintLibrary::execFetchPurchasePage },
		{ "FetchUserCapabilityPage", &UOvrPageRequestsBlueprintLibrary::execFetchUserCapabilityPage },
		{ "FetchUserPage", &UOvrPageRequestsBlueprintLibrary::execFetchUserPage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOvrPageRequestsBlueprintLibrary);
UClass* Z_Construct_UClass_UOvrPageRequestsBlueprintLibrary_NoRegister()
{
	return UOvrPageRequestsBlueprintLibrary::StaticClass();
}
struct Z_Construct_UClass_UOvrPageRequestsBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OVRPlatformPageRequests.h" },
		{ "ModuleRelativePath", "Public/OVRPlatformPageRequests.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementDefinitionPage, "FetchAchievementDefinitionPage" }, // 1867164867
		{ &Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchAchievementProgressPage, "FetchAchievementProgressPage" }, // 2589611651
		{ &Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchApplicationInvitePage, "FetchApplicationInvitePage" }, // 3450520784
		{ &Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchBlockedUserPage, "FetchBlockedUserPage" }, // 1710107477
		{ &Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengeEntryPage, "FetchChallengeEntryPage" }, // 3577301458
		{ &Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchChallengePage, "FetchChallengePage" }, // 4232247519
		{ &Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchCowatchViewerPage, "FetchCowatchViewerPage" }, // 990626982
		{ &Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchDestinationPage, "FetchDestinationPage" }, // 410507932
		{ &Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardEntryPage, "FetchLeaderboardEntryPage" }, // 3713830015
		{ &Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchLeaderboardPage, "FetchLeaderboardPage" }, // 2244413556
		{ &Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchProductPage, "FetchProductPage" }, // 3546329387
		{ &Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchPurchasePage, "FetchPurchasePage" }, // 385281003
		{ &Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserCapabilityPage, "FetchUserCapabilityPage" }, // 2278022131
		{ &Z_Construct_UFunction_UOvrPageRequestsBlueprintLibrary_FetchUserPage, "FetchUserPage" }, // 1298556993
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOvrPageRequestsBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOvrPageRequestsBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OVRPlatform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOvrPageRequestsBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOvrPageRequestsBlueprintLibrary_Statics::ClassParams = {
	&UOvrPageRequestsBlueprintLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOvrPageRequestsBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UOvrPageRequestsBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOvrPageRequestsBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UOvrPageRequestsBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOvrPageRequestsBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UOvrPageRequestsBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOvrPageRequestsBlueprintLibrary.OuterSingleton;
}
template<> OVRPLATFORM_API UClass* StaticClass<UOvrPageRequestsBlueprintLibrary>()
{
	return UOvrPageRequestsBlueprintLibrary::StaticClass();
}
UOvrPageRequestsBlueprintLibrary::UOvrPageRequestsBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOvrPageRequestsBlueprintLibrary);
UOvrPageRequestsBlueprintLibrary::~UOvrPageRequestsBlueprintLibrary() {}
// End Class UOvrPageRequestsBlueprintLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Thirdparty_OculusPlatformSDK_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformPageRequests_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOvrForwardArrayIteratorInputPins_StaticEnum, TEXT("EOvrForwardArrayIteratorInputPins"), &Z_Registration_Info_UEnum_EOvrForwardArrayIteratorInputPins, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2447575664U) },
		{ EOvrBidirectionalArrayIteratorInputPins_StaticEnum, TEXT("EOvrBidirectionalArrayIteratorInputPins"), &Z_Registration_Info_UEnum_EOvrBidirectionalArrayIteratorInputPins, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2235052359U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOvrPageRequestsBlueprintLibrary, UOvrPageRequestsBlueprintLibrary::StaticClass, TEXT("UOvrPageRequestsBlueprintLibrary"), &Z_Registration_Info_UClass_UOvrPageRequestsBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOvrPageRequestsBlueprintLibrary), 3446638415U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Thirdparty_OculusPlatformSDK_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformPageRequests_h_2748486220(TEXT("/Script/OVRPlatform"),
	Z_CompiledInDeferFile_FID_Thirdparty_OculusPlatformSDK_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformPageRequests_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Thirdparty_OculusPlatformSDK_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformPageRequests_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Thirdparty_OculusPlatformSDK_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformPageRequests_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Thirdparty_OculusPlatformSDK_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformPageRequests_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
