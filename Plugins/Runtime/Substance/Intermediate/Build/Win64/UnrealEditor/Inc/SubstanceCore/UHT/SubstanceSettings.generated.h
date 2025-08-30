// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubstanceSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBSTANCECORE_SubstanceSettings_generated_h
#error "SubstanceSettings.generated.h already included, missing '#pragma once' in SubstanceSettings.h"
#endif
#define SUBSTANCECORE_SubstanceSettings_generated_h

#define FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceSettings_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubstanceSettings(); \
	friend struct Z_Construct_UClass_USubstanceSettings_Statics; \
public: \
	DECLARE_CLASS(USubstanceSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/SubstanceCore"), NO_API) \
	DECLARE_SERIALIZER(USubstanceSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceSettings_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USubstanceSettings(USubstanceSettings&&); \
	USubstanceSettings(const USubstanceSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubstanceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubstanceSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USubstanceSettings) \
	NO_API virtual ~USubstanceSettings();


#define FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceSettings_h_10_PROLOG
#define FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceSettings_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceSettings_h_12_INCLASS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceSettings_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBSTANCECORE_API UClass* StaticClass<class USubstanceSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
