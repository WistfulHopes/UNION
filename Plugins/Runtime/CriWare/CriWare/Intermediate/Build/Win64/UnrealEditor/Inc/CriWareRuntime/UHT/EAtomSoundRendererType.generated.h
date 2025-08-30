// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EAtomSoundRendererType.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIWARERUNTIME_EAtomSoundRendererType_generated_h
#error "EAtomSoundRendererType.generated.h already included, missing '#pragma once' in EAtomSoundRendererType.h"
#endif
#define CRIWARERUNTIME_EAtomSoundRendererType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomSoundRendererType_h


#define FOREACH_ENUM_EATOMSOUNDRENDERERTYPE(op) \
	op(EAtomSoundRendererType::Any) \
	op(EAtomSoundRendererType::Native) \
	op(EAtomSoundRendererType::Asr) \
	op(EAtomSoundRendererType::Hardware1) \
	op(EAtomSoundRendererType::Hardware2) \
	op(EAtomSoundRendererType::Hardware3) \
	op(EAtomSoundRendererType::Hardware4) \
	op(EAtomSoundRendererType::Spatial) \
	op(EAtomSoundRendererType::VibrationHardware) \
	op(EAtomSoundRendererType::ObjectBasedAudio) \
	op(EAtomSoundRendererType::PassThrough) \
	op(EAtomSoundRendererType::RESTRICTED) \
	op(EAtomSoundRendererType::Pad) 

enum class EAtomSoundRendererType : int32;
template<> struct TIsUEnumClass<EAtomSoundRendererType> { enum { Value = true }; };
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomSoundRendererType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
