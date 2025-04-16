// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OVRPlatform/Public/OVRPlatformUtils.h"
#include "OVRPlatform/Public/OVRPlatformTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOVRPlatformUtils() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
OVRPLATFORM_API UClass* Z_Construct_UClass_UOvrPlatformUtilsLibrary();
OVRPLATFORM_API UClass* Z_Construct_UClass_UOvrPlatformUtilsLibrary_NoRegister();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrId();
UPackage* Z_Construct_UPackage__Script_OVRPlatform();
// End Cross Module References

// Begin Class UOvrPlatformUtilsLibrary Function Conv_Int64ToOvrId
struct Z_Construct_UFunction_UOvrPlatformUtilsLibrary_Conv_Int64ToOvrId_Statics
{
	struct OvrPlatformUtilsLibrary_eventConv_Int64ToOvrId_Parms
	{
		int64 Id;
		FOvrId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "OculusPlatform|Utils" },
		{ "Comment", "/**\n     * Function to auto-convert from int64 to FString.\n     */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToOvrId (Int64)" },
		{ "ModuleRelativePath", "Public/OVRPlatformUtils.h" },
		{ "ToolTip", "Function to auto-convert from int64 to FString." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Id;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UOvrPlatformUtilsLibrary_Conv_Int64ToOvrId_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPlatformUtilsLibrary_eventConv_Int64ToOvrId_Parms, Id), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPlatformUtilsLibrary_Conv_Int64ToOvrId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPlatformUtilsLibrary_eventConv_Int64ToOvrId_Parms, ReturnValue), Z_Construct_UScriptStruct_FOvrId, METADATA_PARAMS(0, nullptr) }; // 3320909238
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOvrPlatformUtilsLibrary_Conv_Int64ToOvrId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPlatformUtilsLibrary_Conv_Int64ToOvrId_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPlatformUtilsLibrary_Conv_Int64ToOvrId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPlatformUtilsLibrary_Conv_Int64ToOvrId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOvrPlatformUtilsLibrary_Conv_Int64ToOvrId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOvrPlatformUtilsLibrary, nullptr, "Conv_Int64ToOvrId", nullptr, nullptr, Z_Construct_UFunction_UOvrPlatformUtilsLibrary_Conv_Int64ToOvrId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPlatformUtilsLibrary_Conv_Int64ToOvrId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOvrPlatformUtilsLibrary_Conv_Int64ToOvrId_Statics::OvrPlatformUtilsLibrary_eventConv_Int64ToOvrId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPlatformUtilsLibrary_Conv_Int64ToOvrId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOvrPlatformUtilsLibrary_Conv_Int64ToOvrId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOvrPlatformUtilsLibrary_Conv_Int64ToOvrId_Statics::OvrPlatformUtilsLibrary_eventConv_Int64ToOvrId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOvrPlatformUtilsLibrary_Conv_Int64ToOvrId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOvrPlatformUtilsLibrary_Conv_Int64ToOvrId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOvrPlatformUtilsLibrary::execConv_Int64ToOvrId)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_Id);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOvrId*)Z_Param__Result=UOvrPlatformUtilsLibrary::Conv_Int64ToOvrId(Z_Param_Id);
	P_NATIVE_END;
}
// End Class UOvrPlatformUtilsLibrary Function Conv_Int64ToOvrId

