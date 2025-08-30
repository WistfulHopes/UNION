// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AtomCategory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAtomAisacInfo;
#ifdef CRIWARERUNTIME_AtomCategory_generated_h
#error "AtomCategory.generated.h already included, missing '#pragma once' in AtomCategory.h"
#endif
#define CRIWARERUNTIME_AtomCategory_generated_h

#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAttachedAisacInfoById); \
	DECLARE_FUNCTION(execGetAttachedAisacInfoByName); \
	DECLARE_FUNCTION(execGetCurrentAisacControlValueById); \
	DECLARE_FUNCTION(execGetCurrentAisacControlValueByName); \
	DECLARE_FUNCTION(execGetNumAttachedAisacsById); \
	DECLARE_FUNCTION(execGetNumAttachedAisacsByName); \
	DECLARE_FUNCTION(execGetVolumeByName); \
	DECLARE_FUNCTION(execIsPausedByName); \
	DECLARE_FUNCTION(execPauseByName); \
	DECLARE_FUNCTION(execResetAllAisacControlById); \
	DECLARE_FUNCTION(execResetAllAisacControlByName); \
	DECLARE_FUNCTION(execSetAisacControlByName); \
	DECLARE_FUNCTION(execSetMute); \
	DECLARE_FUNCTION(execSetVolumeByName); \
	DECLARE_FUNCTION(execStopByName);


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomCategory(); \
	friend struct Z_Construct_UClass_UAtomCategory_Statics; \
public: \
	DECLARE_CLASS(UAtomCategory, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAtomCategory)


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAtomCategory(UAtomCategory&&); \
	UAtomCategory(const UAtomCategory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomCategory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomCategory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAtomCategory) \
	NO_API virtual ~UAtomCategory();


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_7_PROLOG
#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_9_INCLASS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class UAtomCategory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
