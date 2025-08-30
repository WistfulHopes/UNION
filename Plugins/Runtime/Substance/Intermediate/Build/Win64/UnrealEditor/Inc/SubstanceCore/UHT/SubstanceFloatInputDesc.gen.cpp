// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubstanceCore/Public/SubstanceFloatInputDesc.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstanceFloatInputDesc() {}

// Begin Cross Module References
SUBSTANCECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSubstanceFloatInputDesc();
SUBSTANCECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSubstanceInputDesc();
UPackage* Z_Construct_UPackage__Script_SubstanceCore();
// End Cross Module References

// Begin ScriptStruct FSubstanceFloatInputDesc
static_assert(std::is_polymorphic<FSubstanceFloatInputDesc>() == std::is_polymorphic<FSubstanceInputDesc>(), "USTRUCT FSubstanceFloatInputDesc cannot be polymorphic unless super FSubstanceInputDesc is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubstanceFloatInputDesc;
class UScriptStruct* FSubstanceFloatInputDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubstanceFloatInputDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubstanceFloatInputDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubstanceFloatInputDesc, (UObject*)Z_Construct_UPackage__Script_SubstanceCore(), TEXT("SubstanceFloatInputDesc"));
	}
	return Z_Registration_Info_UScriptStruct_SubstanceFloatInputDesc.OuterSingleton;
}
template<> SUBSTANCECORE_API UScriptStruct* StaticStruct<FSubstanceFloatInputDesc>()
{
	return FSubstanceFloatInputDesc::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SubstanceFloatInputDesc.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceFloatInputDesc" },
		{ "ModuleRelativePath", "Public/SubstanceFloatInputDesc.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceFloatInputDesc" },
		{ "ModuleRelativePath", "Public/SubstanceFloatInputDesc.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceFloatInputDesc" },
		{ "ModuleRelativePath", "Public/SubstanceFloatInputDesc.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Min_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Min;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Max_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Max;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Default_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Default;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubstanceFloatInputDesc>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Min_Inner = { "Min", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubstanceFloatInputDesc, Min), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Min_MetaData), NewProp_Min_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Max_Inner = { "Max", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubstanceFloatInputDesc, Max), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Default_Inner = { "Default", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubstanceFloatInputDesc, Default), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Default_MetaData), NewProp_Default_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Min_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Max_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Max,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Default_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Default,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
	Z_Construct_UScriptStruct_FSubstanceInputDesc,
	&NewStructOps,
	"SubstanceFloatInputDesc",
	Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::PropPointers),
	sizeof(FSubstanceFloatInputDesc),
	alignof(FSubstanceFloatInputDesc),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSubstanceFloatInputDesc()
{
	if (!Z_Registration_Info_UScriptStruct_SubstanceFloatInputDesc.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubstanceFloatInputDesc.InnerSingleton, Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SubstanceFloatInputDesc.InnerSingleton;
}
// End ScriptStruct FSubstanceFloatInputDesc

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceFloatInputDesc_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSubstanceFloatInputDesc::StaticStruct, Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewStructOps, TEXT("SubstanceFloatInputDesc"), &Z_Registration_Info_UScriptStruct_SubstanceFloatInputDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubstanceFloatInputDesc), 1100972151U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceFloatInputDesc_h_1867266689(TEXT("/Script/SubstanceCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceFloatInputDesc_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceFloatInputDesc_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
