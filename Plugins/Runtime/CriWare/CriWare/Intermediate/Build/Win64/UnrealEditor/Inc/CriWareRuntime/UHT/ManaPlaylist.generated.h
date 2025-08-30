// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ManaPlaylist.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UManaMovie;
#ifdef CRIWARERUNTIME_ManaPlaylist_generated_h
#error "ManaPlaylist.generated.h already included, missing '#pragma once' in ManaPlaylist.h"
#endif
#define CRIWARERUNTIME_ManaPlaylist_generated_h

#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAdd); \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execGetNext); \
	DECLARE_FUNCTION(execGetPrevious); \
	DECLARE_FUNCTION(execGetRandom); \
	DECLARE_FUNCTION(execInsert); \
	DECLARE_FUNCTION(execIsAlpha); \
	DECLARE_FUNCTION(execIsMixedTypes); \
	DECLARE_FUNCTION(execIsSeamless); \
	DECLARE_FUNCTION(execNum); \
	DECLARE_FUNCTION(execRemove); \
	DECLARE_FUNCTION(execRemoveAt);


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUManaPlaylist(); \
	friend struct Z_Construct_UClass_UManaPlaylist_Statics; \
public: \
	DECLARE_CLASS(UManaPlaylist, UManaSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UManaPlaylist)


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UManaPlaylist(UManaPlaylist&&); \
	UManaPlaylist(const UManaPlaylist&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManaPlaylist); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManaPlaylist); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UManaPlaylist) \
	NO_API virtual ~UManaPlaylist();


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_8_PROLOG
#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_INCLASS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class UManaPlaylist>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
