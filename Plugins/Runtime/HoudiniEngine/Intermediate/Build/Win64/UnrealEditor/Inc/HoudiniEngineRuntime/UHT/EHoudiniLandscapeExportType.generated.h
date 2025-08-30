// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EHoudiniLandscapeExportType.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_EHoudiniLandscapeExportType_generated_h
#error "EHoudiniLandscapeExportType.generated.h already included, missing '#pragma once' in EHoudiniLandscapeExportType.h"
#endif
#define HOUDINIENGINERUNTIME_EHoudiniLandscapeExportType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniLandscapeExportType_h


#define FOREACH_ENUM_EHOUDINILANDSCAPEEXPORTTYPE(op) \
	op(EHoudiniLandscapeExportType::Heightfield) \
	op(EHoudiniLandscapeExportType::Mesh) \
	op(EHoudiniLandscapeExportType::Points) 

enum class EHoudiniLandscapeExportType : uint8;
template<> struct TIsUEnumClass<EHoudiniLandscapeExportType> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniLandscapeExportType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
