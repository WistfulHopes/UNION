// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubstanceInstanceFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USubstanceGraphInstance;
struct FSubstanceGraphDesc;
#ifdef SUBSTANCECORE_SubstanceInstanceFactory_generated_h
#error "SubstanceInstanceFactory.generated.h already included, missing '#pragma once' in SubstanceInstanceFactory.h"
#endif
#define SUBSTANCECORE_SubstanceInstanceFactory_generated_h

#define FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceInstanceFactory_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateGraphInstance); \
	DECLARE_FUNCTION(execGetGraphDescs); \
	DECLARE_FUNCTION(execGetGraphInstances);


#define FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceInstanceFactory_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubstanceInstanceFactory(); \
	friend struct Z_Construct_UClass_USubstanceInstanceFactory_Statics; \
public: \
	DECLARE_CLASS(USubstanceInstanceFactory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SubstanceCore"), NO_API) \
	DECLARE_SERIALIZER(USubstanceInstanceFactory)


#define FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceInstanceFactory_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USubstanceInstanceFactory(USubstanceInstanceFactory&&); \
	USubstanceInstanceFactory(const USubstanceInstanceFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubstanceInstanceFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubstanceInstanceFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USubstanceInstanceFactory) \
	NO_API virtual ~USubstanceInstanceFactory();


#define FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceInstanceFactory_h_10_PROLOG
#define FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceInstanceFactory_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceInstanceFactory_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceInstanceFactory_h_12_INCLASS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceInstanceFactory_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBSTANCECORE_API UClass* StaticClass<class USubstanceInstanceFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceInstanceFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
