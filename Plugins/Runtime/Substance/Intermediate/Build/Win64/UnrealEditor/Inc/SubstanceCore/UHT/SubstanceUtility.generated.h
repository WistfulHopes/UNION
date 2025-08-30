// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubstanceUtility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterial;
class UMaterialInterface;
class UObject;
class USubstanceGraphInstance;
class USubstanceInstanceFactory;
class UTexture2D;
struct FSubstanceConnection;
#ifdef SUBSTANCECORE_SubstanceUtility_generated_h
#error "SubstanceUtility.generated.h already included, missing '#pragma once' in SubstanceUtility.h"
#endif
#define SUBSTANCECORE_SubstanceUtility_generated_h

#define FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceUtility_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAsyncRendering); \
	DECLARE_FUNCTION(execClearCache); \
	DECLARE_FUNCTION(execCopyInputParameters); \
	DECLARE_FUNCTION(execCreateAggregateSubstanceFactory); \
	DECLARE_FUNCTION(execCreateGraphInstance); \
	DECLARE_FUNCTION(execDisableInstanceOutputs); \
	DECLARE_FUNCTION(execDuplicateGraphInstance); \
	DECLARE_FUNCTION(execEnableInstanceOutputs); \
	DECLARE_FUNCTION(execGetFactoryName); \
	DECLARE_FUNCTION(execGetGraphName); \
	DECLARE_FUNCTION(execGetSubstanceIncludedMaterials); \
	DECLARE_FUNCTION(execGetSubstanceLoadingProgress); \
	DECLARE_FUNCTION(execGetSubstances); \
	DECLARE_FUNCTION(execGetSubstanceTextures); \
	DECLARE_FUNCTION(execResetInputParameters); \
	DECLARE_FUNCTION(execSetGraphInstanceOutputSize); \
	DECLARE_FUNCTION(execSetGraphInstanceOutputSizeInt); \
	DECLARE_FUNCTION(execSyncRendering);


#define FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceUtility_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubstanceUtility(); \
	friend struct Z_Construct_UClass_USubstanceUtility_Statics; \
public: \
	DECLARE_CLASS(USubstanceUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SubstanceCore"), SUBSTANCECORE_API) \
	DECLARE_SERIALIZER(USubstanceUtility)


#define FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceUtility_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USubstanceUtility(USubstanceUtility&&); \
	USubstanceUtility(const USubstanceUtility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SUBSTANCECORE_API, USubstanceUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubstanceUtility); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USubstanceUtility) \
	SUBSTANCECORE_API virtual ~USubstanceUtility();


#define FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceUtility_h_15_PROLOG
#define FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceUtility_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceUtility_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceUtility_h_17_INCLASS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceUtility_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBSTANCECORE_API UClass* StaticClass<class USubstanceUtility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceUtility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
