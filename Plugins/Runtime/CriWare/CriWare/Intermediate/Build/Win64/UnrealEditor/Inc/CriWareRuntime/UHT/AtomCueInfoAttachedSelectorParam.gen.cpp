// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomCueInfoAttachedSelectorParam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomCueInfoAttachedSelectorParam() {}

// Begin Cross Module References
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin ScriptStruct FAtomCueInfoAttachedSelectorParam
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomCueInfoAttachedSelectorParam;
class UScriptStruct* FAtomCueInfoAttachedSelectorParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomCueInfoAttachedSelectorParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomCueInfoAttachedSelectorParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomCueInfoAttachedSelectorParam"));
	}
	return Z_Registration_Info_UScriptStruct_AtomCueInfoAttachedSelectorParam.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomCueInfoAttachedSelectorParam>()
{
	return FAtomCueInfoAttachedSelectorParam::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomCueInfoAttachedSelectorParam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoAttachedSelectorParam" },
		{ "ModuleRelativePath", "Public/AtomCueInfoAttachedSelectorParam.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomCueInfoAttachedSelectorParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomCueInfoAttachedSelectorParam, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	&NewStructOps,
	"AtomCueInfoAttachedSelectorParam",
	Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::PropPointers),
	sizeof(FAtomCueInfoAttachedSelectorParam),
	alignof(FAtomCueInfoAttachedSelectorParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam()
{
	if (!Z_Registration_Info_UScriptStruct_AtomCueInfoAttachedSelectorParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomCueInfoAttachedSelectorParam.InnerSingleton, Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AtomCueInfoAttachedSelectorParam.InnerSingleton;
}
// End ScriptStruct FAtomCueInfoAttachedSelectorParam

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoAttachedSelectorParam_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAtomCueInfoAttachedSelectorParam::StaticStruct, Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::NewStructOps, TEXT("AtomCueInfoAttachedSelectorParam"), &Z_Registration_Info_UScriptStruct_AtomCueInfoAttachedSelectorParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomCueInfoAttachedSelectorParam), 3498613443U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoAttachedSelectorParam_h_120022278(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoAttachedSelectorParam_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoAttachedSelectorParam_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
