// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OVRPlatform/Public/OVRPlatformFunctions.h"
#include "OVRPlatform/Public/OVRPlatformModels.h"
#include "OVRPlatform/Public/OVRPlatformOptions.h"
#include "OVRPlatform/Public/OVRPlatformTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOVRPlatformFunctions() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
OVRPLATFORM_API UClass* Z_Construct_UClass_UOvrFunctionsBlueprintLibrary();
OVRPLATFORM_API UClass* Z_Construct_UClass_UOvrFunctionsBlueprintLibrary_NoRegister();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrLaunchResult();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrSystemVoipStatus();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrVoipBitrate();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrVoipDtxState();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrVoipMuteState();
OVRPLATFORM_API UEnum* Z_Construct_UEnum_OVRPlatform_EOvrVoipSampleRate();
OVRPLATFORM_API UFunction* Z_Construct_UDelegateFunction_OVRPlatform_OvrVoipFilterCallback__DelegateSignature();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrId();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrLaunchDetails();
OVRPLATFORM_API UScriptStruct* Z_Construct_UScriptStruct_FOvrVoipOptions();
UPackage* Z_Construct_UPackage__Script_OVRPlatform();
// End Cross Module References

// Begin Delegate FOvrVoipFilterCallback
struct Z_Construct_UDelegateFunction_OVRPlatform_OvrVoipFilterCallback__DelegateSignature_Statics
{
	struct _Script_OVRPlatform_eventOvrVoipFilterCallback_Parms
	{
		TArray<int32> pcmData;
		int32 frequency;
		int32 numChannels;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OVRPlatformFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_pcmData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_pcmData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_frequency;
	static const UECodeGen_Private::FIntPropertyParams NewProp_numChannels;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OVRPlatform_OvrVoipFilterCallback__DelegateSignature_Statics::NewProp_pcmData_Inner = { "pcmData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OVRPlatform_OvrVoipFilterCallback__DelegateSignature_Statics::NewProp_pcmData = { "pcmData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OVRPlatform_eventOvrVoipFilterCallback_Parms, pcmData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OVRPlatform_OvrVoipFilterCallback__DelegateSignature_Statics::NewProp_frequency = { "frequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OVRPlatform_eventOvrVoipFilterCallback_Parms, frequency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OVRPlatform_OvrVoipFilterCallback__DelegateSignature_Statics::NewProp_numChannels = { "numChannels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OVRPlatform_eventOvrVoipFilterCallback_Parms, numChannels), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OVRPlatform_OvrVoipFilterCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OVRPlatform_OvrVoipFilterCallback__DelegateSignature_Statics::NewProp_pcmData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OVRPlatform_OvrVoipFilterCallback__DelegateSignature_Statics::NewProp_pcmData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OVRPlatform_OvrVoipFilterCallback__DelegateSignature_Statics::NewProp_frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OVRPlatform_OvrVoipFilterCallback__DelegateSignature_Statics::NewProp_numChannels,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OVRPlatform_OvrVoipFilterCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OVRPlatform_OvrVoipFilterCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OVRPlatform, nullptr, "OvrVoipFilterCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OVRPlatform_OvrVoipFilterCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OVRPlatform_OvrVoipFilterCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OVRPlatform_OvrVoipFilterCallback__DelegateSignature_Statics::_Script_OVRPlatform_eventOvrVoipFilterCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OVRPlatform_OvrVoipFilterCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OVRPlatform_OvrVoipFilterCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OVRPlatform_OvrVoipFilterCallback__DelegateSignature_Statics::_Script_OVRPlatform_eventOvrVoipFilterCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OVRPlatform_OvrVoipFilterCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OVRPlatform_OvrVoipFilterCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOvrVoipFilterCallback_DelegateWrapper(const FScriptDelegate& OvrVoipFilterCallback, const TArray<int32>& pcmData, int32 frequency, int32 numChannels)
{
	struct _Script_OVRPlatform_eventOvrVoipFilterCallback_Parms
	{
		TArray<int32> pcmData;
		int32 frequency;
		int32 numChannels;
	};
	_Script_OVRPlatform_eventOvrVoipFilterCallback_Parms Parms;
	Parms.pcmData=pcmData;
	Parms.frequency=frequency;
	Parms.numChannels=numChannels;
	OvrVoipFilterCallback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOvrVoipFilterCallback

// Begin Class UOvrFunctionsBlueprintLibrary Function ApplicationLifecycle_GetLaunchDetails
struct Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_ApplicationLifecycle_GetLaunchDetails_Statics
{
	struct OvrFunctionsBlueprintLibrary_eventApplicationLifecycle_GetLaunchDetails_Parms
	{
		FOvrLaunchDetails ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OvrPlatform|ApplicationLifecycle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Returns information about how the application was started. This function provides details about the launch intent,\n     * such as the type of intent field FOvrLaunchDetails::LaunchType and any additional data that was passed along with it.\n     * By calling this function, you can gain insight into how your application was launched and take appropriate action based on that information.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns information about how the application was started. This function provides details about the launch intent,\nsuch as the type of intent field FOvrLaunchDetails::LaunchType and any additional data that was passed along with it.\nBy calling this function, you can gain insight into how your application was launched and take appropriate action based on that information." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_ApplicationLifecycle_GetLaunchDetails_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrFunctionsBlueprintLibrary_eventApplicationLifecycle_GetLaunchDetails_Parms, ReturnValue), Z_Construct_UScriptStruct_FOvrLaunchDetails, METADATA_PARAMS(0, nullptr) }; // 534553392
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_ApplicationLifecycle_GetLaunchDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_ApplicationLifecycle_GetLaunchDetails_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_ApplicationLifecycle_GetLaunchDetails_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_ApplicationLifecycle_GetLaunchDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOvrFunctionsBlueprintLibrary, nullptr, "ApplicationLifecycle_GetLaunchDetails", nullptr, nullptr, Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_ApplicationLifecycle_GetLaunchDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_ApplicationLifecycle_GetLaunchDetails_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_ApplicationLifecycle_GetLaunchDetails_Statics::OvrFunctionsBlueprintLibrary_eventApplicationLifecycle_GetLaunchDetails_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_ApplicationLifecycle_GetLaunchDetails_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_ApplicationLifecycle_GetLaunchDetails_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_ApplicationLifecycle_GetLaunchDetails_Statics::OvrFunctionsBlueprintLibrary_eventApplicationLifecycle_GetLaunchDetails_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_ApplicationLifecycle_GetLaunchDetails()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_ApplicationLifecycle_GetLaunchDetails_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOvrFunctionsBlueprintLibrary::execApplicationLifecycle_GetLaunchDetails)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOvrLaunchDetails*)Z_Param__Result=UOvrFunctionsBlueprintLibrary::ApplicationLifecycle_GetLaunchDetails();
	P_NATIVE_END;
}
// End Class UOvrFunctionsBlueprintLibrary Function ApplicationLifecycle_GetLaunchDetails

// Begin Class UOvrFunctionsBlueprintLibrary Function ApplicationLifecycle_LogDeeplinkResult
struct Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_ApplicationLifecycle_LogDeeplinkResult_Statics
{
	struct OvrFunctionsBlueprintLibrary_eventApplicationLifecycle_LogDeeplinkResult_Parms
	{
		FString TrackingID;
		EOvrLaunchResult Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OvrPlatform|ApplicationLifecycle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Logs if the user successfully deeplinked to a destination. This function takes two parameters: a string tracking ID and a launch result.\n     * The tracking ID is used to identify the specific deeplink attempt, while the launch result indicates whether the deeplink was EOvrLaunchResult::Success or not.\n     * By logging this information, you can track the effectiveness of your deeplinking efforts and make adjustments as needed.\n     * @param TrackingID - The Tracking ID is a unique identifier assigned to each deeplink attempt. It allows developers to track the success or failure of individual deeplink attempts and gain insights into the effectiveness of their deeplinking efforts.\n     * @param Result - An enum that indicates the outcome of an attempt to launch this application through a deeplink, including whether the attempt was EOvrLaunchResult::Success or not, and if not, the specific reasons for the failure.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Logs if the user successfully deeplinked to a destination. This function takes two parameters: a string tracking ID and a launch result.\nThe tracking ID is used to identify the specific deeplink attempt, while the launch result indicates whether the deeplink was EOvrLaunchResult::Success or not.\nBy logging this information, you can track the effectiveness of your deeplinking efforts and make adjustments as needed.\n@param TrackingID - The Tracking ID is a unique identifier assigned to each deeplink attempt. It allows developers to track the success or failure of individual deeplink attempts and gain insights into the effectiveness of their deeplinking efforts.\n@param Result - An enum that indicates the outcome of an attempt to launch this application through a deeplink, including whether the attempt was EOvrLaunchResult::Success or not, and if not, the specific reasons for the failure." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TrackingID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_ApplicationLifecycle_LogDeeplinkResult_Statics::NewProp_TrackingID = { "TrackingID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrFunctionsBlueprintLibrary_eventApplicationLifecycle_LogDeeplinkResult_Parms, TrackingID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_ApplicationLifecycle_LogDeeplinkResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_ApplicationLifecycle_LogDeeplinkResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrFunctionsBlueprintLibrary_eventApplicationLifecycle_LogDeeplinkResult_Parms, Result), Z_Construct_UEnum_OVRPlatform_EOvrLaunchResult, METADATA_PARAMS(0, nullptr) }; // 2115644417
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_ApplicationLifecycle_LogDeeplinkResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_ApplicationLifecycle_LogDeeplinkResult_Statics::NewProp_TrackingID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_ApplicationLifecycle_LogDeeplinkResult_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_ApplicationLifecycle_LogDeeplinkResult_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_ApplicationLifecycle_LogDeeplinkResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_ApplicationLifecycle_LogDeeplinkResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOvrFunctionsBlueprintLibrary, nullptr, "ApplicationLifecycle_LogDeeplinkResult", nullptr, nullptr, Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_ApplicationLifecycle_LogDeeplinkResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_ApplicationLifecycle_LogDeeplinkResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_ApplicationLifecycle_LogDeeplinkResult_Statics::OvrFunctionsBlueprintLibrary_eventApplicationLifecycle_LogDeeplinkResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_ApplicationLifecycle_LogDeeplinkResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_ApplicationLifecycle_LogDeeplinkResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_ApplicationLifecycle_LogDeeplinkResult_Statics::OvrFunctionsBlueprintLibrary_eventApplicationLifecycle_LogDeeplinkResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_ApplicationLifecycle_LogDeeplinkResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_ApplicationLifecycle_LogDeeplinkResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOvrFunctionsBlueprintLibrary::execApplicationLifecycle_LogDeeplinkResult)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_TrackingID);
	P_GET_ENUM(EOvrLaunchResult,Z_Param_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOvrFunctionsBlueprintLibrary::ApplicationLifecycle_LogDeeplinkResult(Z_Param_TrackingID,EOvrLaunchResult(Z_Param_Result));
	P_NATIVE_END;
}
// End Class UOvrFunctionsBlueprintLibrary Function ApplicationLifecycle_LogDeeplinkResult

// Begin Class UOvrFunctionsBlueprintLibrary Function Platform_GetLoggedInUserID
struct Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_GetLoggedInUserID_Statics
{
	struct OvrFunctionsBlueprintLibrary_eventPlatform_GetLoggedInUserID_Parms
	{
		FOvrId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OvrPlatform|Platform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Retrieves the unique identifier for the currently logged-in user.\n/// Returns The user's ID if logged in, otherwise returns a zero ID indicating no user is logged in.\n" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves the unique identifier for the currently logged-in user.\nReturns The user's ID if logged in, otherwise returns a zero ID indicating no user is logged in." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_GetLoggedInUserID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrFunctionsBlueprintLibrary_eventPlatform_GetLoggedInUserID_Parms, ReturnValue), Z_Construct_UScriptStruct_FOvrId, METADATA_PARAMS(0, nullptr) }; // 3472719273
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_GetLoggedInUserID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_GetLoggedInUserID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_GetLoggedInUserID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_GetLoggedInUserID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOvrFunctionsBlueprintLibrary, nullptr, "Platform_GetLoggedInUserID", nullptr, nullptr, Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_GetLoggedInUserID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_GetLoggedInUserID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_GetLoggedInUserID_Statics::OvrFunctionsBlueprintLibrary_eventPlatform_GetLoggedInUserID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_GetLoggedInUserID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_GetLoggedInUserID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_GetLoggedInUserID_Statics::OvrFunctionsBlueprintLibrary_eventPlatform_GetLoggedInUserID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_GetLoggedInUserID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_GetLoggedInUserID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOvrFunctionsBlueprintLibrary::execPlatform_GetLoggedInUserID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOvrId*)Z_Param__Result=UOvrFunctionsBlueprintLibrary::Platform_GetLoggedInUserID();
	P_NATIVE_END;
}
// End Class UOvrFunctionsBlueprintLibrary Function Platform_GetLoggedInUserID

// Begin Class UOvrFunctionsBlueprintLibrary Function Platform_GetLoggedInUserLocale
struct Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_GetLoggedInUserLocale_Statics
{
	struct OvrFunctionsBlueprintLibrary_eventPlatform_GetLoggedInUserLocale_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OvrPlatform|Platform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Fetches the locale of the currently logged-in user.\n/// The locale format conforms to BCP47 standards.\n/// Returns The user's locale as a string if available, otherwise an empty string if there's an error or no user is logged in.\n/// More about BCP47 at [here](https://tools.ietf.org/html/bcp47).\n" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fetches the locale of the currently logged-in user.\nThe locale format conforms to BCP47 standards.\nReturns The user's locale as a string if available, otherwise an empty string if there's an error or no user is logged in.\nMore about BCP47 at [here](https:tools.ietf.org/html/bcp47)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_GetLoggedInUserLocale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrFunctionsBlueprintLibrary_eventPlatform_GetLoggedInUserLocale_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_GetLoggedInUserLocale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_GetLoggedInUserLocale_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_GetLoggedInUserLocale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_GetLoggedInUserLocale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOvrFunctionsBlueprintLibrary, nullptr, "Platform_GetLoggedInUserLocale", nullptr, nullptr, Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_GetLoggedInUserLocale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_GetLoggedInUserLocale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_GetLoggedInUserLocale_Statics::OvrFunctionsBlueprintLibrary_eventPlatform_GetLoggedInUserLocale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_GetLoggedInUserLocale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_GetLoggedInUserLocale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_GetLoggedInUserLocale_Statics::OvrFunctionsBlueprintLibrary_eventPlatform_GetLoggedInUserLocale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_GetLoggedInUserLocale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_GetLoggedInUserLocale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOvrFunctionsBlueprintLibrary::execPlatform_GetLoggedInUserLocale)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOvrFunctionsBlueprintLibrary::Platform_GetLoggedInUserLocale();
	P_NATIVE_END;
}
// End Class UOvrFunctionsBlueprintLibrary Function Platform_GetLoggedInUserLocale

// Begin Class UOvrFunctionsBlueprintLibrary Function Platform_IsInitialized
struct Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_IsInitialized_Statics
{
	struct OvrFunctionsBlueprintLibrary_eventPlatform_IsInitialized_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OvrPlatform|Platform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Checks if the Oculus Platform SDK has been successfully initialized.\n/// Returns True if the SDK is initialized, otherwise False.\n" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the Oculus Platform SDK has been successfully initialized.\nReturns True if the SDK is initialized, otherwise False." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_IsInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OvrFunctionsBlueprintLibrary_eventPlatform_IsInitialized_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_IsInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OvrFunctionsBlueprintLibrary_eventPlatform_IsInitialized_Parms), &Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_IsInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_IsInitialized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_IsInitialized_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_IsInitialized_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_IsInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOvrFunctionsBlueprintLibrary, nullptr, "Platform_IsInitialized", nullptr, nullptr, Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_IsInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_IsInitialized_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_IsInitialized_Statics::OvrFunctionsBlueprintLibrary_eventPlatform_IsInitialized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_IsInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_IsInitialized_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_IsInitialized_Statics::OvrFunctionsBlueprintLibrary_eventPlatform_IsInitialized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_IsInitialized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_IsInitialized_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOvrFunctionsBlueprintLibrary::execPlatform_IsInitialized)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOvrFunctionsBlueprintLibrary::Platform_IsInitialized();
	P_NATIVE_END;
}
// End Class UOvrFunctionsBlueprintLibrary Function Platform_IsInitialized

// Begin Class UOvrFunctionsBlueprintLibrary Function Platform_SetDeveloperAccessToken
struct Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_SetDeveloperAccessToken_Statics
{
	struct OvrFunctionsBlueprintLibrary_eventPlatform_SetDeveloperAccessToken_Parms
	{
		FString AccessToken;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OvrPlatform|Platform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// Sets the developer access token used for authenticating API requests.\n/// @param AccessToken The developer access token as a string.\n" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the developer access token used for authenticating API requests.\n@param AccessToken The developer access token as a string." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AccessToken;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_SetDeveloperAccessToken_Statics::NewProp_AccessToken = { "AccessToken", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrFunctionsBlueprintLibrary_eventPlatform_SetDeveloperAccessToken_Parms, AccessToken), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_SetDeveloperAccessToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_SetDeveloperAccessToken_Statics::NewProp_AccessToken,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_SetDeveloperAccessToken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_SetDeveloperAccessToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOvrFunctionsBlueprintLibrary, nullptr, "Platform_SetDeveloperAccessToken", nullptr, nullptr, Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_SetDeveloperAccessToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_SetDeveloperAccessToken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_SetDeveloperAccessToken_Statics::OvrFunctionsBlueprintLibrary_eventPlatform_SetDeveloperAccessToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_SetDeveloperAccessToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_SetDeveloperAccessToken_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_SetDeveloperAccessToken_Statics::OvrFunctionsBlueprintLibrary_eventPlatform_SetDeveloperAccessToken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_SetDeveloperAccessToken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_SetDeveloperAccessToken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOvrFunctionsBlueprintLibrary::execPlatform_SetDeveloperAccessToken)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AccessToken);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOvrFunctionsBlueprintLibrary::Platform_SetDeveloperAccessToken(Z_Param_AccessToken);
	P_NATIVE_END;
}
// End Class UOvrFunctionsBlueprintLibrary Function Platform_SetDeveloperAccessToken

// Begin Class UOvrFunctionsBlueprintLibrary Function Voip_Accept
struct Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Accept_Statics
{
	struct OvrFunctionsBlueprintLibrary_eventVoip_Accept_Parms
	{
		FOvrId UserID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OvrPlatform|Voip" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Accepts a VoIP connection from a given user.\n     * @param UserID - The ID of the user to accept the VoIP connection from.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Accepts a VoIP connection from a given user.\n@param UserID - The ID of the user to accept the VoIP connection from." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Accept_Statics::NewProp_UserID = { "UserID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrFunctionsBlueprintLibrary_eventVoip_Accept_Parms, UserID), Z_Construct_UScriptStruct_FOvrId, METADATA_PARAMS(0, nullptr) }; // 3472719273
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Accept_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Accept_Statics::NewProp_UserID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Accept_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Accept_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOvrFunctionsBlueprintLibrary, nullptr, "Voip_Accept", nullptr, nullptr, Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Accept_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Accept_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Accept_Statics::OvrFunctionsBlueprintLibrary_eventVoip_Accept_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Accept_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Accept_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Accept_Statics::OvrFunctionsBlueprintLibrary_eventVoip_Accept_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Accept()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Accept_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOvrFunctionsBlueprintLibrary::execVoip_Accept)
{
	P_GET_STRUCT(FOvrId,Z_Param_UserID);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOvrFunctionsBlueprintLibrary::Voip_Accept(Z_Param_UserID);
	P_NATIVE_END;
}
// End Class UOvrFunctionsBlueprintLibrary Function Voip_Accept

// Begin Class UOvrFunctionsBlueprintLibrary Function Voip_GetIsConnectionUsingDtx
struct Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetIsConnectionUsingDtx_Statics
{
	struct OvrFunctionsBlueprintLibrary_eventVoip_GetIsConnectionUsingDtx_Parms
	{
		FOvrId PeerID;
		EOvrVoipDtxState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OvrPlatform|Voip" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Gets whether or not a voice connection is using discontinuous transmission (DTX).\n     * Both sides must set to using DTX when their connection is established in order for this\n     * to be true. Returns unknown if there is no connection.\n     * @param PeerID - The ID of the peer whose voice connection's DTX status is being queried.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets whether or not a voice connection is using discontinuous transmission (DTX).\nBoth sides must set to using DTX when their connection is established in order for this\nto be true. Returns unknown if there is no connection.\n@param PeerID - The ID of the peer whose voice connection's DTX status is being queried." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PeerID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetIsConnectionUsingDtx_Statics::NewProp_PeerID = { "PeerID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrFunctionsBlueprintLibrary_eventVoip_GetIsConnectionUsingDtx_Parms, PeerID), Z_Construct_UScriptStruct_FOvrId, METADATA_PARAMS(0, nullptr) }; // 3472719273
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetIsConnectionUsingDtx_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetIsConnectionUsingDtx_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrFunctionsBlueprintLibrary_eventVoip_GetIsConnectionUsingDtx_Parms, ReturnValue), Z_Construct_UEnum_OVRPlatform_EOvrVoipDtxState, METADATA_PARAMS(0, nullptr) }; // 2850649278
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetIsConnectionUsingDtx_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetIsConnectionUsingDtx_Statics::NewProp_PeerID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetIsConnectionUsingDtx_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetIsConnectionUsingDtx_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetIsConnectionUsingDtx_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetIsConnectionUsingDtx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOvrFunctionsBlueprintLibrary, nullptr, "Voip_GetIsConnectionUsingDtx", nullptr, nullptr, Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetIsConnectionUsingDtx_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetIsConnectionUsingDtx_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetIsConnectionUsingDtx_Statics::OvrFunctionsBlueprintLibrary_eventVoip_GetIsConnectionUsingDtx_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetIsConnectionUsingDtx_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetIsConnectionUsingDtx_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetIsConnectionUsingDtx_Statics::OvrFunctionsBlueprintLibrary_eventVoip_GetIsConnectionUsingDtx_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetIsConnectionUsingDtx()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetIsConnectionUsingDtx_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOvrFunctionsBlueprintLibrary::execVoip_GetIsConnectionUsingDtx)
{
	P_GET_STRUCT(FOvrId,Z_Param_PeerID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EOvrVoipDtxState*)Z_Param__Result=UOvrFunctionsBlueprintLibrary::Voip_GetIsConnectionUsingDtx(Z_Param_PeerID);
	P_NATIVE_END;
}
// End Class UOvrFunctionsBlueprintLibrary Function Voip_GetIsConnectionUsingDtx

// Begin Class UOvrFunctionsBlueprintLibrary Function Voip_GetLocalBitrate
struct Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetLocalBitrate_Statics
{
	struct OvrFunctionsBlueprintLibrary_eventVoip_GetLocalBitrate_Parms
	{
		FOvrId PeerID;
		EOvrVoipBitrate ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OvrPlatform|Voip" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Gets the current local bitrate used for the connection to the specified user.  This is set\n     * by the current client. Returns unknown if there is no connection.\n     * @param PeerID - The ID of the peer whose local bitrate is being queried.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current local bitrate used for the connection to the specified user.  This is set\nby the current client. Returns unknown if there is no connection.\n@param PeerID - The ID of the peer whose local bitrate is being queried." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PeerID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetLocalBitrate_Statics::NewProp_PeerID = { "PeerID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrFunctionsBlueprintLibrary_eventVoip_GetLocalBitrate_Parms, PeerID), Z_Construct_UScriptStruct_FOvrId, METADATA_PARAMS(0, nullptr) }; // 3472719273
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetLocalBitrate_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetLocalBitrate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrFunctionsBlueprintLibrary_eventVoip_GetLocalBitrate_Parms, ReturnValue), Z_Construct_UEnum_OVRPlatform_EOvrVoipBitrate, METADATA_PARAMS(0, nullptr) }; // 51185622
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetLocalBitrate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetLocalBitrate_Statics::NewProp_PeerID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetLocalBitrate_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetLocalBitrate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetLocalBitrate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetLocalBitrate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOvrFunctionsBlueprintLibrary, nullptr, "Voip_GetLocalBitrate", nullptr, nullptr, Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetLocalBitrate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetLocalBitrate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetLocalBitrate_Statics::OvrFunctionsBlueprintLibrary_eventVoip_GetLocalBitrate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetLocalBitrate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetLocalBitrate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetLocalBitrate_Statics::OvrFunctionsBlueprintLibrary_eventVoip_GetLocalBitrate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetLocalBitrate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetLocalBitrate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOvrFunctionsBlueprintLibrary::execVoip_GetLocalBitrate)
{
	P_GET_STRUCT(FOvrId,Z_Param_PeerID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EOvrVoipBitrate*)Z_Param__Result=UOvrFunctionsBlueprintLibrary::Voip_GetLocalBitrate(Z_Param_PeerID);
	P_NATIVE_END;
}
// End Class UOvrFunctionsBlueprintLibrary Function Voip_GetLocalBitrate

// Begin Class UOvrFunctionsBlueprintLibrary Function Voip_GetOutputBufferMaxSize
struct Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetOutputBufferMaxSize_Statics
{
	struct OvrFunctionsBlueprintLibrary_eventVoip_GetOutputBufferMaxSize_Parms
	{
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OvrPlatform|Voip" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Returns the size of the internal ringbuffer used by the voip system in elements.  This size is the maximum\n     * number of elements that can ever be returned by UOvrFunctionsBlueprintLibrary::Voip_GetPCM.\n     * \n     * \n     * This function can be safely called from any thread.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the size of the internal ringbuffer used by the voip system in elements.  This size is the maximum\nnumber of elements that can ever be returned by UOvrFunctionsBlueprintLibrary::Voip_GetPCM.\n\n\nThis function can be safely called from any thread." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetOutputBufferMaxSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrFunctionsBlueprintLibrary_eventVoip_GetOutputBufferMaxSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetOutputBufferMaxSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetOutputBufferMaxSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetOutputBufferMaxSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetOutputBufferMaxSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOvrFunctionsBlueprintLibrary, nullptr, "Voip_GetOutputBufferMaxSize", nullptr, nullptr, Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetOutputBufferMaxSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetOutputBufferMaxSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetOutputBufferMaxSize_Statics::OvrFunctionsBlueprintLibrary_eventVoip_GetOutputBufferMaxSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetOutputBufferMaxSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetOutputBufferMaxSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetOutputBufferMaxSize_Statics::OvrFunctionsBlueprintLibrary_eventVoip_GetOutputBufferMaxSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetOutputBufferMaxSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetOutputBufferMaxSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOvrFunctionsBlueprintLibrary::execVoip_GetOutputBufferMaxSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=UOvrFunctionsBlueprintLibrary::Voip_GetOutputBufferMaxSize();
	P_NATIVE_END;
}
// End Class UOvrFunctionsBlueprintLibrary Function Voip_GetOutputBufferMaxSize

// Begin Class UOvrFunctionsBlueprintLibrary Function Voip_GetPCMSize
struct Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetPCMSize_Statics
{
	struct OvrFunctionsBlueprintLibrary_eventVoip_GetPCMSize_Parms
	{
		FOvrId SenderID;
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OvrPlatform|Voip" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Returns the current number of audio samples available to read for the specified user.\n     * This function is inherently racy; it's possible that more data can be added between a\n     * call to this function and a subsequent call to UOvrFunctionsBlueprintLibrary::Voip_GetPCM.\n     * \n     * \n     * This function can be safely called from any thread.\n     * @param SenderID - The ID of the user to get the audio sample count for.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current number of audio samples available to read for the specified user.\nThis function is inherently racy; it's possible that more data can be added between a\ncall to this function and a subsequent call to UOvrFunctionsBlueprintLibrary::Voip_GetPCM.\n\n\nThis function can be safely called from any thread.\n@param SenderID - The ID of the user to get the audio sample count for." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SenderID;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetPCMSize_Statics::NewProp_SenderID = { "SenderID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrFunctionsBlueprintLibrary_eventVoip_GetPCMSize_Parms, SenderID), Z_Construct_UScriptStruct_FOvrId, METADATA_PARAMS(0, nullptr) }; // 3472719273
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetPCMSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrFunctionsBlueprintLibrary_eventVoip_GetPCMSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetPCMSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetPCMSize_Statics::NewProp_SenderID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetPCMSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetPCMSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetPCMSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOvrFunctionsBlueprintLibrary, nullptr, "Voip_GetPCMSize", nullptr, nullptr, Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetPCMSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetPCMSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetPCMSize_Statics::OvrFunctionsBlueprintLibrary_eventVoip_GetPCMSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetPCMSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetPCMSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetPCMSize_Statics::OvrFunctionsBlueprintLibrary_eventVoip_GetPCMSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetPCMSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetPCMSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOvrFunctionsBlueprintLibrary::execVoip_GetPCMSize)
{
	P_GET_STRUCT(FOvrId,Z_Param_SenderID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=UOvrFunctionsBlueprintLibrary::Voip_GetPCMSize(Z_Param_SenderID);
	P_NATIVE_END;
}
// End Class UOvrFunctionsBlueprintLibrary Function Voip_GetPCMSize

// Begin Class UOvrFunctionsBlueprintLibrary Function Voip_GetRemoteBitrate
struct Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetRemoteBitrate_Statics
{
	struct OvrFunctionsBlueprintLibrary_eventVoip_GetRemoteBitrate_Parms
	{
		FOvrId PeerID;
		EOvrVoipBitrate ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OvrPlatform|Voip" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Gets the current remote bitrate used for the connection to the specified user.  This is set\n     * by the client on the other side of the connection.  Returns unknown if there is no connection.\n     * @param PeerID - The ID of the peer whose remote bitrate is being queried.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current remote bitrate used for the connection to the specified user.  This is set\nby the client on the other side of the connection.  Returns unknown if there is no connection.\n@param PeerID - The ID of the peer whose remote bitrate is being queried." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PeerID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetRemoteBitrate_Statics::NewProp_PeerID = { "PeerID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrFunctionsBlueprintLibrary_eventVoip_GetRemoteBitrate_Parms, PeerID), Z_Construct_UScriptStruct_FOvrId, METADATA_PARAMS(0, nullptr) }; // 3472719273
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetRemoteBitrate_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetRemoteBitrate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrFunctionsBlueprintLibrary_eventVoip_GetRemoteBitrate_Parms, ReturnValue), Z_Construct_UEnum_OVRPlatform_EOvrVoipBitrate, METADATA_PARAMS(0, nullptr) }; // 51185622
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetRemoteBitrate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetRemoteBitrate_Statics::NewProp_PeerID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetRemoteBitrate_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetRemoteBitrate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetRemoteBitrate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetRemoteBitrate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOvrFunctionsBlueprintLibrary, nullptr, "Voip_GetRemoteBitrate", nullptr, nullptr, Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetRemoteBitrate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetRemoteBitrate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetRemoteBitrate_Statics::OvrFunctionsBlueprintLibrary_eventVoip_GetRemoteBitrate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetRemoteBitrate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetRemoteBitrate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetRemoteBitrate_Statics::OvrFunctionsBlueprintLibrary_eventVoip_GetRemoteBitrate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetRemoteBitrate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetRemoteBitrate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOvrFunctionsBlueprintLibrary::execVoip_GetRemoteBitrate)
{
	P_GET_STRUCT(FOvrId,Z_Param_PeerID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EOvrVoipBitrate*)Z_Param__Result=UOvrFunctionsBlueprintLibrary::Voip_GetRemoteBitrate(Z_Param_PeerID);
	P_NATIVE_END;
}
// End Class UOvrFunctionsBlueprintLibrary Function Voip_GetRemoteBitrate

// Begin Class UOvrFunctionsBlueprintLibrary Function Voip_GetSyncTimestamp
struct Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSyncTimestamp_Statics
{
	struct OvrFunctionsBlueprintLibrary_eventVoip_GetSyncTimestamp_Parms
	{
		FOvrId UserID;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OvrPlatform|Voip" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Returns a timestamp used for synchronizing audio samples sent to the\n     * given user with an external data stream.\n     * \n     * Timestamps associated with audio frames are implicitly transmitted to\n     * remote peers; on the receiving side, they can be obtained by using\n     * UOvrFunctionsBlueprintLibrary::Voip_GetPCMWithTimestamp.  UOvrFunctionsBlueprintLibrary::Voip_GetPCMWithTimestamp is used to fetch\n     * those timestamps on the sending side -- an application can insert the\n     * value returned by this function into each data packet and compare it to\n     * the value returned by GetPCMWithTimestamp() on the receiving side in\n     * order to determine the ordering of two events (sampling audio and\n     * composing a data packet).\n     * \n     * Note: the timestamp is generated by an unspecified clock; it's doesn't\n     * generally represent wall-clock time.  Use UOvrFunctionsBlueprintLibrary::Voip_GetSyncTimestampDifference\n     * to convert the difference between two timestamps to microseconds.\n     * \n     * This function assumes that a voice connection to the user already\n     * exists; it returns 0 if that isn't the case.\n     * @param UserID - he ID of the user to which the audio samples are being sent.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a timestamp used for synchronizing audio samples sent to the\ngiven user with an external data stream.\n\nTimestamps associated with audio frames are implicitly transmitted to\nremote peers; on the receiving side, they can be obtained by using\nUOvrFunctionsBlueprintLibrary::Voip_GetPCMWithTimestamp.  UOvrFunctionsBlueprintLibrary::Voip_GetPCMWithTimestamp is used to fetch\nthose timestamps on the sending side -- an application can insert the\nvalue returned by this function into each data packet and compare it to\nthe value returned by GetPCMWithTimestamp() on the receiving side in\norder to determine the ordering of two events (sampling audio and\ncomposing a data packet).\n\nNote: the timestamp is generated by an unspecified clock; it's doesn't\ngenerally represent wall-clock time.  Use UOvrFunctionsBlueprintLibrary::Voip_GetSyncTimestampDifference\nto convert the difference between two timestamps to microseconds.\n\nThis function assumes that a voice connection to the user already\nexists; it returns 0 if that isn't the case.\n@param UserID - he ID of the user to which the audio samples are being sent." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSyncTimestamp_Statics::NewProp_UserID = { "UserID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrFunctionsBlueprintLibrary_eventVoip_GetSyncTimestamp_Parms, UserID), Z_Construct_UScriptStruct_FOvrId, METADATA_PARAMS(0, nullptr) }; // 3472719273
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSyncTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrFunctionsBlueprintLibrary_eventVoip_GetSyncTimestamp_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSyncTimestamp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSyncTimestamp_Statics::NewProp_UserID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSyncTimestamp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSyncTimestamp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSyncTimestamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOvrFunctionsBlueprintLibrary, nullptr, "Voip_GetSyncTimestamp", nullptr, nullptr, Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSyncTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSyncTimestamp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSyncTimestamp_Statics::OvrFunctionsBlueprintLibrary_eventVoip_GetSyncTimestamp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSyncTimestamp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSyncTimestamp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSyncTimestamp_Statics::OvrFunctionsBlueprintLibrary_eventVoip_GetSyncTimestamp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSyncTimestamp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSyncTimestamp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOvrFunctionsBlueprintLibrary::execVoip_GetSyncTimestamp)
{
	P_GET_STRUCT(FOvrId,Z_Param_UserID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOvrFunctionsBlueprintLibrary::Voip_GetSyncTimestamp(Z_Param_UserID);
	P_NATIVE_END;
}
// End Class UOvrFunctionsBlueprintLibrary Function Voip_GetSyncTimestamp

// Begin Class UOvrFunctionsBlueprintLibrary Function Voip_GetSyncTimestampDifference
struct Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSyncTimestampDifference_Statics
{
	struct OvrFunctionsBlueprintLibrary_eventVoip_GetSyncTimestampDifference_Parms
	{
		int32 Lhs;
		int32 Rhs;
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OvrPlatform|Voip" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Calculates the difference between two sync timestamps, returned by\n     * either UOvrFunctionsBlueprintLibrary::Voip_GetSyncTimestamp or UOvrFunctionsBlueprintLibrary::Voip_GetPCMWithTimestamp,\n     * and converts it to microseconds.\n     * \n     * Return value will be negative if lhs is smaller than rhs, zero if both\n     * timestamps are the same, and positive otherwise.  The absolute value of\n     * the result is the time in microseconds between two sync timestamps.\n     * @param Lhs - The first sync timestamp to compare.\n     * @param Rhs - The second sync timestamp to compare.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calculates the difference between two sync timestamps, returned by\neither UOvrFunctionsBlueprintLibrary::Voip_GetSyncTimestamp or UOvrFunctionsBlueprintLibrary::Voip_GetPCMWithTimestamp,\nand converts it to microseconds.\n\nReturn value will be negative if lhs is smaller than rhs, zero if both\ntimestamps are the same, and positive otherwise.  The absolute value of\nthe result is the time in microseconds between two sync timestamps.\n@param Lhs - The first sync timestamp to compare.\n@param Rhs - The second sync timestamp to compare." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Lhs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Rhs;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSyncTimestampDifference_Statics::NewProp_Lhs = { "Lhs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrFunctionsBlueprintLibrary_eventVoip_GetSyncTimestampDifference_Parms, Lhs), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSyncTimestampDifference_Statics::NewProp_Rhs = { "Rhs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrFunctionsBlueprintLibrary_eventVoip_GetSyncTimestampDifference_Parms, Rhs), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSyncTimestampDifference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrFunctionsBlueprintLibrary_eventVoip_GetSyncTimestampDifference_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSyncTimestampDifference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSyncTimestampDifference_Statics::NewProp_Lhs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSyncTimestampDifference_Statics::NewProp_Rhs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSyncTimestampDifference_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSyncTimestampDifference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSyncTimestampDifference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOvrFunctionsBlueprintLibrary, nullptr, "Voip_GetSyncTimestampDifference", nullptr, nullptr, Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSyncTimestampDifference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSyncTimestampDifference_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSyncTimestampDifference_Statics::OvrFunctionsBlueprintLibrary_eventVoip_GetSyncTimestampDifference_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSyncTimestampDifference_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSyncTimestampDifference_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSyncTimestampDifference_Statics::OvrFunctionsBlueprintLibrary_eventVoip_GetSyncTimestampDifference_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSyncTimestampDifference()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSyncTimestampDifference_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOvrFunctionsBlueprintLibrary::execVoip_GetSyncTimestampDifference)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Lhs);
	P_GET_PROPERTY(FIntProperty,Z_Param_Rhs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=UOvrFunctionsBlueprintLibrary::Voip_GetSyncTimestampDifference(Z_Param_Lhs,Z_Param_Rhs);
	P_NATIVE_END;
}
// End Class UOvrFunctionsBlueprintLibrary Function Voip_GetSyncTimestampDifference

// Begin Class UOvrFunctionsBlueprintLibrary Function Voip_GetSystemVoipMicrophoneMuted
struct Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSystemVoipMicrophoneMuted_Statics
{
	struct OvrFunctionsBlueprintLibrary_eventVoip_GetSystemVoipMicrophoneMuted_Parms
	{
		EOvrVoipMuteState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OvrPlatform|Voip" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns SystemVoip microphone's mute state. */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns SystemVoip microphone's mute state." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSystemVoipMicrophoneMuted_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSystemVoipMicrophoneMuted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrFunctionsBlueprintLibrary_eventVoip_GetSystemVoipMicrophoneMuted_Parms, ReturnValue), Z_Construct_UEnum_OVRPlatform_EOvrVoipMuteState, METADATA_PARAMS(0, nullptr) }; // 254096364
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSystemVoipMicrophoneMuted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSystemVoipMicrophoneMuted_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSystemVoipMicrophoneMuted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSystemVoipMicrophoneMuted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSystemVoipMicrophoneMuted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOvrFunctionsBlueprintLibrary, nullptr, "Voip_GetSystemVoipMicrophoneMuted", nullptr, nullptr, Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSystemVoipMicrophoneMuted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSystemVoipMicrophoneMuted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSystemVoipMicrophoneMuted_Statics::OvrFunctionsBlueprintLibrary_eventVoip_GetSystemVoipMicrophoneMuted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSystemVoipMicrophoneMuted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSystemVoipMicrophoneMuted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSystemVoipMicrophoneMuted_Statics::OvrFunctionsBlueprintLibrary_eventVoip_GetSystemVoipMicrophoneMuted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSystemVoipMicrophoneMuted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSystemVoipMicrophoneMuted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOvrFunctionsBlueprintLibrary::execVoip_GetSystemVoipMicrophoneMuted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EOvrVoipMuteState*)Z_Param__Result=UOvrFunctionsBlueprintLibrary::Voip_GetSystemVoipMicrophoneMuted();
	P_NATIVE_END;
}
// End Class UOvrFunctionsBlueprintLibrary Function Voip_GetSystemVoipMicrophoneMuted

// Begin Class UOvrFunctionsBlueprintLibrary Function Voip_GetSystemVoipStatus
struct Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSystemVoipStatus_Statics
{
	struct OvrFunctionsBlueprintLibrary_eventVoip_GetSystemVoipStatus_Parms
	{
		EOvrSystemVoipStatus ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OvrPlatform|Voip" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns SystemVoip status. */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns SystemVoip status." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSystemVoipStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSystemVoipStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrFunctionsBlueprintLibrary_eventVoip_GetSystemVoipStatus_Parms, ReturnValue), Z_Construct_UEnum_OVRPlatform_EOvrSystemVoipStatus, METADATA_PARAMS(0, nullptr) }; // 223237941
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSystemVoipStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSystemVoipStatus_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSystemVoipStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSystemVoipStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSystemVoipStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOvrFunctionsBlueprintLibrary, nullptr, "Voip_GetSystemVoipStatus", nullptr, nullptr, Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSystemVoipStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSystemVoipStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSystemVoipStatus_Statics::OvrFunctionsBlueprintLibrary_eventVoip_GetSystemVoipStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSystemVoipStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSystemVoipStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSystemVoipStatus_Statics::OvrFunctionsBlueprintLibrary_eventVoip_GetSystemVoipStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSystemVoipStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSystemVoipStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOvrFunctionsBlueprintLibrary::execVoip_GetSystemVoipStatus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EOvrSystemVoipStatus*)Z_Param__Result=UOvrFunctionsBlueprintLibrary::Voip_GetSystemVoipStatus();
	P_NATIVE_END;
}
// End Class UOvrFunctionsBlueprintLibrary Function Voip_GetSystemVoipStatus

// Begin Class UOvrFunctionsBlueprintLibrary Function Voip_SetMicrophoneMuted
struct Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetMicrophoneMuted_Statics
{
	struct OvrFunctionsBlueprintLibrary_eventVoip_SetMicrophoneMuted_Parms
	{
		EOvrVoipMuteState State;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OvrPlatform|Voip" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * This function is used to enable or disable the local microphone.  When muted, the microphone will not transmit any audio.\n     * Voip connections are unaffected by this state.  New connections can be established or closed whether the microphone is muted or not.\n     * This can be used to implement push-to-talk, or a local mute button.  The default state is unmuted.\n     * \n     * This function can be safely called from any thread.\n     * @param State - A value indicating whether to mute or unmute the local microphone.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function is used to enable or disable the local microphone.  When muted, the microphone will not transmit any audio.\nVoip connections are unaffected by this state.  New connections can be established or closed whether the microphone is muted or not.\nThis can be used to implement push-to-talk, or a local mute button.  The default state is unmuted.\n\nThis function can be safely called from any thread.\n@param State - A value indicating whether to mute or unmute the local microphone." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetMicrophoneMuted_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetMicrophoneMuted_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrFunctionsBlueprintLibrary_eventVoip_SetMicrophoneMuted_Parms, State), Z_Construct_UEnum_OVRPlatform_EOvrVoipMuteState, METADATA_PARAMS(0, nullptr) }; // 254096364
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetMicrophoneMuted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetMicrophoneMuted_Statics::NewProp_State_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetMicrophoneMuted_Statics::NewProp_State,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetMicrophoneMuted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetMicrophoneMuted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOvrFunctionsBlueprintLibrary, nullptr, "Voip_SetMicrophoneMuted", nullptr, nullptr, Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetMicrophoneMuted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetMicrophoneMuted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetMicrophoneMuted_Statics::OvrFunctionsBlueprintLibrary_eventVoip_SetMicrophoneMuted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetMicrophoneMuted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetMicrophoneMuted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetMicrophoneMuted_Statics::OvrFunctionsBlueprintLibrary_eventVoip_SetMicrophoneMuted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetMicrophoneMuted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetMicrophoneMuted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOvrFunctionsBlueprintLibrary::execVoip_SetMicrophoneMuted)
{
	P_GET_ENUM(EOvrVoipMuteState,Z_Param_State);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOvrFunctionsBlueprintLibrary::Voip_SetMicrophoneMuted(EOvrVoipMuteState(Z_Param_State));
	P_NATIVE_END;
}
// End Class UOvrFunctionsBlueprintLibrary Function Voip_SetMicrophoneMuted

// Begin Class UOvrFunctionsBlueprintLibrary Function Voip_SetNewConnectionOptions
struct Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetNewConnectionOptions_Statics
{
	struct OvrFunctionsBlueprintLibrary_eventVoip_SetNewConnectionOptions_Parms
	{
		FOvrVoipOptions VoipOptions;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OvrPlatform|Voip" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The options set for newly created connections to use. Existing connections will continue\n     * to use their current settings until they are destroyed and recreated.\n     * @param VoipOptions - The new options to be used for newly created connections.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The options set for newly created connections to use. Existing connections will continue\nto use their current settings until they are destroyed and recreated.\n@param VoipOptions - The new options to be used for newly created connections." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VoipOptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetNewConnectionOptions_Statics::NewProp_VoipOptions = { "VoipOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrFunctionsBlueprintLibrary_eventVoip_SetNewConnectionOptions_Parms, VoipOptions), Z_Construct_UScriptStruct_FOvrVoipOptions, METADATA_PARAMS(0, nullptr) }; // 3716269658
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetNewConnectionOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetNewConnectionOptions_Statics::NewProp_VoipOptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetNewConnectionOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetNewConnectionOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOvrFunctionsBlueprintLibrary, nullptr, "Voip_SetNewConnectionOptions", nullptr, nullptr, Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetNewConnectionOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetNewConnectionOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetNewConnectionOptions_Statics::OvrFunctionsBlueprintLibrary_eventVoip_SetNewConnectionOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetNewConnectionOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetNewConnectionOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetNewConnectionOptions_Statics::OvrFunctionsBlueprintLibrary_eventVoip_SetNewConnectionOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetNewConnectionOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetNewConnectionOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOvrFunctionsBlueprintLibrary::execVoip_SetNewConnectionOptions)
{
	P_GET_STRUCT(FOvrVoipOptions,Z_Param_VoipOptions);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOvrFunctionsBlueprintLibrary::Voip_SetNewConnectionOptions(Z_Param_VoipOptions);
	P_NATIVE_END;
}
// End Class UOvrFunctionsBlueprintLibrary Function Voip_SetNewConnectionOptions

// Begin Class UOvrFunctionsBlueprintLibrary Function Voip_SetOutputSampleRate
struct Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetOutputSampleRate_Statics
{
	struct OvrFunctionsBlueprintLibrary_eventVoip_SetOutputSampleRate_Parms
	{
		EOvrVoipSampleRate Rate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OvrPlatform|Voip" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Sets the output sample rate.  Audio data will be resampled as it is placed into the internal ringbuffer.\n     * \n     * \n     * This function can be safely called from any thread.\n     * @param Rate - The new output sample rate to use.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the output sample rate.  Audio data will be resampled as it is placed into the internal ringbuffer.\n\n\nThis function can be safely called from any thread.\n@param Rate - The new output sample rate to use." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Rate_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Rate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetOutputSampleRate_Statics::NewProp_Rate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetOutputSampleRate_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrFunctionsBlueprintLibrary_eventVoip_SetOutputSampleRate_Parms, Rate), Z_Construct_UEnum_OVRPlatform_EOvrVoipSampleRate, METADATA_PARAMS(0, nullptr) }; // 4186101790
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetOutputSampleRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetOutputSampleRate_Statics::NewProp_Rate_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetOutputSampleRate_Statics::NewProp_Rate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetOutputSampleRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetOutputSampleRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOvrFunctionsBlueprintLibrary, nullptr, "Voip_SetOutputSampleRate", nullptr, nullptr, Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetOutputSampleRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetOutputSampleRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetOutputSampleRate_Statics::OvrFunctionsBlueprintLibrary_eventVoip_SetOutputSampleRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetOutputSampleRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetOutputSampleRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetOutputSampleRate_Statics::OvrFunctionsBlueprintLibrary_eventVoip_SetOutputSampleRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetOutputSampleRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetOutputSampleRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOvrFunctionsBlueprintLibrary::execVoip_SetOutputSampleRate)
{
	P_GET_ENUM(EOvrVoipSampleRate,Z_Param_Rate);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOvrFunctionsBlueprintLibrary::Voip_SetOutputSampleRate(EOvrVoipSampleRate(Z_Param_Rate));
	P_NATIVE_END;
}
// End Class UOvrFunctionsBlueprintLibrary Function Voip_SetOutputSampleRate

// Begin Class UOvrFunctionsBlueprintLibrary Function Voip_Start
struct Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Start_Statics
{
	struct OvrFunctionsBlueprintLibrary_eventVoip_Start_Parms
	{
		FOvrId UserID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OvrPlatform|Voip" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Attempts to establish a VoIP session with the specified user.\n     * \n     * A message of type UOvrPlatformSubsystem::OnVoipSystemVoipState() will be posted when the session is\n     * established.\n     * \n     * \n     * \n     * This function can be safely called from any thread.\n     * @param UserID - The ID of the user to establish a VoIP session with.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attempts to establish a VoIP session with the specified user.\n\nA message of type UOvrPlatformSubsystem::OnVoipSystemVoipState() will be posted when the session is\nestablished.\n\n\n\nThis function can be safely called from any thread.\n@param UserID - The ID of the user to establish a VoIP session with." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Start_Statics::NewProp_UserID = { "UserID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrFunctionsBlueprintLibrary_eventVoip_Start_Parms, UserID), Z_Construct_UScriptStruct_FOvrId, METADATA_PARAMS(0, nullptr) }; // 3472719273
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Start_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Start_Statics::NewProp_UserID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Start_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOvrFunctionsBlueprintLibrary, nullptr, "Voip_Start", nullptr, nullptr, Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Start_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Start_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Start_Statics::OvrFunctionsBlueprintLibrary_eventVoip_Start_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Start_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Start_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Start_Statics::OvrFunctionsBlueprintLibrary_eventVoip_Start_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Start()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Start_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOvrFunctionsBlueprintLibrary::execVoip_Start)
{
	P_GET_STRUCT(FOvrId,Z_Param_UserID);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOvrFunctionsBlueprintLibrary::Voip_Start(Z_Param_UserID);
	P_NATIVE_END;
}
// End Class UOvrFunctionsBlueprintLibrary Function Voip_Start

// Begin Class UOvrFunctionsBlueprintLibrary Function Voip_Stop
struct Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Stop_Statics
{
	struct OvrFunctionsBlueprintLibrary_eventVoip_Stop_Parms
	{
		FOvrId UserID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OvrPlatform|Voip" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Terminates a VoIP session with the specified user.  Note that a muting\n     * functionality should be used to temporarily stop sending audio; restarting\n     * a VoIP session after tearing it down may be an expensive operation.\n     * \n     * \n     * This function can be safely called from any thread.\n     * @param UserID - The ID of the user to terminate the VoIP session with.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OVRPlatformFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Terminates a VoIP session with the specified user.  Note that a muting\nfunctionality should be used to temporarily stop sending audio; restarting\na VoIP session after tearing it down may be an expensive operation.\n\n\nThis function can be safely called from any thread.\n@param UserID - The ID of the user to terminate the VoIP session with." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Stop_Statics::NewProp_UserID = { "UserID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OvrFunctionsBlueprintLibrary_eventVoip_Stop_Parms, UserID), Z_Construct_UScriptStruct_FOvrId, METADATA_PARAMS(0, nullptr) }; // 3472719273
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Stop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Stop_Statics::NewProp_UserID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Stop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOvrFunctionsBlueprintLibrary, nullptr, "Voip_Stop", nullptr, nullptr, Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Stop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Stop_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Stop_Statics::OvrFunctionsBlueprintLibrary_eventVoip_Stop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Stop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Stop_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Stop_Statics::OvrFunctionsBlueprintLibrary_eventVoip_Stop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Stop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Stop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOvrFunctionsBlueprintLibrary::execVoip_Stop)
{
	P_GET_STRUCT(FOvrId,Z_Param_UserID);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOvrFunctionsBlueprintLibrary::Voip_Stop(Z_Param_UserID);
	P_NATIVE_END;
}
// End Class UOvrFunctionsBlueprintLibrary Function Voip_Stop

// Begin Class UOvrFunctionsBlueprintLibrary
void UOvrFunctionsBlueprintLibrary::StaticRegisterNativesUOvrFunctionsBlueprintLibrary()
{
	UClass* Class = UOvrFunctionsBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplicationLifecycle_GetLaunchDetails", &UOvrFunctionsBlueprintLibrary::execApplicationLifecycle_GetLaunchDetails },
		{ "ApplicationLifecycle_LogDeeplinkResult", &UOvrFunctionsBlueprintLibrary::execApplicationLifecycle_LogDeeplinkResult },
		{ "Platform_GetLoggedInUserID", &UOvrFunctionsBlueprintLibrary::execPlatform_GetLoggedInUserID },
		{ "Platform_GetLoggedInUserLocale", &UOvrFunctionsBlueprintLibrary::execPlatform_GetLoggedInUserLocale },
		{ "Platform_IsInitialized", &UOvrFunctionsBlueprintLibrary::execPlatform_IsInitialized },
		{ "Platform_SetDeveloperAccessToken", &UOvrFunctionsBlueprintLibrary::execPlatform_SetDeveloperAccessToken },
		{ "Voip_Accept", &UOvrFunctionsBlueprintLibrary::execVoip_Accept },
		{ "Voip_GetIsConnectionUsingDtx", &UOvrFunctionsBlueprintLibrary::execVoip_GetIsConnectionUsingDtx },
		{ "Voip_GetLocalBitrate", &UOvrFunctionsBlueprintLibrary::execVoip_GetLocalBitrate },
		{ "Voip_GetOutputBufferMaxSize", &UOvrFunctionsBlueprintLibrary::execVoip_GetOutputBufferMaxSize },
		{ "Voip_GetPCMSize", &UOvrFunctionsBlueprintLibrary::execVoip_GetPCMSize },
		{ "Voip_GetRemoteBitrate", &UOvrFunctionsBlueprintLibrary::execVoip_GetRemoteBitrate },
		{ "Voip_GetSyncTimestamp", &UOvrFunctionsBlueprintLibrary::execVoip_GetSyncTimestamp },
		{ "Voip_GetSyncTimestampDifference", &UOvrFunctionsBlueprintLibrary::execVoip_GetSyncTimestampDifference },
		{ "Voip_GetSystemVoipMicrophoneMuted", &UOvrFunctionsBlueprintLibrary::execVoip_GetSystemVoipMicrophoneMuted },
		{ "Voip_GetSystemVoipStatus", &UOvrFunctionsBlueprintLibrary::execVoip_GetSystemVoipStatus },
		{ "Voip_SetMicrophoneMuted", &UOvrFunctionsBlueprintLibrary::execVoip_SetMicrophoneMuted },
		{ "Voip_SetNewConnectionOptions", &UOvrFunctionsBlueprintLibrary::execVoip_SetNewConnectionOptions },
		{ "Voip_SetOutputSampleRate", &UOvrFunctionsBlueprintLibrary::execVoip_SetOutputSampleRate },
		{ "Voip_Start", &UOvrFunctionsBlueprintLibrary::execVoip_Start },
		{ "Voip_Stop", &UOvrFunctionsBlueprintLibrary::execVoip_Stop },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOvrFunctionsBlueprintLibrary);
UClass* Z_Construct_UClass_UOvrFunctionsBlueprintLibrary_NoRegister()
{
	return UOvrFunctionsBlueprintLibrary::StaticClass();
}
struct Z_Construct_UClass_UOvrFunctionsBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OVRPlatformFunctions.h" },
		{ "ModuleRelativePath", "Public/OVRPlatformFunctions.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_ApplicationLifecycle_GetLaunchDetails, "ApplicationLifecycle_GetLaunchDetails" }, // 3127467052
		{ &Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_ApplicationLifecycle_LogDeeplinkResult, "ApplicationLifecycle_LogDeeplinkResult" }, // 530447609
		{ &Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_GetLoggedInUserID, "Platform_GetLoggedInUserID" }, // 2312627476
		{ &Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_GetLoggedInUserLocale, "Platform_GetLoggedInUserLocale" }, // 744741329
		{ &Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_IsInitialized, "Platform_IsInitialized" }, // 3038748780
		{ &Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Platform_SetDeveloperAccessToken, "Platform_SetDeveloperAccessToken" }, // 4131756632
		{ &Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Accept, "Voip_Accept" }, // 4015208533
		{ &Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetIsConnectionUsingDtx, "Voip_GetIsConnectionUsingDtx" }, // 1987095430
		{ &Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetLocalBitrate, "Voip_GetLocalBitrate" }, // 2501330231
		{ &Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetOutputBufferMaxSize, "Voip_GetOutputBufferMaxSize" }, // 4051459617
		{ &Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetPCMSize, "Voip_GetPCMSize" }, // 2008866685
		{ &Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetRemoteBitrate, "Voip_GetRemoteBitrate" }, // 3629279991
		{ &Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSyncTimestamp, "Voip_GetSyncTimestamp" }, // 893015736
		{ &Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSyncTimestampDifference, "Voip_GetSyncTimestampDifference" }, // 3116470853
		{ &Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSystemVoipMicrophoneMuted, "Voip_GetSystemVoipMicrophoneMuted" }, // 2035221471
		{ &Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_GetSystemVoipStatus, "Voip_GetSystemVoipStatus" }, // 2929028115
		{ &Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetMicrophoneMuted, "Voip_SetMicrophoneMuted" }, // 3287031698
		{ &Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetNewConnectionOptions, "Voip_SetNewConnectionOptions" }, // 1369702973
		{ &Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_SetOutputSampleRate, "Voip_SetOutputSampleRate" }, // 2847887872
		{ &Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Start, "Voip_Start" }, // 1195827075
		{ &Z_Construct_UFunction_UOvrFunctionsBlueprintLibrary_Voip_Stop, "Voip_Stop" }, // 1365206820
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOvrFunctionsBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOvrFunctionsBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OVRPlatform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOvrFunctionsBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOvrFunctionsBlueprintLibrary_Statics::ClassParams = {
	&UOvrFunctionsBlueprintLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOvrFunctionsBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UOvrFunctionsBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOvrFunctionsBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UOvrFunctionsBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOvrFunctionsBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UOvrFunctionsBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOvrFunctionsBlueprintLibrary.OuterSingleton;
}
template<> OVRPLATFORM_API UClass* StaticClass<UOvrFunctionsBlueprintLibrary>()
{
	return UOvrFunctionsBlueprintLibrary::StaticClass();
}
UOvrFunctionsBlueprintLibrary::UOvrFunctionsBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOvrFunctionsBlueprintLibrary);
UOvrFunctionsBlueprintLibrary::~UOvrFunctionsBlueprintLibrary() {}
// End Class UOvrFunctionsBlueprintLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformFunctions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOvrFunctionsBlueprintLibrary, UOvrFunctionsBlueprintLibrary::StaticClass, TEXT("UOvrFunctionsBlueprintLibrary"), &Z_Registration_Info_UClass_UOvrFunctionsBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOvrFunctionsBlueprintLibrary), 1284109905U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformFunctions_h_2818290503(TEXT("/Script/OVRPlatform"),
	Z_CompiledInDeferFile_FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GithubProject_VRAndreMalraux_Plugins_MetaXRPlatform_Source_OVRPlatform_Public_OVRPlatformFunctions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
