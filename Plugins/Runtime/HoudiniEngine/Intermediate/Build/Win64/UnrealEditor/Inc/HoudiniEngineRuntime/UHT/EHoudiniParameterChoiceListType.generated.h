// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EHoudiniParameterChoiceListType.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_EHoudiniParameterChoiceListType_generated_h
#error "EHoudiniParameterChoiceListType.generated.h already included, missing '#pragma once' in EHoudiniParameterChoiceListType.h"
#endif
#define HOUDINIENGINERUNTIME_EHoudiniParameterChoiceListType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniParameterChoiceListType_h


#define FOREACH_ENUM_EHOUDINIPARAMETERCHOICELISTTYPE(op) \
	op(EHoudiniParameterChoiceListType::None) \
	op(EHoudiniParameterChoiceListType::Normal) \
	op(EHoudiniParameterChoiceListType::Mini) \
	op(EHoudiniParameterChoiceListType::Replace) \
	op(EHoudiniParameterChoiceListType::Toggle) 

enum class EHoudiniParameterChoiceListType : uint8;
template<> struct TIsUEnumClass<EHoudiniParameterChoiceListType> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniParameterChoiceListType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
