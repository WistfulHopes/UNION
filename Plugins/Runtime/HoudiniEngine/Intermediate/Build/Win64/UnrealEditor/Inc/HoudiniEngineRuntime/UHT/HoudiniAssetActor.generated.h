// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniAssetActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_HoudiniAssetActor_generated_h
#error "HoudiniAssetActor.generated.h already included, missing '#pragma once' in HoudiniAssetActor.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniAssetActor_generated_h

#define FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetActor_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHoudiniAssetActor(); \
	friend struct Z_Construct_UClass_AHoudiniAssetActor_Statics; \
public: \
	DECLARE_CLASS(AHoudiniAssetActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(AHoudiniAssetActor)


#define FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetActor_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AHoudiniAssetActor(AHoudiniAssetActor&&); \
	AHoudiniAssetActor(const AHoudiniAssetActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHoudiniAssetActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHoudiniAssetActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHoudiniAssetActor) \
	NO_API virtual ~AHoudiniAssetActor();


#define FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetActor_h_8_PROLOG
#define FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetActor_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetActor_h_10_INCLASS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetActor_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<class AHoudiniAssetActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
