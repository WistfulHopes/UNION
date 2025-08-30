// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomCueInfoAttachedAisacControlParam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomCueInfoAttachedAisacControlParam() {}

// Begin Cross Module References
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin ScriptStruct FAtomCueInfoAttachedAisacControlParam
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomCueInfoAttachedAisacControlParam;
class UScriptStruct* FAtomCueInfoAttachedAisacControlParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomCueInfoAttachedAisacControlParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomCueInfoAttachedAisacControlParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomCueInfoAttachedAisacControlParam"));
	}
	return Z_Registration_Info_UScriptStruct_AtomCueInfoAttachedAisacControlParam.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomCueInfoAttachedAisacControlParam>()
{
	return FAtomCueInfoAttachedAisacControlParam::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomCueInfoAttachedAisacControlParam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoAttachedAisacControlParam" },
		{ "ModuleRelativePath", "Public/AtomCueInfoAttachedAisacControlParam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoAttachedAisacControlParam" },
		{ "ModuleRelativePath", "Public/AtomCueInfoAttachedAisacControlParam.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomCueInfoAttachedAisacControlParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomCueInfoAttachedAisacControlParam, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomCueInfoAttachedAisacControlParam, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::NewProp_ID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	&NewStructOps,
	"AtomCueInfoAttachedAisacControlParam",
	Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::PropPointers),
	sizeof(FAtomCueInfoAttachedAisacControlParam),
	alignof(FAtomCueInfoAttachedAisacControlParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam()
{
	if (!Z_Registration_Info_UScriptStruct_AtomCueInfoAttachedAisacControlParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomCueInfoAttachedAisacControlParam.InnerSingleton, Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AtomCueInfoAttachedAisacControlParam.InnerSingleton;
}
// End ScriptStruct FAtomCueInfoAttachedAisacControlParam

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoAttachedAisacControlParam_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAtomCueInfoAttachedAisacControlParam::StaticStruct, Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::NewStructOps, TEXT("AtomCueInfoAttachedAisacControlParam"), &Z_Registration_Info_UScriptStruct_AtomCueInfoAttachedAisacControlParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomCueInfoAttachedAisacControlParam), 2688526039U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoAttachedAisacControlParam_h_3156766598(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoAttachedAisacControlParam_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoAttachedAisacControlParam_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
