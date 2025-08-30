// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EHoudiniRampInterpolationType.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_EHoudiniRampInterpolationType_generated_h
#error "EHoudiniRampInterpolationType.generated.h already included, missing '#pragma once' in EHoudiniRampInterpolationType.h"
#endif
#define HOUDINIENGINERUNTIME_EHoudiniRampInterpolationType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniRampInterpolationType_h


#define FOREACH_ENUM_EHOUDINIRAMPINTERPOLATIONTYPE(op) \
	op(EHoudiniRampInterpolationType::InValid) \
	op(EHoudiniRampInterpolationType::CONSTANT) \
	op(EHoudiniRampInterpolationType::LINEAR) \
	op(EHoudiniRampInterpolationType::CATMULL_ROM) \
	op(EHoudiniRampInterpolationType::MONOTONE_CUBIC) \
	op(EHoudiniRampInterpolationType::BEZIER) \
	op(EHoudiniRampInterpolationType::BSPLINE) \
	op(EHoudiniRampInterpolationType::HERMITE) 

enum class EHoudiniRampInterpolationType : int8;
template<> struct TIsUEnumClass<EHoudiniRampInterpolationType> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniRampInterpolationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
