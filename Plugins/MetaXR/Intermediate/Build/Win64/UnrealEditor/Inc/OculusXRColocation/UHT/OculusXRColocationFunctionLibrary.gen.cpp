// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRColocation/Public/OculusXRColocationFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRColocationFunctionLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
OCULUSXRCOLOCATION_API UClass* Z_Construct_UClass_UOculusXRColocationFunctionLibrary();
OCULUSXRCOLOCATION_API UClass* Z_Construct_UClass_UOculusXRColocationFunctionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusXRColocation();
// End Cross Module References

// Begin Class UOculusXRColocationFunctionLibrary Function StopColocationSessionDiscovery
struct Z_Construct_UFunction_UOculusXRColocationFunctionLibrary_StopColocationSessionDiscovery_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Colocation" },
		{ "ModuleRelativePath", "Public/OculusXRColocationFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRColocationFunctionLibrary_StopColocationSessionDiscovery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRColocationFunctionLibrary, nullptr, "StopColocationSessionDiscovery", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRColocationFunctionLibrary_StopColocationSessionDiscovery_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRColocationFunctionLibrary_StopColocationSessionDiscovery_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOculusXRColocationFunctionLibrary_StopColocationSessionDiscovery()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRColocationFunctionLibrary_StopColocationSessionDiscovery_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRColocationFunctionLibrary::execStopColocationSessionDiscovery)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UOculusXRColocationFunctionLibrary::StopColocationSessionDiscovery();
	P_NATIVE_END;
}
// End Class UOculusXRColocationFunctionLibrary Function StopColocationSessionDiscovery

// Begin Class UOculusXRColocationFunctionLibrary
void UOculusXRColocationFunctionLibrary::StaticRegisterNativesUOculusXRColocationFunctionLibrary()
{
	UClass* Class = UOculusXRColocationFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StopColocationSessionDiscovery", &UOculusXRColocationFunctionLibrary::execStopColocationSessionDiscovery },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXRColocationFunctionLibrary);
UClass* Z_Construct_UClass_UOculusXRColocationFunctionLibrary_NoRegister()
{
	return UOculusXRColocationFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UOculusXRColocationFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OculusXRColocationFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/OculusXRColocationFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRColocationFunctionLibrary_StopColocationSessionDiscovery, "StopColocationSessionDiscovery" }, // 2200560117
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRColocationFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOculusXRColocationFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRColocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRColocationFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRColocationFunctionLibrary_Statics::ClassParams = {
	&UOculusXRColocationFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRColocationFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRColocationFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOculusXRColocationFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UOculusXRColocationFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRColocationFunctionLibrary.OuterSingleton, Z_Construct_UClass_UOculusXRColocationFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRColocationFunctionLibrary.OuterSingleton;
}
template<> OCULUSXRCOLOCATION_API UClass* StaticClass<UOculusXRColocationFunctionLibrary>()
{
	return UOculusXRColocationFunctionLibrary::StaticClass();
}
UOculusXRColocationFunctionLibrary::UOculusXRColocationFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRColocationFunctionLibrary);
UOculusXRColocationFunctionLibrary::~UOculusXRColocationFunctionLibrary() {}
// End Class UOculusXRColocationFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRColocationFunctionLibrary, UOculusXRColocationFunctionLibrary::StaticClass, TEXT("UOculusXRColocationFunctionLibrary"), &Z_Registration_Info_UClass_UOculusXRColocationFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRColocationFunctionLibrary), 3477331040U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationFunctionLibrary_h_2874378946(TEXT("/Script/OculusXRColocation"),
	Z_CompiledInDeferFile_FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
