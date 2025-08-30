// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubstanceGraphInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterial;
class UMaterialInstanceConstant;
class UMaterialInstanceDynamic;
class UObject;
class USubstanceGraphInstance;
struct FLinearColor;
struct FSubstanceFloatInputDesc;
struct FSubstanceInstanceDesc;
struct FSubstanceIntInputDesc;
#ifdef SUBSTANCECORE_SubstanceGraphInstance_generated_h
#error "SubstanceGraphInstance.generated.h already included, missing '#pragma once' in SubstanceGraphInstance.h"
#endif
#define SUBSTANCECORE_SubstanceGraphInstance_generated_h

#define FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceGraphInstance_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateMaterial); \
	DECLARE_FUNCTION(execCreateOutputs); \
	DECLARE_FUNCTION(execDuplicate); \
	DECLARE_FUNCTION(execEnableOutput); \
	DECLARE_FUNCTION(execGetConstantMaterial); \
	DECLARE_FUNCTION(execGetDynamicMaterialInstance); \
	DECLARE_FUNCTION(execGetFloatInputDesc); \
	DECLARE_FUNCTION(execGetInputBool); \
	DECLARE_FUNCTION(execGetInputColor); \
	DECLARE_FUNCTION(execGetInputFloat); \
	DECLARE_FUNCTION(execGetInputInt); \
	DECLARE_FUNCTION(execGetInputNames); \
	DECLARE_FUNCTION(execGetInputString); \
	DECLARE_FUNCTION(execGetInputType); \
	DECLARE_FUNCTION(execGetInstanceDesc); \
	DECLARE_FUNCTION(execGetIntInputDesc); \
	DECLARE_FUNCTION(execGetOutputNames); \
	DECLARE_FUNCTION(execRenderSync); \
	DECLARE_FUNCTION(execSetInputBool); \
	DECLARE_FUNCTION(execSetInputColor); \
	DECLARE_FUNCTION(execSetInputFloat); \
	DECLARE_FUNCTION(execSetInputImg); \
	DECLARE_FUNCTION(execSetInputInt); \
	DECLARE_FUNCTION(execSetInputString);


#define FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceGraphInstance_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubstanceGraphInstance(); \
	friend struct Z_Construct_UClass_USubstanceGraphInstance_Statics; \
public: \
	DECLARE_CLASS(USubstanceGraphInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SubstanceCore"), NO_API) \
	DECLARE_SERIALIZER(USubstanceGraphInstance)


#define FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceGraphInstance_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USubstanceGraphInstance(USubstanceGraphInstance&&); \
	USubstanceGraphInstance(const USubstanceGraphInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubstanceGraphInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubstanceGraphInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USubstanceGraphInstance) \
	NO_API virtual ~USubstanceGraphInstance();


#define FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceGraphInstance_h_21_PROLOG
#define FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceGraphInstance_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceGraphInstance_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceGraphInstance_h_23_INCLASS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceGraphInstance_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBSTANCECORE_API UClass* StaticClass<class USubstanceGraphInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceGraphInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
