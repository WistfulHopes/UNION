// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CriWareFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundAtomCue;
class USoundAtomCueSheet;
enum class ECriWareSpeakerSystem : uint8;
#ifdef CRIWARERUNTIME_CriWareFunctionLibrary_generated_h
#error "CriWareFunctionLibrary.generated.h already included, missing '#pragma once' in CriWareFunctionLibrary.h"
#endif
#define CRIWARERUNTIME_CriWareFunctionLibrary_generated_h

#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSearchAtomCuesInAssetRegistry); \
	DECLARE_FUNCTION(execSetGameVariableByName); \
	DECLARE_FUNCTION(execSetGlobalLabelToSelectorByName); \
	DECLARE_FUNCTION(execSetSpeakerAngleArray);


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCriWareFunctionLibrary(); \
	friend struct Z_Construct_UClass_UCriWareFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UCriWareFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UCriWareFunctionLibrary)


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCriWareFunctionLibrary(UCriWareFunctionLibrary&&); \
	UCriWareFunctionLibrary(const UCriWareFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCriWareFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCriWareFunctionLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCriWareFunctionLibrary) \
	NO_API virtual ~UCriWareFunctionLibrary();


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_10_PROLOG
#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_12_INCLASS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class UCriWareFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
