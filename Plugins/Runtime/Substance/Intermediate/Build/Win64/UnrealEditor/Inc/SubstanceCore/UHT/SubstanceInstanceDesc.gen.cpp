// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubstanceCore/Public/SubstanceInstanceDesc.h"
#include "SubstanceCore/Public/SubstanceInputDesc.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstanceInstanceDesc() {}

// Begin Cross Module References
SUBSTANCECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSubstanceInputDesc();
SUBSTANCECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSubstanceInstanceDesc();
UPackage* Z_Construct_UPackage__Script_SubstanceCore();
// End Cross Module References

// Begin ScriptStruct FSubstanceInstanceDesc
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubstanceInstanceDesc;
class UScriptStruct* FSubstanceInstanceDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubstanceInstanceDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubstanceInstanceDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubstanceInstanceDesc, (UObject*)Z_Construct_UPackage__Script_SubstanceCore(), TEXT("SubstanceInstanceDesc"));
	}
	return Z_Registration_Info_UScriptStruct_SubstanceInstanceDesc.OuterSingleton;
}
template<> SUBSTANCECORE_API UScriptStruct* StaticStruct<FSubstanceInstanceDesc>()
{
	return FSubstanceInstanceDesc::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SubstanceInstanceDesc.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceInstanceDesc" },
		{ "ModuleRelativePath", "Public/SubstanceInstanceDesc.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceInstanceDesc" },
		{ "ModuleRelativePath", "Public/SubstanceInstanceDesc.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Inputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubstanceInstanceDesc>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubstanceInstanceDesc, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSubstanceInputDesc, METADATA_PARAMS(0, nullptr) }; // 2035133244
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubstanceInstanceDesc, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inputs_MetaData), NewProp_Inputs_MetaData) }; // 2035133244
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::NewProp_Inputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::NewProp_Inputs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
	nullptr,
	&NewStructOps,
	"SubstanceInstanceDesc",
	Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::PropPointers),
	sizeof(FSubstanceInstanceDesc),
	alignof(FSubstanceInstanceDesc),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSubstanceInstanceDesc()
{
	if (!Z_Registration_Info_UScriptStruct_SubstanceInstanceDesc.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubstanceInstanceDesc.InnerSingleton, Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SubstanceInstanceDesc.InnerSingleton;
}
// End ScriptStruct FSubstanceInstanceDesc

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceInstanceDesc_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSubstanceInstanceDesc::StaticStruct, Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::NewStructOps, TEXT("SubstanceInstanceDesc"), &Z_Registration_Info_UScriptStruct_SubstanceInstanceDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubstanceInstanceDesc), 1005840743U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceInstanceDesc_h_2964616521(TEXT("/Script/SubstanceCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceInstanceDesc_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceInstanceDesc_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
