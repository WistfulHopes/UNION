// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomCueInfoSelectorParam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomCueInfoSelectorParam() {}

// Begin Cross Module References
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin ScriptStruct FAtomCueInfoSelectorParam
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomCueInfoSelectorParam;
class UScriptStruct* FAtomCueInfoSelectorParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomCueInfoSelectorParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomCueInfoSelectorParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomCueInfoSelectorParam"));
	}
	return Z_Registration_Info_UScriptStruct_AtomCueInfoSelectorParam.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomCueInfoSelectorParam>()
{
	return FAtomCueInfoSelectorParam::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomCueInfoSelectorParam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoSelectorParam" },
		{ "ModuleRelativePath", "Public/AtomCueInfoSelectorParam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoSelectorParam" },
		{ "ModuleRelativePath", "Public/AtomCueInfoSelectorParam.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomCueInfoSelectorParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomCueInfoSelectorParam, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomCueInfoSelectorParam, Label), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Label_MetaData), NewProp_Label_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam_Statics::NewProp_Label,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	&NewStructOps,
	"AtomCueInfoSelectorParam",
	Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam_Statics::PropPointers),
	sizeof(FAtomCueInfoSelectorParam),
	alignof(FAtomCueInfoSelectorParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam()
{
	if (!Z_Registration_Info_UScriptStruct_AtomCueInfoSelectorParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomCueInfoSelectorParam.InnerSingleton, Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AtomCueInfoSelectorParam.InnerSingleton;
}
// End ScriptStruct FAtomCueInfoSelectorParam

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoSelectorParam_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAtomCueInfoSelectorParam::StaticStruct, Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam_Statics::NewStructOps, TEXT("AtomCueInfoSelectorParam"), &Z_Registration_Info_UScriptStruct_AtomCueInfoSelectorParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomCueInfoSelectorParam), 3026457658U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoSelectorParam_h_2639870957(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoSelectorParam_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoSelectorParam_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
