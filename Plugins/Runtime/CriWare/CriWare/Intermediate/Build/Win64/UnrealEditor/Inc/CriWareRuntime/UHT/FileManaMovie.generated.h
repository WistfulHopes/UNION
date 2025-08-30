// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FileManaMovie.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIWARERUNTIME_FileManaMovie_generated_h
#error "FileManaMovie.generated.h already included, missing '#pragma once' in FileManaMovie.h"
#endif
#define CRIWARERUNTIME_FileManaMovie_generated_h

#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_FileManaMovie_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetFilePath);


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_FileManaMovie_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFileManaMovie(); \
	friend struct Z_Construct_UClass_UFileManaMovie_Statics; \
public: \
	DECLARE_CLASS(UFileManaMovie, UManaMovie, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UFileManaMovie)


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_FileManaMovie_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFileManaMovie(UFileManaMovie&&); \
	UFileManaMovie(const UFileManaMovie&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileManaMovie); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileManaMovie); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFileManaMovie) \
	NO_API virtual ~UFileManaMovie();


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_FileManaMovie_h_6_PROLOG
#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_FileManaMovie_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_FileManaMovie_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_FileManaMovie_h_8_INCLASS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_FileManaMovie_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class UFileManaMovie>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_FileManaMovie_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
