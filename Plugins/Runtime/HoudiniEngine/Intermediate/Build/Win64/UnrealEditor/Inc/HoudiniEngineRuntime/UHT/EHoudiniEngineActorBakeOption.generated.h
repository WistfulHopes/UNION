// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EHoudiniEngineActorBakeOption.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_EHoudiniEngineActorBakeOption_generated_h
#error "EHoudiniEngineActorBakeOption.generated.h already included, missing '#pragma once' in EHoudiniEngineActorBakeOption.h"
#endif
#define HOUDINIENGINERUNTIME_EHoudiniEngineActorBakeOption_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniEngineActorBakeOption_h


#define FOREACH_ENUM_EHOUDINIENGINEACTORBAKEOPTION(op) \
	op(EHoudiniEngineActorBakeOption::OneActorPerComponent) \
	op(EHoudiniEngineActorBakeOption::OneActorPerHDA) 

enum class EHoudiniEngineActorBakeOption : uint8;
template<> struct TIsUEnumClass<EHoudiniEngineActorBakeOption> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniEngineActorBakeOption>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
