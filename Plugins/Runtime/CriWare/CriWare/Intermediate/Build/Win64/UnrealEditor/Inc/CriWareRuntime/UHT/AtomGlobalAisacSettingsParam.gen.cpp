// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomGlobalAisacSettingsParam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomGlobalAisacSettingsParam() {}

// Begin Cross Module References
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin ScriptStruct FAtomGlobalAisacSettingsParam
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomGlobalAisacSettingsParam;
class UScriptStruct* FAtomGlobalAisacSettingsParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomGlobalAisacSettingsParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomGlobalAisacSettingsParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomGlobalAisacSettingsParam"));
	}
	return Z_Registration_Info_UScriptStruct_AtomGlobalAisacSettingsParam.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomGlobalAisacSettingsParam>()
{
	return FAtomGlobalAisacSettingsParam::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomGlobalAisacSettingsParam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AisacControl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomGlobalAisacSettingsParam" },
		{ "ModuleRelativePath", "Public/AtomGlobalAisacSettingsParam.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AisacControl;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomGlobalAisacSettingsParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::NewProp_AisacControl = { "AisacControl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomGlobalAisacSettingsParam, AisacControl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AisacControl_MetaData), NewProp_AisacControl_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::NewProp_AisacControl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	&NewStructOps,
	"AtomGlobalAisacSettingsParam",
	Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::PropPointers),
	sizeof(FAtomGlobalAisacSettingsParam),
	alignof(FAtomGlobalAisacSettingsParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam()
{
	if (!Z_Registration_Info_UScriptStruct_AtomGlobalAisacSettingsParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomGlobalAisacSettingsParam.InnerSingleton, Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AtomGlobalAisacSettingsParam.InnerSingleton;
}
// End ScriptStruct FAtomGlobalAisacSettingsParam

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomGlobalAisacSettingsParam_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAtomGlobalAisacSettingsParam::StaticStruct, Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::NewStructOps, TEXT("AtomGlobalAisacSettingsParam"), &Z_Registration_Info_UScriptStruct_AtomGlobalAisacSettingsParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomGlobalAisacSettingsParam), 904368262U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomGlobalAisacSettingsParam_h_1702140372(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomGlobalAisacSettingsParam_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomGlobalAisacSettingsParam_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
