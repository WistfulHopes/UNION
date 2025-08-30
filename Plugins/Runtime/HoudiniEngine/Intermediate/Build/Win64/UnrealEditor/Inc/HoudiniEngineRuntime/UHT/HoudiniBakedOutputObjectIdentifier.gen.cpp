// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniBakedOutputObjectIdentifier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniBakedOutputObjectIdentifier() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin ScriptStruct FHoudiniBakedOutputObjectIdentifier
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObjectIdentifier;
class UScriptStruct* FHoudiniBakedOutputObjectIdentifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObjectIdentifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObjectIdentifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniBakedOutputObjectIdentifier"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObjectIdentifier.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniBakedOutputObjectIdentifier>()
{
	return FHoudiniBakedOutputObjectIdentifier::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HoudiniBakedOutputObjectIdentifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniBakedOutputObjectIdentifier" },
		{ "ModuleRelativePath", "Public/HoudiniBakedOutputObjectIdentifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplitIdentifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniBakedOutputObjectIdentifier" },
		{ "ModuleRelativePath", "Public/HoudiniBakedOutputObjectIdentifier.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PartId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SplitIdentifier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniBakedOutputObjectIdentifier>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::NewProp_PartId = { "PartId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBakedOutputObjectIdentifier, PartId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartId_MetaData), NewProp_PartId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::NewProp_SplitIdentifier = { "SplitIdentifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniBakedOutputObjectIdentifier, SplitIdentifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplitIdentifier_MetaData), NewProp_SplitIdentifier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::NewProp_PartId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::NewProp_SplitIdentifier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniBakedOutputObjectIdentifier",
	Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::PropPointers),
	sizeof(FHoudiniBakedOutputObjectIdentifier),
	alignof(FHoudiniBakedOutputObjectIdentifier),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObjectIdentifier.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObjectIdentifier.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObjectIdentifier.InnerSingleton;
}
// End ScriptStruct FHoudiniBakedOutputObjectIdentifier

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniBakedOutputObjectIdentifier_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHoudiniBakedOutputObjectIdentifier::StaticStruct, Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::NewStructOps, TEXT("HoudiniBakedOutputObjectIdentifier"), &Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObjectIdentifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniBakedOutputObjectIdentifier), 1397517229U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniBakedOutputObjectIdentifier_h_752151796(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniBakedOutputObjectIdentifier_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniBakedOutputObjectIdentifier_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
