// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ManaMovie.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIWARERUNTIME_ManaMovie_generated_h
#error "ManaMovie.generated.h already included, missing '#pragma once' in ManaMovie.h"
#endif
#define CRIWARERUNTIME_ManaMovie_generated_h

#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaMovie_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetUrl); \
	DECLARE_FUNCTION(execValidate);


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaMovie_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUManaMovie(); \
	friend struct Z_Construct_UClass_UManaMovie_Statics; \
public: \
	DECLARE_CLASS(UManaMovie, UManaSource, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UManaMovie)


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaMovie_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UManaMovie(UManaMovie&&); \
	UManaMovie(const UManaMovie&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManaMovie); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManaMovie); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UManaMovie) \
	NO_API virtual ~UManaMovie();


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaMovie_h_10_PROLOG
#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaMovie_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaMovie_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaMovie_h_12_INCLASS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaMovie_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class UManaMovie>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaMovie_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
