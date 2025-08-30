// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AtomAsrRack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAtomAsrRack;
#ifdef CRIWARERUNTIME_AtomAsrRack_generated_h
#error "AtomAsrRack.generated.h already included, missing '#pragma once' in AtomAsrRack.h"
#endif
#define CRIWARERUNTIME_AtomAsrRack_generated_h

#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRack_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplyDspBusSnapshot); \
	DECLARE_FUNCTION(execAssociateOutputPort); \
	DECLARE_FUNCTION(execAttachDspBusSetting); \
	DECLARE_FUNCTION(execConnectToPadSpeaker); \
	DECLARE_FUNCTION(execConnectToPadVibrator); \
	DECLARE_FUNCTION(execDetachDspBusSetting); \
	DECLARE_FUNCTION(execEnableBinauralizer); \
	DECLARE_FUNCTION(execGetAsrRack); \
	DECLARE_FUNCTION(execGetBusAnalyzerInfo); \
	DECLARE_FUNCTION(execGetCurrentAppliedSnapshot); \
	DECLARE_FUNCTION(execGetDefaultAsrRack); \
	DECLARE_FUNCTION(execIsEnabledBinauralizer); \
	DECLARE_FUNCTION(execSetAisacControlByName); \
	DECLARE_FUNCTION(execSetBusSendLevelByName); \
	DECLARE_FUNCTION(execSetBusVolumeByName); \
	DECLARE_FUNCTION(execSetEffectBypass);


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRack_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomAsrRack(); \
	friend struct Z_Construct_UClass_UAtomAsrRack_Statics; \
public: \
	DECLARE_CLASS(UAtomAsrRack, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAtomAsrRack)


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRack_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAtomAsrRack(UAtomAsrRack&&); \
	UAtomAsrRack(const UAtomAsrRack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomAsrRack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomAsrRack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAtomAsrRack) \
	NO_API virtual ~UAtomAsrRack();


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRack_h_8_PROLOG
#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRack_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRack_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRack_h_10_INCLASS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRack_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class UAtomAsrRack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
