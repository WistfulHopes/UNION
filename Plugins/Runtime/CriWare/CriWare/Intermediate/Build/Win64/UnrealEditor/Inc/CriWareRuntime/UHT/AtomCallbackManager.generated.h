// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AtomCallbackManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAtomSequenceEventType : uint8;
struct FAtomBeatSyncInfo;
struct FAtomSequenceInfo;
#ifdef CRIWARERUNTIME_AtomCallbackManager_generated_h
#error "AtomCallbackManager.generated.h already included, missing '#pragma once' in AtomCallbackManager.h"
#endif
#define CRIWARERUNTIME_AtomCallbackManager_generated_h

#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCallbackManager_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execNativeBreakAtomBeatSyncInfo); \
	DECLARE_FUNCTION(execNativeBreakAtomSequenceInfo);


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCallbackManager_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomCallbackManager(); \
	friend struct Z_Construct_UClass_UAtomCallbackManager_Statics; \
public: \
	DECLARE_CLASS(UAtomCallbackManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAtomCallbackManager)


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCallbackManager_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAtomCallbackManager(UAtomCallbackManager&&); \
	UAtomCallbackManager(const UAtomCallbackManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomCallbackManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomCallbackManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAtomCallbackManager) \
	NO_API virtual ~UAtomCallbackManager();


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCallbackManager_h_9_PROLOG
#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCallbackManager_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCallbackManager_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCallbackManager_h_11_INCLASS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCallbackManager_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class UAtomCallbackManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCallbackManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
