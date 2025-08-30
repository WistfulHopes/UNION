// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EHoudiniHandleType.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_EHoudiniHandleType_generated_h
#error "EHoudiniHandleType.generated.h already included, missing '#pragma once' in EHoudiniHandleType.h"
#endif
#define HOUDINIENGINERUNTIME_EHoudiniHandleType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniHandleType_h


#define FOREACH_ENUM_EHOUDINIHANDLETYPE(op) \
	op(EHoudiniHandleType::Xform) \
	op(EHoudiniHandleType::Bounder) \
	op(EHoudiniHandleType::Unsupported) 

enum class EHoudiniHandleType : uint8;
template<> struct TIsUEnumClass<EHoudiniHandleType> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniHandleType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
