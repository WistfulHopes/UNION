// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniClearedTargetLayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniClearedTargetLayer() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin ScriptStruct FHoudiniClearedTargetLayer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniClearedTargetLayer;
class UScriptStruct* FHoudiniClearedTargetLayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniClearedTargetLayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniClearedTargetLayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniClearedTargetLayer"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniClearedTargetLayer.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniClearedTargetLayer>()
{
	return FHoudiniClearedTargetLayer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HoudiniClearedTargetLayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLayers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniClearedTargetLayer" },
		{ "ModuleRelativePath", "Public/HoudiniClearedTargetLayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TargetLayers_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_TargetLayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniClearedTargetLayer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::NewProp_TargetLayers_ElementProp = { "TargetLayers", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::NewProp_TargetLayers = { "TargetLayers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniClearedTargetLayer, TargetLayers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLayers_MetaData), NewProp_TargetLayers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::NewProp_TargetLayers_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::NewProp_TargetLayers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniClearedTargetLayer",
	Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::PropPointers),
	sizeof(FHoudiniClearedTargetLayer),
	alignof(FHoudiniClearedTargetLayer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniClearedTargetLayer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniClearedTargetLayer.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniClearedTargetLayer.InnerSingleton;
}
// End ScriptStruct FHoudiniClearedTargetLayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniClearedTargetLayer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHoudiniClearedTargetLayer::StaticStruct, Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::NewStructOps, TEXT("HoudiniClearedTargetLayer"), &Z_Registration_Info_UScriptStruct_HoudiniClearedTargetLayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniClearedTargetLayer), 2356783055U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniClearedTargetLayer_h_1013340185(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniClearedTargetLayer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniClearedTargetLayer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
