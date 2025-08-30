// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomCueInfoBusSendParam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomCueInfoBusSendParam() {}

// Begin Cross Module References
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin ScriptStruct FAtomCueInfoBusSendParam
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomCueInfoBusSendParam;
class UScriptStruct* FAtomCueInfoBusSendParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomCueInfoBusSendParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomCueInfoBusSendParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomCueInfoBusSendParam"));
	}
	return Z_Registration_Info_UScriptStruct_AtomCueInfoBusSendParam.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomCueInfoBusSendParam>()
{
	return FAtomCueInfoBusSendParam::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomCueInfoBusSendParam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoBusSendParam" },
		{ "ModuleRelativePath", "Public/AtomCueInfoBusSendParam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoBusSendParam" },
		{ "ModuleRelativePath", "Public/AtomCueInfoBusSendParam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoBusSendParam" },
		{ "ModuleRelativePath", "Public/AtomCueInfoBusSendParam.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_Enable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomCueInfoBusSendParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomCueInfoBusSendParam, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
void Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::NewProp_Enable_SetBit(void* Obj)
{
	((FAtomCueInfoBusSendParam*)Obj)->Enable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAtomCueInfoBusSendParam), &Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enable_MetaData), NewProp_Enable_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomCueInfoBusSendParam, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::NewProp_Enable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::NewProp_Level,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	&NewStructOps,
	"AtomCueInfoBusSendParam",
	Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::PropPointers),
	sizeof(FAtomCueInfoBusSendParam),
	alignof(FAtomCueInfoBusSendParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam()
{
	if (!Z_Registration_Info_UScriptStruct_AtomCueInfoBusSendParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomCueInfoBusSendParam.InnerSingleton, Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AtomCueInfoBusSendParam.InnerSingleton;
}
// End ScriptStruct FAtomCueInfoBusSendParam

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoBusSendParam_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAtomCueInfoBusSendParam::StaticStruct, Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::NewStructOps, TEXT("AtomCueInfoBusSendParam"), &Z_Registration_Info_UScriptStruct_AtomCueInfoBusSendParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomCueInfoBusSendParam), 1957126678U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoBusSendParam_h_1226821199(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoBusSendParam_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoBusSendParam_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
