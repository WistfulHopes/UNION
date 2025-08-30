// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EPDGWorkResultState.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_EPDGWorkResultState_generated_h
#error "EPDGWorkResultState.generated.h already included, missing '#pragma once' in EPDGWorkResultState.h"
#endif
#define HOUDINIENGINERUNTIME_EPDGWorkResultState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EPDGWorkResultState_h


#define FOREACH_ENUM_EPDGWORKRESULTSTATE(op) \
	op(EPDGWorkResultState::None) \
	op(EPDGWorkResultState::ToLoad) \
	op(EPDGWorkResultState::Loading) \
	op(EPDGWorkResultState::Loaded) \
	op(EPDGWorkResultState::ToDelete) \
	op(EPDGWorkResultState::Deleting) \
	op(EPDGWorkResultState::Deleted) \
	op(EPDGWorkResultState::NotLoaded) 

enum class EPDGWorkResultState : uint8;
template<> struct TIsUEnumClass<EPDGWorkResultState> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EPDGWorkResultState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
