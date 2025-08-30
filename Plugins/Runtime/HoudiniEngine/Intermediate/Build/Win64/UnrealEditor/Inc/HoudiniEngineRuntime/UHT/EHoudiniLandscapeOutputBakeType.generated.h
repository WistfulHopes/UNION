// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EHoudiniLandscapeOutputBakeType.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_EHoudiniLandscapeOutputBakeType_generated_h
#error "EHoudiniLandscapeOutputBakeType.generated.h already included, missing '#pragma once' in EHoudiniLandscapeOutputBakeType.h"
#endif
#define HOUDINIENGINERUNTIME_EHoudiniLandscapeOutputBakeType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniLandscapeOutputBakeType_h


#define FOREACH_ENUM_EHOUDINILANDSCAPEOUTPUTBAKETYPE(op) \
	op(EHoudiniLandscapeOutputBakeType::Detachment) \
	op(EHoudiniLandscapeOutputBakeType::BakeToImage) \
	op(EHoudiniLandscapeOutputBakeType::BakeToWorld) \
	op(EHoudiniLandscapeOutputBakeType::InValid) 

enum class EHoudiniLandscapeOutputBakeType : uint8;
template<> struct TIsUEnumClass<EHoudiniLandscapeOutputBakeType> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniLandscapeOutputBakeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
