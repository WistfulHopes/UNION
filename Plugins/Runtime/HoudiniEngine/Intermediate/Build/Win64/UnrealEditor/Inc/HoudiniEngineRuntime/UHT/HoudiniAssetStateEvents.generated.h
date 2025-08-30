// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniAssetStateEvents.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_HoudiniAssetStateEvents_generated_h
#error "HoudiniAssetStateEvents.generated.h already included, missing '#pragma once' in HoudiniAssetStateEvents.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniAssetStateEvents_generated_h

#define FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetStateEvents_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniAssetStateEvents(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHoudiniAssetStateEvents(UHoudiniAssetStateEvents&&); \
	UHoudiniAssetStateEvents(const UHoudiniAssetStateEvents&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniAssetStateEvents); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniAssetStateEvents); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniAssetStateEvents) \
	NO_API virtual ~UHoudiniAssetStateEvents();


#define FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetStateEvents_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUHoudiniAssetStateEvents(); \
	friend struct Z_Construct_UClass_UHoudiniAssetStateEvents_Statics; \
public: \
	DECLARE_CLASS(UHoudiniAssetStateEvents, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniAssetStateEvents)


#define FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetStateEvents_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetStateEvents_h_8_GENERATED_UINTERFACE_BODY() \
	FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetStateEvents_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetStateEvents_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IHoudiniAssetStateEvents() {} \
public: \
	typedef UHoudiniAssetStateEvents UClassType; \
	typedef IHoudiniAssetStateEvents ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetStateEvents_h_6_PROLOG
#define FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetStateEvents_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetStateEvents_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<class UHoudiniAssetStateEvents>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetStateEvents_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