// Begin Class UOvrPlatformUtilsLibrary Function Conv_OvrIdToString
struct Z_Construct_UFunction_UOvrPlatformUtilsLibrary_Conv_OvrIdToString_Statics
{
	struct OvrPlatformUtilsLibrary_eventConv_OvrIdToString_Parms
	{
		FOvrId Id;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "OculusPlatform|Utils" },
		{ "Comment", "/**\n     * Function to auto-convert from FOculusId to FString.\n     */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToString (OvrId)" },
		{ "ModuleRelativePath", "Public/OVRPlatformUtils.h" },
		{ "ToolTip", "Function to auto-convert from FOculusId to FString." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPlatformUtilsLibrary_Conv_OvrIdToString_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPlatformUtilsLibrary_eventConv_OvrIdToString_Parms, Id), Z_Construct_UScriptStruct_FOvrId, METADATA_PARAMS(0, nullptr) }; // 3320909238
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOvrPlatformUtilsLibrary_Conv_OvrIdToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPlatformUtilsLibrary_eventConv_OvrIdToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOvrPlatformUtilsLibrary_Conv_OvrIdToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPlatformUtilsLibrary_Conv_OvrIdToString_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPlatformUtilsLibrary_Conv_OvrIdToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPlatformUtilsLibrary_Conv_OvrIdToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOvrPlatformUtilsLibrary_Conv_OvrIdToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOvrPlatformUtilsLibrary, nullptr, "Conv_OvrIdToString", nullptr, nullptr, Z_Construct_UFunction_UOvrPlatformUtilsLibrary_Conv_OvrIdToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPlatformUtilsLibrary_Conv_OvrIdToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOvrPlatformUtilsLibrary_Conv_OvrIdToString_Statics::OvrPlatformUtilsLibrary_eventConv_OvrIdToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPlatformUtilsLibrary_Conv_OvrIdToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOvrPlatformUtilsLibrary_Conv_OvrIdToString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOvrPlatformUtilsLibrary_Conv_OvrIdToString_Statics::OvrPlatformUtilsLibrary_eventConv_OvrIdToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOvrPlatformUtilsLibrary_Conv_OvrIdToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOvrPlatformUtilsLibrary_Conv_OvrIdToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOvrPlatformUtilsLibrary::execConv_OvrIdToString)
{
	P_GET_STRUCT(FOvrId,Z_Param_Id);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOvrPlatformUtilsLibrary::Conv_OvrIdToString(Z_Param_Id);
	P_NATIVE_END;
}
// End Class UOvrPlatformUtilsLibrary Function Conv_OvrIdToString

