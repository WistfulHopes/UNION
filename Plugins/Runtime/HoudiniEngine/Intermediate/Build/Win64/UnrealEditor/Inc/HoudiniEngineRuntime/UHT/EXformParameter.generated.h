// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EXformParameter.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_EXformParameter_generated_h
#error "EXformParameter.generated.h already included, missing '#pragma once' in EXformParameter.h"
#endif
#define HOUDINIENGINERUNTIME_EXformParameter_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EXformParameter_h


#define FOREACH_ENUM_EXFORMPARAMETER(op) \
	op(EXformParameter::TX) \
	op(EXformParameter::TY) \
	op(EXformParameter::TZ) \
	op(EXformParameter::RX) \
	op(EXformParameter::RY) \
	op(EXformParameter::RZ) \
	op(EXformParameter::SX) \
	op(EXformParameter::SY) \
	op(EXformParameter::SZ) \
	op(EXformParameter::COUNT) 

enum class EXformParameter : uint8;
template<> struct TIsUEnumClass<EXformParameter> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EXformParameter>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
