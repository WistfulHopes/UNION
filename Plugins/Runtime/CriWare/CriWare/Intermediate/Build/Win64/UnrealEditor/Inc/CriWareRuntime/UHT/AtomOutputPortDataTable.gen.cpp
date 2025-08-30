// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomOutputPortDataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomOutputPortDataTable() {}

// Begin Cross Module References
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_ESpeakerType();
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomOutputPortDataTable();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin ScriptStruct FAtomOutputPortDataTable
static_assert(std::is_polymorphic<FAtomOutputPortDataTable>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FAtomOutputPortDataTable cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomOutputPortDataTable;
class UScriptStruct* FAtomOutputPortDataTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomOutputPortDataTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomOutputPortDataTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomOutputPortDataTable, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomOutputPortDataTable"));
	}
	return Z_Registration_Info_UScriptStruct_AtomOutputPortDataTable.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomOutputPortDataTable>()
{
	return FAtomOutputPortDataTable::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomOutputPortDataTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputPortName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomOutputPortDataTable" },
		{ "ModuleRelativePath", "Public/AtomOutputPortDataTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AsrRackID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomOutputPortDataTable" },
		{ "ModuleRelativePath", "Public/AtomOutputPortDataTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomOutputPortDataTable" },
		{ "ModuleRelativePath", "Public/AtomOutputPortDataTable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputPortName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AsrRackID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SpeakerType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SpeakerType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomOutputPortDataTable>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::NewProp_OutputPortName = { "OutputPortName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomOutputPortDataTable, OutputPortName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputPortName_MetaData), NewProp_OutputPortName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::NewProp_AsrRackID = { "AsrRackID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomOutputPortDataTable, AsrRackID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AsrRackID_MetaData), NewProp_AsrRackID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::NewProp_SpeakerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::NewProp_SpeakerType = { "SpeakerType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtomOutputPortDataTable, SpeakerType), Z_Construct_UEnum_CriWareRuntime_ESpeakerType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeakerType_MetaData), NewProp_SpeakerType_MetaData) }; // 3470529085
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::NewProp_OutputPortName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::NewProp_AsrRackID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::NewProp_SpeakerType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::NewProp_SpeakerType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"AtomOutputPortDataTable",
	Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::PropPointers),
	sizeof(FAtomOutputPortDataTable),
	alignof(FAtomOutputPortDataTable),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAtomOutputPortDataTable()
{
	if (!Z_Registration_Info_UScriptStruct_AtomOutputPortDataTable.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomOutputPortDataTable.InnerSingleton, Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AtomOutputPortDataTable.InnerSingleton;
}
// End ScriptStruct FAtomOutputPortDataTable

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomOutputPortDataTable_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAtomOutputPortDataTable::StaticStruct, Z_Construct_UScriptStruct_FAtomOutputPortDataTable_Statics::NewStructOps, TEXT("AtomOutputPortDataTable"), &Z_Registration_Info_UScriptStruct_AtomOutputPortDataTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomOutputPortDataTable), 1792055663U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomOutputPortDataTable_h_3829742228(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomOutputPortDataTable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomOutputPortDataTable_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
