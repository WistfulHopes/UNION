// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniClearedEditLayers.h"
#include "HoudiniEngineRuntime/Public/HoudiniClearedTargetLayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniClearedEditLayers() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniClearedEditLayers();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin ScriptStruct FHoudiniClearedEditLayers
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniClearedEditLayers;
class UScriptStruct* FHoudiniClearedEditLayers::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniClearedEditLayers.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniClearedEditLayers.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniClearedEditLayers, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniClearedEditLayers"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniClearedEditLayers.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniClearedEditLayers>()
{
	return FHoudiniClearedEditLayers::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HoudiniClearedEditLayers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditLayers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniClearedEditLayers" },
		{ "ModuleRelativePath", "Public/HoudiniClearedEditLayers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditLayers_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EditLayers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EditLayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniClearedEditLayers>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::NewProp_EditLayers_ValueProp = { "EditLayers", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer, METADATA_PARAMS(0, nullptr) }; // 2356783055
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::NewProp_EditLayers_Key_KeyProp = { "EditLayers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::NewProp_EditLayers = { "EditLayers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniClearedEditLayers, EditLayers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditLayers_MetaData), NewProp_EditLayers_MetaData) }; // 2356783055
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::NewProp_EditLayers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::NewProp_EditLayers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::NewProp_EditLayers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniClearedEditLayers",
	Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::PropPointers),
	sizeof(FHoudiniClearedEditLayers),
	alignof(FHoudiniClearedEditLayers),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniClearedEditLayers()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniClearedEditLayers.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniClearedEditLayers.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniClearedEditLayers.InnerSingleton;
}
// End ScriptStruct FHoudiniClearedEditLayers

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniClearedEditLayers_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHoudiniClearedEditLayers::StaticStruct, Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::NewStructOps, TEXT("HoudiniClearedEditLayers"), &Z_Registration_Info_UScriptStruct_HoudiniClearedEditLayers, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniClearedEditLayers), 3720495686U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniClearedEditLayers_h_1003930757(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniClearedEditLayers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniClearedEditLayers_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
