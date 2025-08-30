// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ManaTexture.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UManaSource;
class UManaTexture;
#ifdef CRIWARERUNTIME_ManaTexture_generated_h
#error "ManaTexture.generated.h already included, missing '#pragma once' in ManaTexture.h"
#endif
#define CRIWARERUNTIME_ManaTexture_generated_h

#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_19_DELEGATE \
static void FOnTextureUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnTextureUpdated, UManaTexture* ManaTexture);


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetMovieSource);


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUManaTexture(); \
	friend struct Z_Construct_UClass_UManaTexture_Statics; \
public: \
	DECLARE_CLASS(UManaTexture, UTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UManaTexture)


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UManaTexture(UManaTexture&&); \
	UManaTexture(const UManaTexture&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManaTexture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManaTexture); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UManaTexture) \
	NO_API virtual ~UManaTexture();


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_15_PROLOG
#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_17_INCLASS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class UManaTexture>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
