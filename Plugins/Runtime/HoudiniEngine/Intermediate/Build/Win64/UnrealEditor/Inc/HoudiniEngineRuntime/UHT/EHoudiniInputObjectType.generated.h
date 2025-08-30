// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EHoudiniInputObjectType.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_EHoudiniInputObjectType_generated_h
#error "EHoudiniInputObjectType.generated.h already included, missing '#pragma once' in EHoudiniInputObjectType.h"
#endif
#define HOUDINIENGINERUNTIME_EHoudiniInputObjectType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniInputObjectType_h


#define FOREACH_ENUM_EHOUDINIINPUTOBJECTTYPE(op) \
	op(EHoudiniInputObjectType::Invalid) \
	op(EHoudiniInputObjectType::Object) \
	op(EHoudiniInputObjectType::StaticMesh) \
	op(EHoudiniInputObjectType::SkeletalMesh) \
	op(EHoudiniInputObjectType::SceneComponent) \
	op(EHoudiniInputObjectType::StaticMeshComponent) \
	op(EHoudiniInputObjectType::InstancedStaticMeshComponent) \
	op(EHoudiniInputObjectType::SplineComponent) \
	op(EHoudiniInputObjectType::HoudiniSplineComponent) \
	op(EHoudiniInputObjectType::HoudiniAssetComponent) \
	op(EHoudiniInputObjectType::Actor) \
	op(EHoudiniInputObjectType::Landscape) \
	op(EHoudiniInputObjectType::Brush) \
	op(EHoudiniInputObjectType::CameraComponent) \
	op(EHoudiniInputObjectType::DataTable) \
	op(EHoudiniInputObjectType::HoudiniAssetActor) \
	op(EHoudiniInputObjectType::FoliageType_InstancedStaticMesh) \
	op(EHoudiniInputObjectType::GeometryCollection) \
	op(EHoudiniInputObjectType::GeometryCollectionComponent) \
	op(EHoudiniInputObjectType::GeometryCollectionActor_Deprecated) \
	op(EHoudiniInputObjectType::SkeletalMeshComponent) \
	op(EHoudiniInputObjectType::LandscapeSplineActor) \
	op(EHoudiniInputObjectType::LandscapeSplinesComponent) \
	op(EHoudiniInputObjectType::Blueprint) \
	op(EHoudiniInputObjectType::Animation) \
	op(EHoudiniInputObjectType::SplineMeshComponent) \
	op(EHoudiniInputObjectType::LevelInstance) \
	op(EHoudiniInputObjectType::PackedLevelActor) 

enum class EHoudiniInputObjectType : uint8;
template<> struct TIsUEnumClass<EHoudiniInputObjectType> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniInputObjectType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
