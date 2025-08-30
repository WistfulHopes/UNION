// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EHoudiniXformType.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_EHoudiniXformType_generated_h
#error "EHoudiniXformType.generated.h already included, missing '#pragma once' in EHoudiniXformType.h"
#endif
#define HOUDINIENGINERUNTIME_EHoudiniXformType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniXformType_h


#define FOREACH_ENUM_EHOUDINIXFORMTYPE(op) \
	op(EHoudiniXformType::None) \
	op(EHoudiniXformType::IntoThisObject) \
	op(EHoudiniXformType::Auto) 

enum class EHoudiniXformType : uint8;
template<> struct TIsUEnumClass<EHoudiniXformType> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniXformType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
