// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniParameterFile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_HoudiniParameterFile_generated_h
#error "HoudiniParameterFile.generated.h already included, missing '#pragma once' in HoudiniParameterFile.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniParameterFile_generated_h

#define FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniParameterFile_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniParameterFile(); \
	friend struct Z_Construct_UClass_UHoudiniParameterFile_Statics; \
public: \
	DECLARE_CLASS(UHoudiniParameterFile, UHoudiniParameter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniParameterFile)


#define FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniParameterFile_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHoudiniParameterFile(UHoudiniParameterFile&&); \
	UHoudiniParameterFile(const UHoudiniParameterFile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniParameterFile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniParameterFile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoudiniParameterFile) \
	NO_API virtual ~UHoudiniParameterFile();


#define FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniParameterFile_h_6_PROLOG
#define FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniParameterFile_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniParameterFile_h_8_INCLASS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniParameterFile_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<class UHoudiniParameterFile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniParameterFile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
