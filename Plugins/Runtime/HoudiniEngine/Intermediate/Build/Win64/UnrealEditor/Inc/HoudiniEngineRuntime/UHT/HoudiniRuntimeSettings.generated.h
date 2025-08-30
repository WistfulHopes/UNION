// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniRuntimeSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_HoudiniRuntimeSettings_generated_h
#error "HoudiniRuntimeSettings.generated.h already included, missing '#pragma once' in HoudiniRuntimeSettings.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniRuntimeSettings_generated_h

#define FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniRuntimeSettings_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniRuntimeSettings(); \
	friend struct Z_Construct_UClass_UHoudiniRuntimeSettings_Statics; \
public: \
	DECLARE_CLASS(UHoudiniRuntimeSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniRuntimeSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniRuntimeSettings_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHoudiniRuntimeSettings(UHoudiniRuntimeSettings&&); \
	UHoudiniRuntimeSettings(const UHoudiniRuntimeSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniRuntimeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniRuntimeSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoudiniRuntimeSettings) \
	NO_API virtual ~UHoudiniRuntimeSettings();


#define FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniRuntimeSettings_h_17_PROLOG
#define FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniRuntimeSettings_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniRuntimeSettings_h_19_INCLASS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniRuntimeSettings_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<class UHoudiniRuntimeSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniRuntimeSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
