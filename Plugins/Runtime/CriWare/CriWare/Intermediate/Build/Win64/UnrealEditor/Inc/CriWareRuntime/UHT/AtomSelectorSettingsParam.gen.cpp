// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomSelectorSettingsParam.h"
#include "CriWareRuntime/Public/AtomStringWithComment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSelectorSettingsParam() {}

// Begin Cross Module References
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSelectorSettingsParam();
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomStringWithComment();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin ScriptStruct FAtomSelectorSettingsParam
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomSelectorSettingsParam;
class UScriptStruct* FAtomSelectorSettingsParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomSelectorSettingsParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomSelectorSettingsParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomSelectorSettingsParam, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomSelectorSettingsParam"));
	}
	return Z_Registration_Info_UScriptStruct_AtomSelectorSettingsParam.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomSelectorSettingsParam>()
{
	return FAtomSelectorSettingsParam::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomSelectorSettingsParam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomSelectorSettingsParam" },
		{ "ModuleRelativePath", "Public/AtomSelectorSettingsParam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSelectorLabel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomSelectorSettingsParam" },
		{ "ModuleRelativePath", "Public/AtomSelectorSettingsParam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Labels_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomSelectorSettingsParam" },
		{ "ModuleRelativePath", "Public/AtomSelectorSettingsParam.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultSelectorLabel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Labels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Labels;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomSelectorSettingsParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomSelectorSettingsParam, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_DefaultSelectorLabel = { "DefaultSelectorLabel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomSelectorSettingsParam, DefaultSelectorLabel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSelectorLabel_MetaData), NewProp_DefaultSelectorLabel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_Labels_Inner = { "Labels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAtomStringWithComment, METADATA_PARAMS(0, nullptr) }; // 3288936258
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_Labels = { "Labels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomSelectorSettingsParam, Labels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Labels_MetaData), NewProp_Labels_MetaData) }; // 3288936258
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_DefaultSelectorLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_Labels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_Labels,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	&NewStructOps,
	"AtomSelectorSettingsParam",
	Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::PropPointers),
	sizeof(FAtomSelectorSettingsParam),
	alignof(FAtomSelectorSettingsParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAtomSelectorSettingsParam()
{
	if (!Z_Registration_Info_UScriptStruct_AtomSelectorSettingsParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomSelectorSettingsParam.InnerSingleton, Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AtomSelectorSettingsParam.InnerSingleton;
}
// End ScriptStruct FAtomSelectorSettingsParam

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSelectorSettingsParam_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAtomSelectorSettingsParam::StaticStruct, Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewStructOps, TEXT("AtomSelectorSettingsParam"), &Z_Registration_Info_UScriptStruct_AtomSelectorSettingsParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomSelectorSettingsParam), 1646306194U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSelectorSettingsParam_h_180314734(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSelectorSettingsParam_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSelectorSettingsParam_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
