// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubstanceCore/Public/SubstanceGraphDesc.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstanceGraphDesc() {}

// Begin Cross Module References
SUBSTANCECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSubstanceGraphDesc();
UPackage* Z_Construct_UPackage__Script_SubstanceCore();
// End Cross Module References

// Begin ScriptStruct FSubstanceGraphDesc
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubstanceGraphDesc;
class UScriptStruct* FSubstanceGraphDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubstanceGraphDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubstanceGraphDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubstanceGraphDesc, (UObject*)Z_Construct_UPackage__Script_SubstanceCore(), TEXT("SubstanceGraphDesc"));
	}
	return Z_Registration_Info_UScriptStruct_SubstanceGraphDesc.OuterSingleton;
}
template<> SUBSTANCECORE_API UScriptStruct* StaticStruct<FSubstanceGraphDesc>()
{
	return FSubstanceGraphDesc::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SubstanceGraphDesc.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceGraphDesc" },
		{ "ModuleRelativePath", "Public/SubstanceGraphDesc.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceGraphDesc" },
		{ "ModuleRelativePath", "Public/SubstanceGraphDesc.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceGraphDesc" },
		{ "ModuleRelativePath", "Public/SubstanceGraphDesc.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceGraphDesc" },
		{ "ModuleRelativePath", "Public/SubstanceGraphDesc.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Keywords_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceGraphDesc" },
		{ "ModuleRelativePath", "Public/SubstanceGraphDesc.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Author_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceGraphDesc" },
		{ "ModuleRelativePath", "Public/SubstanceGraphDesc.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuthorUrl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceGraphDesc" },
		{ "ModuleRelativePath", "Public/SubstanceGraphDesc.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubstanceGraphDesc" },
		{ "ModuleRelativePath", "Public/SubstanceGraphDesc.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Category;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Keywords;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Author;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AuthorUrl;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubstanceGraphDesc>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubstanceGraphDesc, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubstanceGraphDesc, Label), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Label_MetaData), NewProp_Label_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubstanceGraphDesc, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubstanceGraphDesc, Category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_Keywords = { "Keywords", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubstanceGraphDesc, Keywords), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Keywords_MetaData), NewProp_Keywords_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_Author = { "Author", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubstanceGraphDesc, Author), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Author_MetaData), NewProp_Author_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_AuthorUrl = { "AuthorUrl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubstanceGraphDesc, AuthorUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuthorUrl_MetaData), NewProp_AuthorUrl_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_UserTag = { "UserTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubstanceGraphDesc, UserTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserTag_MetaData), NewProp_UserTag_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_Label,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_Keywords,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_Author,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_AuthorUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_UserTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
	nullptr,
	&NewStructOps,
	"SubstanceGraphDesc",
	Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::PropPointers),
	sizeof(FSubstanceGraphDesc),
	alignof(FSubstanceGraphDesc),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSubstanceGraphDesc()
{
	if (!Z_Registration_Info_UScriptStruct_SubstanceGraphDesc.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubstanceGraphDesc.InnerSingleton, Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SubstanceGraphDesc.InnerSingleton;
}
// End ScriptStruct FSubstanceGraphDesc

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceGraphDesc_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSubstanceGraphDesc::StaticStruct, Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewStructOps, TEXT("SubstanceGraphDesc"), &Z_Registration_Info_UScriptStruct_SubstanceGraphDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubstanceGraphDesc), 119423006U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceGraphDesc_h_3236800219(TEXT("/Script/SubstanceCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceGraphDesc_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_SubstanceGraphDesc_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
