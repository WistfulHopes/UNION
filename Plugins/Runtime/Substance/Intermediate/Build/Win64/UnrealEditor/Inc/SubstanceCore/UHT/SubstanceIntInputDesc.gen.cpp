// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubstanceCore/Public/SubstanceIntInputDesc.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstanceIntInputDesc() {}

// Begin Cross Module References
SUBSTANCECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSubstanceInputDesc();
SUBSTANCECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSubstanceIntInputDesc();
UPackage* Z_Construct_UPackage__Script_SubstanceCore();
// End Cross Module References

// Begin ScriptStruct FSubstanceIntInputDesc
static_assert(std::is_polymorphic<FSubstanceIntInputDesc>() == std::is_polymorphic<FSubstanceInputDesc>(), "USTRUCT FSubstanceIntInputDesc cannot be polymorphic unless super FSubstanceInputDesc is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubstanceIntInputDesc;
class UScriptStruct* FSubstanceIntInputDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubstanceIntInputDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubstanceIntInputDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubstanceIntInputDesc, (UObject*)Z_Construct_UPackage__Script_SubstanceCore(), TEXT("SubstanceIntInputDesc"));
	}
	return Z_Registration_Info_UScriptStruct_SubstanceIntInputDesc.OuterSingleton;
}
template<> SUBSTANCECORE_API UScriptStruct* StaticStruct<FSubstanceIntInputDesc>()
{
	return FSubstanceIntInputDesc::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SubstanceIntInputDesc.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceIntInputDesc" },
		{ "ModuleRelativePath", "Public/SubstanceIntInputDesc.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceIntInputDesc" },
		{ "ModuleRelativePath", "Public/SubstanceIntInputDesc.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceIntInputDesc" },
		{ "ModuleRelativePath", "Public/SubstanceIntInputDesc.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Min_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Min;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Max_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Max;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Default_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Default;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubstanceIntInputDesc>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Min_Inner = { "Min", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubstanceIntInputDesc, Min), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Min_MetaData), NewProp_Min_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Max_Inner = { "Max", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubstanceIntInputDesc, Max), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Default_Inner = { "Default", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubstanceIntInputDesc, Default), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Default_MetaData), NewProp_Default_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Min_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Max_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Max,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Default_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Default,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
	Z_Construct_UScriptStruct_FSubstanceInputDesc,
	&NewStructOps,
	"SubstanceIntInputDesc",
	Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::PropPointers),
	sizeof(FSubstanceIntInputDesc),
	alignof(FSubstanceIntInputDesc),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSubstanceIntInputDesc()
{
	if (!Z_Registration_Info_UScriptStruct_SubstanceIntInputDesc.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubstanceIntInputDesc.InnerSingleton, Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SubstanceIntInputDesc.InnerSingleton;
}
// End ScriptStruct FSubstanceIntInputDesc

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceIntInputDesc_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSubstanceIntInputDesc::StaticStruct, Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewStructOps, TEXT("SubstanceIntInputDesc"), &Z_Registration_Info_UScriptStruct_SubstanceIntInputDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubstanceIntInputDesc), 3232608461U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceIntInputDesc_h_3845372318(TEXT("/Script/SubstanceCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceIntInputDesc_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceIntInputDesc_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
