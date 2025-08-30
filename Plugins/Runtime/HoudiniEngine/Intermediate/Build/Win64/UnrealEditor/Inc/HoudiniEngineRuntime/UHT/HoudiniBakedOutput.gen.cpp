// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniBakedOutput.h"
#include "HoudiniEngineRuntime/Public/HoudiniBakedOutputObject.h"
#include "HoudiniEngineRuntime/Public/HoudiniBakedOutputObjectIdentifier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniBakedOutput() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniBakedOutput();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniBakedOutputObject();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin ScriptStruct FHoudiniBakedOutput
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniBakedOutput;
class UScriptStruct* FHoudiniBakedOutput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniBakedOutput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniBakedOutput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniBakedOutput, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniBakedOutput"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniBakedOutput.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniBakedOutput>()
{
	return FHoudiniBakedOutput::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HoudiniBakedOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakedOutputObjects_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniBakedOutput" },
		{ "ModuleRelativePath", "Public/HoudiniBakedOutput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BakedOutputObjects_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BakedOutputObjects_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BakedOutputObjects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniBakedOutput>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::NewProp_BakedOutputObjects_ValueProp = { "BakedOutputObjects", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FHoudiniBakedOutputObject, METADATA_PARAMS(0, nullptr) }; // 793926336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::NewProp_BakedOutputObjects_Key_KeyProp = { "BakedOutputObjects_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier, METADATA_PARAMS(0, nullptr) }; // 1397517229
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::NewProp_BakedOutputObjects = { "BakedOutputObjects", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBakedOutput, BakedOutputObjects), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakedOutputObjects_MetaData), NewProp_BakedOutputObjects_MetaData) }; // 1397517229 793926336
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::NewProp_BakedOutputObjects_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::NewProp_BakedOutputObjects_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::NewProp_BakedOutputObjects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniBakedOutput",
	Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::PropPointers),
	sizeof(FHoudiniBakedOutput),
	alignof(FHoudiniBakedOutput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniBakedOutput()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniBakedOutput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniBakedOutput.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniBakedOutput.InnerSingleton;
}
// End ScriptStruct FHoudiniBakedOutput

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniBakedOutput_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHoudiniBakedOutput::StaticStruct, Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::NewStructOps, TEXT("HoudiniBakedOutput"), &Z_Registration_Info_UScriptStruct_HoudiniBakedOutput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniBakedOutput), 3566858932U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniBakedOutput_h_3414443984(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniBakedOutput_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniBakedOutput_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