// Begin Class UOvrPlatformUtilsLibrary Function EqualEqual_OvrIdOvrId
struct Z_Construct_UFunction_UOvrPlatformUtilsLibrary_EqualEqual_OvrIdOvrId_Statics
{
	struct OvrPlatformUtilsLibrary_eventEqualEqual_OvrIdOvrId_Parms
	{
		FOvrId A;
		FOvrId B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusPlatform|Utils" },
		{ "Comment", "/**\n     * Utility to compare two Oculus ids in blueprint.\n     */" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal OvrId" },
		{ "Keywords", "== equal" },
		{ "ModuleRelativePath", "Public/OVRPlatformUtils.h" },
		{ "ToolTip", "Utility to compare two Oculus ids in blueprint." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPlatformUtilsLibrary_EqualEqual_OvrIdOvrId_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPlatformUtilsLibrary_eventEqualEqual_OvrIdOvrId_Parms, A), Z_Construct_UScriptStruct_FOvrId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 3320909238
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrPlatformUtilsLibrary_EqualEqual_OvrIdOvrId_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPlatformUtilsLibrary_eventEqualEqual_OvrIdOvrId_Parms, B), Z_Construct_UScriptStruct_FOvrId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 3320909238
void Z_Construct_UFunction_UOvrPlatformUtilsLibrary_EqualEqual_OvrIdOvrId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OvrPlatformUtilsLibrary_eventEqualEqual_OvrIdOvrId_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOvrPlatformUtilsLibrary_EqualEqual_OvrIdOvrId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OvrPlatformUtilsLibrary_eventEqualEqual_OvrIdOvrId_Parms), &Z_Construct_UFunction_UOvrPlatformUtilsLibrary_EqualEqual_OvrIdOvrId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOvrPlatformUtilsLibrary_EqualEqual_OvrIdOvrId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPlatformUtilsLibrary_EqualEqual_OvrIdOvrId_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPlatformUtilsLibrary_EqualEqual_OvrIdOvrId_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPlatformUtilsLibrary_EqualEqual_OvrIdOvrId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPlatformUtilsLibrary_EqualEqual_OvrIdOvrId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOvrPlatformUtilsLibrary_EqualEqual_OvrIdOvrId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOvrPlatformUtilsLibrary, nullptr, "EqualEqual_OvrIdOvrId", nullptr, nullptr, Z_Construct_UFunction_UOvrPlatformUtilsLibrary_EqualEqual_OvrIdOvrId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPlatformUtilsLibrary_EqualEqual_OvrIdOvrId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOvrPlatformUtilsLibrary_EqualEqual_OvrIdOvrId_Statics::OvrPlatformUtilsLibrary_eventEqualEqual_OvrIdOvrId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPlatformUtilsLibrary_EqualEqual_OvrIdOvrId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOvrPlatformUtilsLibrary_EqualEqual_OvrIdOvrId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOvrPlatformUtilsLibrary_EqualEqual_OvrIdOvrId_Statics::OvrPlatformUtilsLibrary_eventEqualEqual_OvrIdOvrId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOvrPlatformUtilsLibrary_EqualEqual_OvrIdOvrId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOvrPlatformUtilsLibrary_EqualEqual_OvrIdOvrId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOvrPlatformUtilsLibrary::execEqualEqual_OvrIdOvrId)
{
	P_GET_STRUCT_REF(FOvrId,Z_Param_Out_A);
	P_GET_STRUCT_REF(FOvrId,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOvrPlatformUtilsLibrary::EqualEqual_OvrIdOvrId(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// End Class UOvrPlatformUtilsLibrary Function EqualEqual_OvrIdOvrId

// Begin Class UOvrPlatformUtilsLibrary Function MakeRandomSessionId
struct Z_Construct_UFunction_UOvrPlatformUtilsLibrary_MakeRandomSessionId_Statics
{
	struct OvrPlatformUtilsLibrary_eventMakeRandomSessionId_Parms
	{
		FString Prefix;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusPlatform|Utils" },
		{ "Comment", "/**\n     * Builds a random id.\n     * @param Prefix - The prefix to use for the random symbol.\n     * @return The supplied prefix followed by a 9 digit random number.\n     */" },
		{ "ModuleRelativePath", "Public/OVRPlatformUtils.h" },
		{ "ToolTip", "Builds a random id.\n@param Prefix - The prefix to use for the random symbol.\n@return The supplied prefix followed by a 9 digit random number." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOvrPlatformUtilsLibrary_MakeRandomSessionId_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPlatformUtilsLibrary_eventMakeRandomSessionId_Parms, Prefix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Prefix_MetaData), NewProp_Prefix_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOvrPlatformUtilsLibrary_MakeRandomSessionId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrPlatformUtilsLibrary_eventMakeRandomSessionId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOvrPlatformUtilsLibrary_MakeRandomSessionId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPlatformUtilsLibrary_MakeRandomSessionId_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrPlatformUtilsLibrary_MakeRandomSessionId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPlatformUtilsLibrary_MakeRandomSessionId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOvrPlatformUtilsLibrary_MakeRandomSessionId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOvrPlatformUtilsLibrary, nullptr, "MakeRandomSessionId", nullptr, nullptr, Z_Construct_UFunction_UOvrPlatformUtilsLibrary_MakeRandomSessionId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPlatformUtilsLibrary_MakeRandomSessionId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOvrPlatformUtilsLibrary_MakeRandomSessionId_Statics::OvrPlatformUtilsLibrary_eventMakeRandomSessionId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrPlatformUtilsLibrary_MakeRandomSessionId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOvrPlatformUtilsLibrary_MakeRandomSessionId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOvrPlatformUtilsLibrary_MakeRandomSessionId_Statics::OvrPlatformUtilsLibrary_eventMakeRandomSessionId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOvrPlatformUtilsLibrary_MakeRandomSessionId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOvrPlatformUtilsLibrary_MakeRandomSessionId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOvrPlatformUtilsLibrary::execMakeRandomSessionId)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOvrPlatformUtilsLibrary::MakeRandomSessionId(Z_Param_Prefix);
	P_NATIVE_END;
}
// End Class UOvrPlatformUtilsLibrary Function MakeRandomSessionId

// Begin Class UOvrPlatformUtilsLibrary
void UOvrPlatformUtilsLibrary::StaticRegisterNativesUOvrPlatformUtilsLibrary()
{
	UClass* Class = UOvrPlatformUtilsLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Conv_Int64ToOvrId", &UOvrPlatformUtilsLibrary::execConv_Int64ToOvrId },
		{ "Conv_OvrIdToString", &UOvrPlatformUtilsLibrary::execConv_OvrIdToString },
		{ "EqualEqual_OvrIdOvrId", &UOvrPlatformUtilsLibrary::execEqualEqual_OvrIdOvrId },
		{ "MakeRandomSessionId", &UOvrPlatformUtilsLibrary::execMakeRandomSessionId },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOvrPlatformUtilsLibrary);
UClass* Z_Construct_UClass_UOvrPlatformUtilsLibrary_NoRegister()
{
	return UOvrPlatformUtilsLibrary::StaticClass();
}
struct Z_Construct_UClass_UOvrPlatformUtilsLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OVRPlatformUtils.h" },
		{ "ModuleRelativePath", "Public/OVRPlatformUtils.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOvrPlatformUtilsLibrary_Conv_Int64ToOvrId, "Conv_Int64ToOvrId" }, // 3586548308
		{ &Z_Construct_UFunction_UOvrPlatformUtilsLibrary_Conv_OvrIdToString, "Conv_OvrIdToString" }, // 4180229645
		{ &Z_Construct_UFunction_UOvrPlatformUtilsLibrary_EqualEqual_OvrIdOvrId, "EqualEqual_OvrIdOvrId" }, // 996622188
		{ &Z_Construct_UFunction_UOvrPlatformUtilsLibrary_MakeRandomSessionId, "MakeRandomSessionId" }, // 2216487405
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOvrPlatformUtilsLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOvrPlatformUtilsLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OVRPlatform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOvrPlatformUtilsLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOvrPlatformUtilsLibrary_Statics::ClassParams = {
	&UOvrPlatformUtilsLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOvrPlatformUtilsLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UOvrPlatformUtilsLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOvrPlatformUtilsLibrary()
{
	if (!Z_Registration_Info_UClass_UOvrPlatformUtilsLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOvrPlatformUtilsLibrary.OuterSingleton, Z_Construct_UClass_UOvrPlatformUtilsLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOvrPlatformUtilsLibrary.OuterSingleton;
}
template<> OVRPLATFORM_API UClass* StaticClass<UOvrPlatformUtilsLibrary>()
{
	return UOvrPlatformUtilsLibrary::StaticClass();
}
UOvrPlatformUtilsLibrary::UOvrPlatformUtilsLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOvrPlatformUtilsLibrary);
UOvrPlatformUtilsLibrary::~UOvrPlatformUtilsLibrary() {}
// End Class UOvrPlatformUtilsLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Thirdparty_OculusPlatformSDK_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformUtils_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOvrPlatformUtilsLibrary, UOvrPlatformUtilsLibrary::StaticClass, TEXT("UOvrPlatformUtilsLibrary"), &Z_Registration_Info_UClass_UOvrPlatformUtilsLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOvrPlatformUtilsLibrary), 3892596714U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Thirdparty_OculusPlatformSDK_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformUtils_h_3809949635(TEXT("/Script/OVRPlatform"),
	Z_CompiledInDeferFile_FID_Thirdparty_OculusPlatformSDK_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Thirdparty_OculusPlatformSDK_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformUtils_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
