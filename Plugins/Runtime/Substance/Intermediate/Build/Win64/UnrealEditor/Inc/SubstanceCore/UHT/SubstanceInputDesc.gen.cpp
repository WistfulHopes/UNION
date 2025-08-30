// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubstanceCore/Public/SubstanceInputDesc.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstanceInputDesc() {}

// Begin Cross Module References
SUBSTANCECORE_API UEnum* Z_Construct_UEnum_SubstanceCore_ESubstanceInputType();
SUBSTANCECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSubstanceInputDesc();
UPackage* Z_Construct_UPackage__Script_SubstanceCore();
// End Cross Module References

// Begin ScriptStruct FSubstanceInputDesc
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubstanceInputDesc;
class UScriptStruct* FSubstanceInputDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubstanceInputDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubstanceInputDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubstanceInputDesc, (UObject*)Z_Construct_UPackage__Script_SubstanceCore(), TEXT("SubstanceInputDesc"));
	}
	return Z_Registration_Info_UScriptStruct_SubstanceInputDesc.OuterSingleton;
}
template<> SUBSTANCECORE_API UScriptStruct* StaticStruct<FSubstanceInputDesc>()
{
	return FSubstanceInputDesc::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SubstanceInputDesc.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceInputDesc" },
		{ "ModuleRelativePath", "Public/SubstanceInputDesc.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceInputDesc" },
		{ "ModuleRelativePath", "Public/SubstanceInputDesc.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubstanceInputDesc>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubstanceInputDesc, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubstanceInputDesc, Type), Z_Construct_UEnum_SubstanceCore_ESubstanceInputType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 1603683655
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
	nullptr,
	&NewStructOps,
	"SubstanceInputDesc",
	Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::PropPointers),
	sizeof(FSubstanceInputDesc),
	alignof(FSubstanceInputDesc),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSubstanceInputDesc()
{
	if (!Z_Registration_Info_UScriptStruct_SubstanceInputDesc.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubstanceInputDesc.InnerSingleton, Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SubstanceInputDesc.InnerSingleton;
}
// End ScriptStruct FSubstanceInputDesc

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceInputDesc_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSubstanceInputDesc::StaticStruct, Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::NewStructOps, TEXT("SubstanceInputDesc"), &Z_Registration_Info_UScriptStruct_SubstanceInputDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubstanceInputDesc), 2035133244U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceInputDesc_h_1109456892(TEXT("/Script/SubstanceCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceInputDesc_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceInputDesc_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
