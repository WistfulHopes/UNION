// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EHoudiniEngineEditorSettingUseCustomLocation.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_EHoudiniEngineEditorSettingUseCustomLocation_generated_h
#error "EHoudiniEngineEditorSettingUseCustomLocation.generated.h already included, missing '#pragma once' in EHoudiniEngineEditorSettingUseCustomLocation.h"
#endif
#define HOUDINIENGINERUNTIME_EHoudiniEngineEditorSettingUseCustomLocation_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniEngineEditorSettingUseCustomLocation_h


#define FOREACH_ENUM_EHOUDINIENGINEEDITORSETTINGUSECUSTOMLOCATION(op) \
	op(EHoudiniEngineEditorSettingUseCustomLocation::Project) \
	op(EHoudiniEngineEditorSettingUseCustomLocation::Disabled) \
	op(EHoudiniEngineEditorSettingUseCustomLocation::Enabled) 

enum class EHoudiniEngineEditorSettingUseCustomLocation : uint8;
template<> struct TIsUEnumClass<EHoudiniEngineEditorSettingUseCustomLocation> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniEngineEditorSettingUseCustomLocation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
