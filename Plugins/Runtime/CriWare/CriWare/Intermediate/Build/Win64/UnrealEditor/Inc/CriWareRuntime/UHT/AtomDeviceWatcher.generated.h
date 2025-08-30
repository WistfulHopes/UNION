// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AtomDeviceWatcher.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIWARERUNTIME_AtomDeviceWatcher_generated_h
#error "AtomDeviceWatcher.generated.h already included, missing '#pragma once' in AtomDeviceWatcher.h"
#endif
#define CRIWARERUNTIME_AtomDeviceWatcher_generated_h

#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomDeviceWatcher_h_10_DELEGATE \
static void FOnDeviceUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnDeviceUpdated);


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomDeviceWatcher_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDeviceChannelCount); \
	DECLARE_FUNCTION(execGetDeviceName);


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomDeviceWatcher_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomDeviceWatcher(); \
	friend struct Z_Construct_UClass_UAtomDeviceWatcher_Statics; \
public: \
	DECLARE_CLASS(UAtomDeviceWatcher, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAtomDeviceWatcher)


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomDeviceWatcher_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAtomDeviceWatcher(UAtomDeviceWatcher&&); \
	UAtomDeviceWatcher(const UAtomDeviceWatcher&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomDeviceWatcher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomDeviceWatcher); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAtomDeviceWatcher) \
	NO_API virtual ~UAtomDeviceWatcher();


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomDeviceWatcher_h_6_PROLOG
#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomDeviceWatcher_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomDeviceWatcher_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomDeviceWatcher_h_8_INCLASS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomDeviceWatcher_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class UAtomDeviceWatcher>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomDeviceWatcher_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
