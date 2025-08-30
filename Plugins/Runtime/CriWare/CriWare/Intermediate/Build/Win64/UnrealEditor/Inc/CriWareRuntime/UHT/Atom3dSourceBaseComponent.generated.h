// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Atom3dSourceBaseComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAtom3dRegion;
#ifdef CRIWARERUNTIME_Atom3dSourceBaseComponent_generated_h
#error "Atom3dSourceBaseComponent.generated.h already included, missing '#pragma once' in Atom3dSourceBaseComponent.h"
#endif
#define CRIWARERUNTIME_Atom3dSourceBaseComponent_generated_h

#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_Atom3dSourceBaseComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetRegion);


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_Atom3dSourceBaseComponent_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtom3dSourceBaseComponent(); \
	friend struct Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics; \
public: \
	DECLARE_CLASS(UAtom3dSourceBaseComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAtom3dSourceBaseComponent)


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_Atom3dSourceBaseComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAtom3dSourceBaseComponent(UAtom3dSourceBaseComponent&&); \
	UAtom3dSourceBaseComponent(const UAtom3dSourceBaseComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtom3dSourceBaseComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtom3dSourceBaseComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtom3dSourceBaseComponent) \
	NO_API virtual ~UAtom3dSourceBaseComponent();


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_Atom3dSourceBaseComponent_h_8_PROLOG
#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_Atom3dSourceBaseComponent_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_Atom3dSourceBaseComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_Atom3dSourceBaseComponent_h_10_INCLASS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_Atom3dSourceBaseComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class UAtom3dSourceBaseComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_Atom3dSourceBaseComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
