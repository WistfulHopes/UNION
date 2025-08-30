// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CriWareError.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCriWareError;
struct FCriWareErrorInfo;
#ifdef CRIWARERUNTIME_CriWareError_generated_h
#error "CriWareError.generated.h already included, missing '#pragma once' in CriWareError.h"
#endif
#define CRIWARERUNTIME_CriWareError_generated_h

#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareError_h_13_DELEGATE \
static CRIWARERUNTIME_API void FOnCriWareError_DelegateWrapper(const FMulticastScriptDelegate& OnCriWareError, FCriWareErrorInfo const& ErrorInfo);


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareError_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCriWareError);


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareError_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCriWareError(); \
	friend struct Z_Construct_UClass_UCriWareError_Statics; \
public: \
	DECLARE_CLASS(UCriWareError, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), CRIWARERUNTIME_API) \
	DECLARE_SERIALIZER(UCriWareError)


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareError_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCriWareError(UCriWareError&&); \
	UCriWareError(const UCriWareError&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CRIWARERUNTIME_API, UCriWareError); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCriWareError); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCriWareError) \
	CRIWARERUNTIME_API virtual ~UCriWareError();


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareError_h_9_PROLOG
#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareError_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareError_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareError_h_11_INCLASS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareError_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class UCriWareError>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareError_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
