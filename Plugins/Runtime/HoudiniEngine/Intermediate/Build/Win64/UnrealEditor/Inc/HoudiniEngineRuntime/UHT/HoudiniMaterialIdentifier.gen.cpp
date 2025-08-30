// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniMaterialIdentifier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniMaterialIdentifier() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin ScriptStruct FHoudiniMaterialIdentifier
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniMaterialIdentifier;
class UScriptStruct* FHoudiniMaterialIdentifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniMaterialIdentifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniMaterialIdentifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniMaterialIdentifier"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniMaterialIdentifier.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniMaterialIdentifier>()
{
	return FHoudiniMaterialIdentifier::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HoudiniMaterialIdentifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialObjectPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniMaterialIdentifier" },
		{ "ModuleRelativePath", "Public/HoudiniMaterialIdentifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsHoudiniMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniMaterialIdentifier" },
		{ "ModuleRelativePath", "Public/HoudiniMaterialIdentifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMakeMaterialInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniMaterialIdentifier" },
		{ "ModuleRelativePath", "Public/HoudiniMaterialIdentifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInstanceParametersSlug_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniMaterialIdentifier" },
		{ "ModuleRelativePath", "Public/HoudiniMaterialIdentifier.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialObjectPath;
	static void NewProp_bIsHoudiniMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHoudiniMaterial;
	static void NewProp_bMakeMaterialInstance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMakeMaterialInstance;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialInstanceParametersSlug;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniMaterialIdentifier>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics::NewProp_MaterialObjectPath = { "MaterialObjectPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniMaterialIdentifier, MaterialObjectPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialObjectPath_MetaData), NewProp_MaterialObjectPath_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics::NewProp_bIsHoudiniMaterial_SetBit(void* Obj)
{
	((FHoudiniMaterialIdentifier*)Obj)->bIsHoudiniMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics::NewProp_bIsHoudiniMaterial = { "bIsHoudiniMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniMaterialIdentifier), &Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics::NewProp_bIsHoudiniMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsHoudiniMaterial_MetaData), NewProp_bIsHoudiniMaterial_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics::NewProp_bMakeMaterialInstance_SetBit(void* Obj)
{
	((FHoudiniMaterialIdentifier*)Obj)->bMakeMaterialInstance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics::NewProp_bMakeMaterialInstance = { "bMakeMaterialInstance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniMaterialIdentifier), &Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics::NewProp_bMakeMaterialInstance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMakeMaterialInstance_MetaData), NewProp_bMakeMaterialInstance_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics::NewProp_MaterialInstanceParametersSlug = { "MaterialInstanceParametersSlug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniMaterialIdentifier, MaterialInstanceParametersSlug), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialInstanceParametersSlug_MetaData), NewProp_MaterialInstanceParametersSlug_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics::NewProp_MaterialObjectPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics::NewProp_bIsHoudiniMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics::NewProp_bMakeMaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics::NewProp_MaterialInstanceParametersSlug,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniMaterialIdentifier",
	Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics::PropPointers),
	sizeof(FHoudiniMaterialIdentifier),
	alignof(FHoudiniMaterialIdentifier),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniMaterialIdentifier.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniMaterialIdentifier.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniMaterialIdentifier.InnerSingleton;
}
// End ScriptStruct FHoudiniMaterialIdentifier

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniMaterialIdentifier_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHoudiniMaterialIdentifier::StaticStruct, Z_Construct_UScriptStruct_FHoudiniMaterialIdentifier_Statics::NewStructOps, TEXT("HoudiniMaterialIdentifier"), &Z_Registration_Info_UScriptStruct_HoudiniMaterialIdentifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniMaterialIdentifier), 2568822505U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniMaterialIdentifier_h_2187014904(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniMaterialIdentifier_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniMaterialIdentifier_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
