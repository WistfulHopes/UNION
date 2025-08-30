// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EHoudiniOutputType.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_EHoudiniOutputType_generated_h
#error "EHoudiniOutputType.generated.h already included, missing '#pragma once' in EHoudiniOutputType.h"
#endif
#define HOUDINIENGINERUNTIME_EHoudiniOutputType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniOutputType_h


#define FOREACH_ENUM_EHOUDINIOUTPUTTYPE(op) \
	op(EHoudiniOutputType::Invalid) \
	op(EHoudiniOutputType::Mesh) \
	op(EHoudiniOutputType::Instancer) \
	op(EHoudiniOutputType::Landscape) \
	op(EHoudiniOutputType::Curve) \
	op(EHoudiniOutputType::Skeletal) \
	op(EHoudiniOutputType::GeometryCollection) \
	op(EHoudiniOutputType::DataTable) \
	op(EHoudiniOutputType::LandscapeSpline) \
	op(EHoudiniOutputType::AnimSequence) 

enum class EHoudiniOutputType : uint8;
template<> struct TIsUEnumClass<EHoudiniOutputType> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniOutputType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
