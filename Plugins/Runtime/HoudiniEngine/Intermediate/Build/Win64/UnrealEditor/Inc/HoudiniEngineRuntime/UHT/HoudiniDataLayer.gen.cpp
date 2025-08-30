// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniDataLayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniDataLayer() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniDataLayer();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin ScriptStruct FHoudiniDataLayer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniDataLayer;
class UScriptStruct* FHoudiniDataLayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniDataLayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniDataLayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniDataLayer, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniDataLayer"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniDataLayer.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniDataLayer>()
{
	return FHoudiniDataLayer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HoudiniDataLayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniDataLayer" },
		{ "ModuleRelativePath", "Public/HoudiniDataLayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreateIfNeeded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniDataLayer" },
		{ "ModuleRelativePath", "Public/HoudiniDataLayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_bCreateIfNeeded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateIfNeeded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniDataLayer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniDataLayer, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
void Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::NewProp_bCreateIfNeeded_SetBit(void* Obj)
{
	((FHoudiniDataLayer*)Obj)->bCreateIfNeeded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::NewProp_bCreateIfNeeded = { "bCreateIfNeeded", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHoudiniDataLayer), &Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::NewProp_bCreateIfNeeded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreateIfNeeded_MetaData), NewProp_bCreateIfNeeded_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::NewProp_bCreateIfNeeded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniDataLayer",
	Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::PropPointers),
	sizeof(FHoudiniDataLayer),
	alignof(FHoudiniDataLayer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniDataLayer()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniDataLayer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniDataLayer.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniDataLayer.InnerSingleton;
}
// End ScriptStruct FHoudiniDataLayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniDataLayer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHoudiniDataLayer::StaticStruct, Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::NewStructOps, TEXT("HoudiniDataLayer"), &Z_Registration_Info_UScriptStruct_HoudiniDataLayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniDataLayer), 3893262836U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniDataLayer_h_2780829391(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniDataLayer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniDataLayer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
