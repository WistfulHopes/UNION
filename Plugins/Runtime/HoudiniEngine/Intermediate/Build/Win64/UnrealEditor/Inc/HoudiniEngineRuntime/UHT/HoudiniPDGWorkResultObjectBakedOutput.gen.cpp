// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniPDGWorkResultObjectBakedOutput.h"
#include "HoudiniEngineRuntime/Public/HoudiniBakedOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniPDGWorkResultObjectBakedOutput() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniBakedOutput();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin ScriptStruct FHoudiniPDGWorkResultObjectBakedOutput
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniPDGWorkResultObjectBakedOutput;
class UScriptStruct* FHoudiniPDGWorkResultObjectBakedOutput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniPDGWorkResultObjectBakedOutput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniPDGWorkResultObjectBakedOutput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniPDGWorkResultObjectBakedOutput"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniPDGWorkResultObjectBakedOutput.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniPDGWorkResultObjectBakedOutput>()
{
	return FHoudiniPDGWorkResultObjectBakedOutput::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HoudiniPDGWorkResultObjectBakedOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakedOutputs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniPDGWorkResultObjectBakedOutput" },
		{ "ModuleRelativePath", "Public/HoudiniPDGWorkResultObjectBakedOutput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BakedOutputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BakedOutputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniPDGWorkResultObjectBakedOutput>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::NewProp_BakedOutputs_Inner = { "BakedOutputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniBakedOutput, METADATA_PARAMS(0, nullptr) }; // 3566858932
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::NewProp_BakedOutputs = { "BakedOutputs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniPDGWorkResultObjectBakedOutput, BakedOutputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakedOutputs_MetaData), NewProp_BakedOutputs_MetaData) }; // 3566858932
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::NewProp_BakedOutputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::NewProp_BakedOutputs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniPDGWorkResultObjectBakedOutput",
	Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::PropPointers),
	sizeof(FHoudiniPDGWorkResultObjectBakedOutput),
	alignof(FHoudiniPDGWorkResultObjectBakedOutput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniPDGWorkResultObjectBakedOutput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniPDGWorkResultObjectBakedOutput.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniPDGWorkResultObjectBakedOutput.InnerSingleton;
}
// End ScriptStruct FHoudiniPDGWorkResultObjectBakedOutput

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniPDGWorkResultObjectBakedOutput_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHoudiniPDGWorkResultObjectBakedOutput::StaticStruct, Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics::NewStructOps, TEXT("HoudiniPDGWorkResultObjectBakedOutput"), &Z_Registration_Info_UScriptStruct_HoudiniPDGWorkResultObjectBakedOutput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniPDGWorkResultObjectBakedOutput), 1619359182U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniPDGWorkResultObjectBakedOutput_h_1394305733(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniPDGWorkResultObjectBakedOutput_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniPDGWorkResultObjectBakedOutput_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
