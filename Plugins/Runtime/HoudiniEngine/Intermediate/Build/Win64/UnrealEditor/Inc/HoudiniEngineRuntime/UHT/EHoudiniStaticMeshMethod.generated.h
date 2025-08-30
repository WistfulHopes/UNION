// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EHoudiniStaticMeshMethod.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_EHoudiniStaticMeshMethod_generated_h
#error "EHoudiniStaticMeshMethod.generated.h already included, missing '#pragma once' in EHoudiniStaticMeshMethod.h"
#endif
#define HOUDINIENGINERUNTIME_EHoudiniStaticMeshMethod_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniStaticMeshMethod_h


#define FOREACH_ENUM_EHOUDINISTATICMESHMETHOD(op) \
	op(EHoudiniStaticMeshMethod::RawMesh_DEPRECATED) \
	op(EHoudiniStaticMeshMethod::FMeshDescription) \
	op(EHoudiniStaticMeshMethod::UHoudiniStaticMesh) 

enum class EHoudiniStaticMeshMethod : uint8;
template<> struct TIsUEnumClass<EHoudiniStaticMeshMethod> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniStaticMeshMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
