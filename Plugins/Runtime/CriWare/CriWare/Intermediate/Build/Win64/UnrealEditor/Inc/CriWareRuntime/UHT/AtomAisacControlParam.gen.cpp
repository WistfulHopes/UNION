// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomAisacControlParam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAisacControlParam() {}

// Begin Cross Module References
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacControlParam();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin ScriptStruct FAtomAisacControlParam
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomAisacControlParam;
class UScriptStruct* FAtomAisacControlParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomAisacControlParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomAisacControlParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomAisacControlParam, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomAisacControlParam"));
	}
	return Z_Registration_Info_UScriptStruct_AtomAisacControlParam.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomAisacControlParam>()
{
	return FAtomAisacControlParam::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomAisacControlParam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAisacControlParam" },
		{ "ModuleRelativePath", "Public/AtomAisacControlParam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAisacControlParam" },
		{ "ModuleRelativePath", "Public/AtomAisacControlParam.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomAisacControlParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomAisacControlParam, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomAisacControlParam, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	&NewStructOps,
	"AtomAisacControlParam",
	Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::PropPointers),
	sizeof(FAtomAisacControlParam),
	alignof(FAtomAisacControlParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacControlParam()
{
	if (!Z_Registration_Info_UScriptStruct_AtomAisacControlParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomAisacControlParam.InnerSingleton, Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AtomAisacControlParam.InnerSingleton;
}
// End ScriptStruct FAtomAisacControlParam

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAisacControlParam_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAtomAisacControlParam::StaticStruct, Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::NewStructOps, TEXT("AtomAisacControlParam"), &Z_Registration_Info_UScriptStruct_AtomAisacControlParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomAisacControlParam), 11108791U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAisacControlParam_h_2415354026(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAisacControlParam_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAisacControlParam_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
