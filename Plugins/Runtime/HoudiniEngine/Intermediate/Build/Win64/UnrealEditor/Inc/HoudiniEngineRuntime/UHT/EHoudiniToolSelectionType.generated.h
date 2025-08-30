// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EHoudiniToolSelectionType.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_EHoudiniToolSelectionType_generated_h
#error "EHoudiniToolSelectionType.generated.h already included, missing '#pragma once' in EHoudiniToolSelectionType.h"
#endif
#define HOUDINIENGINERUNTIME_EHoudiniToolSelectionType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniToolSelectionType_h


#define FOREACH_ENUM_EHOUDINITOOLSELECTIONTYPE(op) \
	op(EHoudiniToolSelectionType::HTOOL_SELECTION_ALL) \
	op(EHoudiniToolSelectionType::HTOOL_SELECTION_WORLD_ONLY) \
	op(EHoudiniToolSelectionType::HTOOL_SELECTION_CB_ONLY) 

enum class EHoudiniToolSelectionType : uint8;
template<> struct TIsUEnumClass<EHoudiniToolSelectionType> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniToolSelectionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
