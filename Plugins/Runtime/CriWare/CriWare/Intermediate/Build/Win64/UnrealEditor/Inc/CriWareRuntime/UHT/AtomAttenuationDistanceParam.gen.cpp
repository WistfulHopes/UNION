// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomAttenuationDistanceParam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAttenuationDistanceParam() {}

// Begin Cross Module References
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin ScriptStruct FAtomAttenuationDistanceParam
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomAttenuationDistanceParam;
class UScriptStruct* FAtomAttenuationDistanceParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomAttenuationDistanceParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomAttenuationDistanceParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomAttenuationDistanceParam"));
	}
	return Z_Registration_Info_UScriptStruct_AtomAttenuationDistanceParam.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomAttenuationDistanceParam>()
{
	return FAtomAttenuationDistanceParam::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomAttenuationDistanceParam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAttenuationDistanceParam" },
		{ "ModuleRelativePath", "Public/AtomAttenuationDistanceParam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAttenuationDistanceParam" },
		{ "ModuleRelativePath", "Public/AtomAttenuationDistanceParam.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomAttenuationDistanceParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MinDistance = { "MinDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomAttenuationDistanceParam, MinDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinDistance_MetaData), NewProp_MinDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomAttenuationDistanceParam, MaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistance_MetaData), NewProp_MaxDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MinDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MaxDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	&NewStructOps,
	"AtomAttenuationDistanceParam",
	Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::PropPointers),
	sizeof(FAtomAttenuationDistanceParam),
	alignof(FAtomAttenuationDistanceParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam()
{
	if (!Z_Registration_Info_UScriptStruct_AtomAttenuationDistanceParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomAttenuationDistanceParam.InnerSingleton, Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AtomAttenuationDistanceParam.InnerSingleton;
}
// End ScriptStruct FAtomAttenuationDistanceParam

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAttenuationDistanceParam_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAtomAttenuationDistanceParam::StaticStruct, Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewStructOps, TEXT("AtomAttenuationDistanceParam"), &Z_Registration_Info_UScriptStruct_AtomAttenuationDistanceParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomAttenuationDistanceParam), 1228509231U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAttenuationDistanceParam_h_2128428554(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAttenuationDistanceParam_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAttenuationDistanceParam_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
