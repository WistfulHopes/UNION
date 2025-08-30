// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AtomProfileData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class EAtomProfileSortType : uint8;
enum class EAtomSortOrderType : uint8;
struct FAtomProfileItem;
#ifdef CRIWARERUNTIME_AtomProfileData_generated_h
#error "AtomProfileData.generated.h already included, missing '#pragma once' in AtomProfileData.h"
#endif
#define CRIWARERUNTIME_AtomProfileData_generated_h

#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomProfileData_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCriWareAdx2ProfileDataSort); \
	DECLARE_FUNCTION(execCriWareAdx2ProfileDataUpdate);


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomProfileData_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomProfileData(); \
	friend struct Z_Construct_UClass_UAtomProfileData_Statics; \
public: \
	DECLARE_CLASS(UAtomProfileData, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAtomProfileData)


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomProfileData_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAtomProfileData(UAtomProfileData&&); \
	UAtomProfileData(const UAtomProfileData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomProfileData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomProfileData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAtomProfileData) \
	NO_API virtual ~UAtomProfileData();


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomProfileData_h_11_PROLOG
#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomProfileData_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomProfileData_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomProfileData_h_13_INCLASS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomProfileData_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class UAtomProfileData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomProfileData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
