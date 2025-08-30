// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomDspBusSettingsParam.h"
#include "CriWareRuntime/Public/AtomStringWithComment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomDspBusSettingsParam() {}

// Begin Cross Module References
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomDspBusSettingsParam();
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomStringWithComment();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin ScriptStruct FAtomDspBusSettingsParam
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomDspBusSettingsParam;
class UScriptStruct* FAtomDspBusSettingsParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomDspBusSettingsParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomDspBusSettingsParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomDspBusSettingsParam, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomDspBusSettingsParam"));
	}
	return Z_Registration_Info_UScriptStruct_AtomDspBusSettingsParam.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomDspBusSettingsParam>()
{
	return FAtomDspBusSettingsParam::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomDspBusSettingsParam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BusSettingsName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomDspBusSettingsParam" },
		{ "ModuleRelativePath", "Public/AtomDspBusSettingsParam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Snapshot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomDspBusSettingsParam" },
		{ "ModuleRelativePath", "Public/AtomDspBusSettingsParam.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomDspBusSettingsParam" },
		{ "ModuleRelativePath", "Public/AtomDspBusSettingsParam.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_BusSettingsName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Snapshot_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Snapshot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bus_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Bus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomDspBusSettingsParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_BusSettingsName = { "BusSettingsName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomDspBusSettingsParam, BusSettingsName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BusSettingsName_MetaData), NewProp_BusSettingsName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Snapshot_Inner = { "Snapshot", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAtomStringWithComment, METADATA_PARAMS(0, nullptr) }; // 3288936258
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Snapshot = { "Snapshot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomDspBusSettingsParam, Snapshot), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Snapshot_MetaData), NewProp_Snapshot_MetaData) }; // 3288936258
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Bus_Inner = { "Bus", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAtomStringWithComment, METADATA_PARAMS(0, nullptr) }; // 3288936258
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Bus = { "Bus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomDspBusSettingsParam, Bus), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bus_MetaData), NewProp_Bus_MetaData) }; // 3288936258
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_BusSettingsName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Snapshot_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Snapshot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Bus_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Bus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	&NewStructOps,
	"AtomDspBusSettingsParam",
	Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::PropPointers),
	sizeof(FAtomDspBusSettingsParam),
	alignof(FAtomDspBusSettingsParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAtomDspBusSettingsParam()
{
	if (!Z_Registration_Info_UScriptStruct_AtomDspBusSettingsParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomDspBusSettingsParam.InnerSingleton, Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AtomDspBusSettingsParam.InnerSingleton;
}
// End ScriptStruct FAtomDspBusSettingsParam

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomDspBusSettingsParam_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAtomDspBusSettingsParam::StaticStruct, Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewStructOps, TEXT("AtomDspBusSettingsParam"), &Z_Registration_Info_UScriptStruct_AtomDspBusSettingsParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomDspBusSettingsParam), 2933714695U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomDspBusSettingsParam_h_1017658268(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomDspBusSettingsParam_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomDspBusSettingsParam_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
