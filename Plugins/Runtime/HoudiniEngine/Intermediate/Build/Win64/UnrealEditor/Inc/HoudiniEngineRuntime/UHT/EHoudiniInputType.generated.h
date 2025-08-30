// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EHoudiniInputType.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_EHoudiniInputType_generated_h
#error "EHoudiniInputType.generated.h already included, missing '#pragma once' in EHoudiniInputType.h"
#endif
#define HOUDINIENGINERUNTIME_EHoudiniInputType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniInputType_h


#define FOREACH_ENUM_EHOUDINIINPUTTYPE(op) \
	op(EHoudiniInputType::Invalid) \
	op(EHoudiniInputType::Geometry) \
	op(EHoudiniInputType::Curve) \
	op(EHoudiniInputType::Asset_DEPRECATED) \
	op(EHoudiniInputType::Landscape_DEPRECATED) \
	op(EHoudiniInputType::World) \
	op(EHoudiniInputType::Skeletal_DEPRECATED) \
	op(EHoudiniInputType::GeometryCollection_DEPRECATED) 

enum class EHoudiniInputType : uint8;
template<> struct TIsUEnumClass<EHoudiniInputType> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniInputType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
