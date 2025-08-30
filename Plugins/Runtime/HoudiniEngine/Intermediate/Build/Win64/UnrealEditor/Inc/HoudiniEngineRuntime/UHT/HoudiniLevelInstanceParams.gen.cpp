// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniLevelInstanceParams.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniLevelInstanceParams() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELevelInstanceCreationType();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin ScriptStruct FHoudiniLevelInstanceParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniLevelInstanceParams;
class UScriptStruct* FHoudiniLevelInstanceParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniLevelInstanceParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniLevelInstanceParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniLevelInstanceParams"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniLevelInstanceParams.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniLevelInstanceParams>()
{
	return FHoudiniLevelInstanceParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HoudiniLevelInstanceParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniLevelInstanceParams" },
		{ "ModuleRelativePath", "Public/HoudiniLevelInstanceParams.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniLevelInstanceParams" },
		{ "ModuleRelativePath", "Public/HoudiniLevelInstanceParams.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniLevelInstanceParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniLevelInstanceParams, Type), Z_Construct_UEnum_Engine_ELevelInstanceCreationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 1301537258
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoudiniLevelInstanceParams, OutputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputName_MetaData), NewProp_OutputName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::NewProp_OutputName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniLevelInstanceParams",
	Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::PropPointers),
	sizeof(FHoudiniLevelInstanceParams),
	alignof(FHoudiniLevelInstanceParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniLevelInstanceParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniLevelInstanceParams.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniLevelInstanceParams.InnerSingleton;
}
// End ScriptStruct FHoudiniLevelInstanceParams

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniLevelInstanceParams_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHoudiniLevelInstanceParams::StaticStruct, Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::NewStructOps, TEXT("HoudiniLevelInstanceParams"), &Z_Registration_Info_UScriptStruct_HoudiniLevelInstanceParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniLevelInstanceParams), 151636455U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniLevelInstanceParams_h_2210058461(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniLevelInstanceParams_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniLevelInstanceParams_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
