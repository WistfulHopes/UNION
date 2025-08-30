// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniAssetBlueprintOutput.h"
#include "HoudiniEngineRuntime/Public/HoudiniOutputObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniAssetBlueprintOutput() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniOutputObject();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin ScriptStruct FHoudiniAssetBlueprintOutput
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniAssetBlueprintOutput;
class UScriptStruct* FHoudiniAssetBlueprintOutput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniAssetBlueprintOutput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniAssetBlueprintOutput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniAssetBlueprintOutput"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniAssetBlueprintOutput.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniAssetBlueprintOutput>()
{
	return FHoudiniAssetBlueprintOutput::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetBlueprintOutput" },
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniAssetBlueprintOutput" },
		{ "ModuleRelativePath", "Public/HoudiniAssetBlueprintOutput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutputIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniAssetBlueprintOutput>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput_Statics::NewProp_OutputIndex = { "OutputIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniAssetBlueprintOutput, OutputIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputIndex_MetaData), NewProp_OutputIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput_Statics::NewProp_OutputObject = { "OutputObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniAssetBlueprintOutput, OutputObject), Z_Construct_UScriptStruct_FHoudiniOutputObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputObject_MetaData), NewProp_OutputObject_MetaData) }; // 1263940122
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput_Statics::NewProp_OutputIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput_Statics::NewProp_OutputObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniAssetBlueprintOutput",
	Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput_Statics::PropPointers),
	sizeof(FHoudiniAssetBlueprintOutput),
	alignof(FHoudiniAssetBlueprintOutput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniAssetBlueprintOutput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniAssetBlueprintOutput.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniAssetBlueprintOutput.InnerSingleton;
}
// End ScriptStruct FHoudiniAssetBlueprintOutput

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintOutput_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHoudiniAssetBlueprintOutput::StaticStruct, Z_Construct_UScriptStruct_FHoudiniAssetBlueprintOutput_Statics::NewStructOps, TEXT("HoudiniAssetBlueprintOutput"), &Z_Registration_Info_UScriptStruct_HoudiniAssetBlueprintOutput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniAssetBlueprintOutput), 2352092445U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintOutput_h_2358914681(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintOutput_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetBlueprintOutput_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
