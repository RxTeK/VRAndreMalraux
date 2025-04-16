// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OVRPlatformRequestsSupport.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OVRPLATFORM_OVRPlatformRequestsSupport_generated_h
#error "OVRPlatformRequestsSupport.generated.h already included, missing '#pragma once' in OVRPlatformRequestsSupport.h"
#endif
#define OVRPLATFORM_OVRPlatformRequestsSupport_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Thirdparty_OculusPlatformSDK_HostProject_Plugins_OculusPlatform_Source_OVRPlatform_Public_OVRPlatformRequestsSupport_h


#define FOREACH_ENUM_EOVRREQUESTOUTPUTPINS(op) \
	op(EOvrRequestOutputPins::Then) \
	op(EOvrRequestOutputPins::Success) \
	op(EOvrRequestOutputPins::Failure) 

enum class EOvrRequestOutputPins : uint8;
template<> struct TIsUEnumClass<EOvrRequestOutputPins> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrRequestOutputPins>();

#define FOREACH_ENUM_EOVRPAGEREQUESTOUTPUTPINS(op) \
	op(EOvrPageRequestOutputPins::Then) \
	op(EOvrPageRequestOutputPins::PageReady) \
	op(EOvrPageRequestOutputPins::NoMorePages) \
	op(EOvrPageRequestOutputPins::Failure) 

enum class EOvrPageRequestOutputPins : uint8;
template<> struct TIsUEnumClass<EOvrPageRequestOutputPins> { enum { Value = true }; };
template<> OVRPLATFORM_API UEnum* StaticEnum<EOvrPageRequestOutputPins>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
