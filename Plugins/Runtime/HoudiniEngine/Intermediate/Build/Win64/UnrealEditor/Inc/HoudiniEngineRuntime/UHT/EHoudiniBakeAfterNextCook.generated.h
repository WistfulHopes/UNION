// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EHoudiniBakeAfterNextCook.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_EHoudiniBakeAfterNextCook_generated_h
#error "EHoudiniBakeAfterNextCook.generated.h already included, missing '#pragma once' in EHoudiniBakeAfterNextCook.h"
#endif
#define HOUDINIENGINERUNTIME_EHoudiniBakeAfterNextCook_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniBakeAfterNextCook_h


#define FOREACH_ENUM_EHOUDINIBAKEAFTERNEXTCOOK(op) \
	op(EHoudiniBakeAfterNextCook::Disabled) \
	op(EHoudiniBakeAfterNextCook::Always) \
	op(EHoudiniBakeAfterNextCook::Once) 

enum class EHoudiniBakeAfterNextCook : uint8;
template<> struct TIsUEnumClass<EHoudiniBakeAfterNextCook> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniBakeAfterNextCook>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
