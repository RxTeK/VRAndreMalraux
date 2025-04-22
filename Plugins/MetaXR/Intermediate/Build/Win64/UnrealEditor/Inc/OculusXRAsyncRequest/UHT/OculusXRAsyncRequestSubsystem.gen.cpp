// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRAsyncRequest/Private/OculusXRAsyncRequestSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRAsyncRequestSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
OCULUSXRASYNCREQUEST_API UClass* Z_Construct_UClass_UOculusXRAsyncRequestSubsystem();
OCULUSXRASYNCREQUEST_API UClass* Z_Construct_UClass_UOculusXRAsyncRequestSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusXRAsyncRequest();
// End Cross Module References

// Begin Class UOculusXRAsyncRequestSubsystem
void UOculusXRAsyncRequestSubsystem::StaticRegisterNativesUOculusXRAsyncRequestSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXRAsyncRequestSubsystem);
UClass* Z_Construct_UClass_UOculusXRAsyncRequestSubsystem_NoRegister()
{
	return UOculusXRAsyncRequestSubsystem::StaticClass();
}
struct Z_Construct_UClass_UOculusXRAsyncRequestSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OculusXRAsyncRequestSubsystem.h" },
		{ "ModuleRelativePath", "Private/OculusXRAsyncRequestSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRAsyncRequestSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOculusXRAsyncRequestSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAsyncRequest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRAsyncRequestSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRAsyncRequestSubsystem_Statics::ClassParams = {
	&UOculusXRAsyncRequestSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRAsyncRequestSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRAsyncRequestSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOculusXRAsyncRequestSubsystem()
{
	if (!Z_Registration_Info_UClass_UOculusXRAsyncRequestSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRAsyncRequestSubsystem.OuterSingleton, Z_Construct_UClass_UOculusXRAsyncRequestSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRAsyncRequestSubsystem.OuterSingleton;
}
template<> OCULUSXRASYNCREQUEST_API UClass* StaticClass<UOculusXRAsyncRequestSubsystem>()
{
	return UOculusXRAsyncRequestSubsystem::StaticClass();
}
UOculusXRAsyncRequestSubsystem::UOculusXRAsyncRequestSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRAsyncRequestSubsystem);
UOculusXRAsyncRequestSubsystem::~UOculusXRAsyncRequestSubsystem() {}
// End Class UOculusXRAsyncRequestSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_OculusXRAsyncRequest_Private_OculusXRAsyncRequestSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRAsyncRequestSubsystem, UOculusXRAsyncRequestSubsystem::StaticClass, TEXT("UOculusXRAsyncRequestSubsystem"), &Z_Registration_Info_UClass_UOculusXRAsyncRequestSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRAsyncRequestSubsystem), 1019176749U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_OculusXRAsyncRequest_Private_OculusXRAsyncRequestSubsystem_h_1376742711(TEXT("/Script/OculusXRAsyncRequest"),
	Z_CompiledInDeferFile_FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_OculusXRAsyncRequest_Private_OculusXRAsyncRequestSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GithubProject_VRAndreMalraux_Plugins_MetaXR_Source_OculusXRAsyncRequest_Private_OculusXRAsyncRequestSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
