// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EHoudiniProxyRefineRequestResult.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_EHoudiniProxyRefineRequestResult_generated_h
#error "EHoudiniProxyRefineRequestResult.generated.h already included, missing '#pragma once' in EHoudiniProxyRefineRequestResult.h"
#endif
#define HOUDINIENGINERUNTIME_EHoudiniProxyRefineRequestResult_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniProxyRefineRequestResult_h


#define FOREACH_ENUM_EHOUDINIPROXYREFINEREQUESTRESULT(op) \
	op(EHoudiniProxyRefineRequestResult::Invalid) \
	op(EHoudiniProxyRefineRequestResult::None) \
	op(EHoudiniProxyRefineRequestResult::PendingCooks) \
	op(EHoudiniProxyRefineRequestResult::Refined) 

enum class EHoudiniProxyRefineRequestResult : uint8;
template<> struct TIsUEnumClass<EHoudiniProxyRefineRequestResult> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniProxyRefineRequestResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
