// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AtomSpectrumAnalyzer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAtomAsrRack;
#ifdef CRIWARERUNTIME_AtomSpectrumAnalyzer_generated_h
#error "AtomSpectrumAnalyzer.generated.h already included, missing '#pragma once' in AtomSpectrumAnalyzer.h"
#endif
#define CRIWARERUNTIME_AtomSpectrumAnalyzer_generated_h

#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSpectrumAnalyzer_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateDspSpectra); \
	DECLARE_FUNCTION(execDestroyDspSpectra); \
	DECLARE_FUNCTION(execGetLevels); \
	DECLARE_FUNCTION(execGetLevelsDB);


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSpectrumAnalyzer_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomSpectrumAnalyzer(); \
	friend struct Z_Construct_UClass_UAtomSpectrumAnalyzer_Statics; \
public: \
	DECLARE_CLASS(UAtomSpectrumAnalyzer, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAtomSpectrumAnalyzer)


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSpectrumAnalyzer_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAtomSpectrumAnalyzer(UAtomSpectrumAnalyzer&&); \
	UAtomSpectrumAnalyzer(const UAtomSpectrumAnalyzer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomSpectrumAnalyzer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomSpectrumAnalyzer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAtomSpectrumAnalyzer) \
	NO_API virtual ~UAtomSpectrumAnalyzer();


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSpectrumAnalyzer_h_8_PROLOG
#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSpectrumAnalyzer_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSpectrumAnalyzer_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSpectrumAnalyzer_h_10_INCLASS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSpectrumAnalyzer_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class UAtomSpectrumAnalyzer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSpectrumAnalyzer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
