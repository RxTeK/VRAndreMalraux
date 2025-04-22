// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OVRPlatform/Public/OVRPlatformTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOVRPlatformTypes() {}

// Begin Cross Module References
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrKeyValuePairType();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrId();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrVariant();
UPackage* Z_Construct_UPackage__Script_OVRPlatform();
// End Cross Module References

// Begin ScriptStruct FOvrId
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OvrId;
class UScriptStruct* FOvrId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OvrId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OvrId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOvrId, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("OvrId"));
	}
	return Z_Registration_Info_UScriptStruct_OvrId.OuterSingleton;
}
template<> OVRPLATFORM_API UScriptStruct* StaticStruct<FOvrId>()
{
	return FOvrId::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOvrId_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "OvrPlatform|CustomModels|ID" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// It represents a UE type corresponding to OVR Platform ::ovrID. \n/// It is used to represent an ID in the OVR Platform and provides a convenient way to work with IDs in the OVR Platform within Unreal Engine. \n" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "It represents a UE type corresponding to OVR Platform ::ovrID.\nIt is used to represent an ID in the OVR Platform and provides a convenient way to work with IDs in the OVR Platform within Unreal Engine." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Public/OVRPlatformTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_Id;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOvrId>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FOvrId_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrId, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOvrId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrId_Statics::NewProp_Id,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOvrId_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	&NewStructOps,
	"OvrId",
	Z_Construct_UScriptStruct_FOvrId_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrId_Statics::PropPointers),
	sizeof(FOvrId),
	alignof(FOvrId),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrId_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOvrId_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOvrId()
{
	if (!Z_Registration_Info_UScriptStruct_OvrId.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OvrId.InnerSingleton, Z_Construct_UScriptStruct_FOvrId_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OvrId.InnerSingleton;
}
// End ScriptStruct FOvrId

// Begin ScriptStruct FOvrVariant
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OvrVariant;
class UScriptStruct* FOvrVariant::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OvrVariant.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OvrVariant.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOvrVariant, (UObject*)Z_Construct_UPackage__Script_OVRPlatform(), TEXT("OvrVariant"));
	}
	return Z_Registration_Info_UScriptStruct_OvrVariant.OuterSingleton;
}
template<> OVRPLATFORM_API UScriptStruct* StaticStruct<FOvrVariant>()
{
	return FOvrVariant::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOvrVariant_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "OvrPlatform|CustomModels|Variant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** UE type corresponding to OVR Platform ovrKeyValuePair */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UE type corresponding to OVR Platform ovrKeyValuePair" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "OvrPlatform|CustomModels|Variant|Field" },
		{ "ModuleRelativePath", "Public/OVRPlatformTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[] = {
		{ "Category", "OvrPlatform|CustomModels|Variant|Field" },
		{ "EditCondition", "Type == EOvrVariantType::String" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OVRPlatformTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntValue_MetaData[] = {
		{ "Category", "OvrPlatform|CustomModels|Variant|Field" },
		{ "EditCondition", "Type == EOvrVariantType::Int" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OVRPlatformTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[] = {
		{ "Category", "OvrPlatform|CustomModels|Variant|Field" },
		{ "EditCondition", "Type == EOvrVariantType::Double" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OVRPlatformTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOvrVariant>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOvrVariant_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOvrVariant_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrVariant, Type), Z_Construct_UEnum_OVRPlatform_EOvrKeyValuePairType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2080654888
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOvrVariant_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrVariant, StringValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringValue_MetaData), NewProp_StringValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOvrVariant_Statics::NewProp_IntValue = { "IntValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrVariant, IntValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntValue_MetaData), NewProp_IntValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOvrVariant_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOvrVariant, FloatValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatValue_MetaData), NewProp_FloatValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOvrVariant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrVariant_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrVariant_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrVariant_Statics::NewProp_StringValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrVariant_Statics::NewProp_IntValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOvrVariant_Statics::NewProp_FloatValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrVariant_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOvrVariant_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OVRPlatform,
	nullptr,
	&NewStructOps,
	"OvrVariant",
	Z_Construct_UScriptStruct_FOvrVariant_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrVariant_Statics::PropPointers),
	sizeof(FOvrVariant),
	alignof(FOvrVariant),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOvrVariant_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOvrVariant_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOvrVariant()
{
	if (!Z_Registration_Info_UScriptStruct_OvrVariant.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OvrVariant.InnerSingleton, Z_Construct_UScriptStruct_FOvrVariant_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OvrVariant.InnerSingleton;
}
// End ScriptStruct FOvrVariant

// Begin Registration
struct Z_CompiledInDeferFile_FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOvrId::StaticStruct, Z_Construct_UScriptStruct_FOvrId_Statics::NewStructOps, TEXT("OvrId"), &Z_Registration_Info_UScriptStruct_OvrId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOvrId), 3472719273U) },
		{ FOvrVariant::StaticStruct, Z_Construct_UScriptStruct_FOvrVariant_Statics::NewStructOps, TEXT("OvrVariant"), &Z_Registration_Info_UScriptStruct_OvrVariant, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOvrVariant), 2305548587U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformTypes_h_487297780(TEXT("/Script/OVRPlatform"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
