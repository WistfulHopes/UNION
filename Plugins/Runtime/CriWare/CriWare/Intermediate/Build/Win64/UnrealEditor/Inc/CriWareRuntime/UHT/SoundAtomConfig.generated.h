// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundAtomConfig.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAtomCategoryInfoParam;
#ifdef CRIWARERUNTIME_SoundAtomConfig_generated_h
#error "SoundAtomConfig.generated.h already included, missing '#pragma once' in SoundAtomConfig.h"
#endif
#define CRIWARERUNTIME_SoundAtomConfig_generated_h

#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomConfig_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCategoryInfoArray);


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomConfig_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundAtomConfig(); \
	friend struct Z_Construct_UClass_USoundAtomConfig_Statics; \
public: \
	DECLARE_CLASS(USoundAtomConfig, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(USoundAtomConfig)


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomConfig_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoundAtomConfig(USoundAtomConfig&&); \
	USoundAtomConfig(const USoundAtomConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundAtomConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundAtomConfig); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USoundAtomConfig) \
	NO_API virtual ~USoundAtomConfig();


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomConfig_h_7_PROLOG
#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomConfig_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomConfig_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomConfig_h_9_INCLASS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomConfig_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class USoundAtomConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomConfig_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
