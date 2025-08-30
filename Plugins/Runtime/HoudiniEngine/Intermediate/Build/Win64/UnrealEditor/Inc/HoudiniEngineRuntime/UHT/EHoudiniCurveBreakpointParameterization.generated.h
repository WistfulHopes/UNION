// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EHoudiniCurveBreakpointParameterization.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_EHoudiniCurveBreakpointParameterization_generated_h
#error "EHoudiniCurveBreakpointParameterization.generated.h already included, missing '#pragma once' in EHoudiniCurveBreakpointParameterization.h"
#endif
#define HOUDINIENGINERUNTIME_EHoudiniCurveBreakpointParameterization_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniCurveBreakpointParameterization_h


#define FOREACH_ENUM_EHOUDINICURVEBREAKPOINTPARAMETERIZATION(op) \
	op(EHoudiniCurveBreakpointParameterization::Invalid) \
	op(EHoudiniCurveBreakpointParameterization::Uniform) \
	op(EHoudiniCurveBreakpointParameterization::Chord) \
	op(EHoudiniCurveBreakpointParameterization::Centripetal) 

enum class EHoudiniCurveBreakpointParameterization : int8;
template<> struct TIsUEnumClass<EHoudiniCurveBreakpointParameterization> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniCurveBreakpointParameterization>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
