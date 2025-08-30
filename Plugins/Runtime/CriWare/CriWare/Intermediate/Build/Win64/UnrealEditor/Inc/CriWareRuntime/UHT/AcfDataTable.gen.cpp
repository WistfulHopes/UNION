// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AcfDataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAcfDataTable() {}

// Begin Cross Module References
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAcfDataTable();
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomConfigDataTable();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin ScriptStruct FAcfDataTable
static_assert(std::is_polymorphic<FAcfDataTable>() == std::is_polymorphic<FAtomConfigDataTable>(), "USTRUCT FAcfDataTable cannot be polymorphic unless super FAtomConfigDataTable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AcfDataTable;
class UScriptStruct* FAcfDataTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AcfDataTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AcfDataTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAcfDataTable, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AcfDataTable"));
	}
	return Z_Registration_Info_UScriptStruct_AcfDataTable.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAcfDataTable>()
{
	return FAcfDataTable::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAcfDataTable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AcfDataTable.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAcfDataTable>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAcfDataTable_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	Z_Construct_UScriptStruct_FAtomConfigDataTable,
	&NewStructOps,
	"AcfDataTable",
	nullptr,
	0,
	sizeof(FAcfDataTable),
	alignof(FAcfDataTable),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAcfDataTable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAcfDataTable_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAcfDataTable()
{
	if (!Z_Registration_Info_UScriptStruct_AcfDataTable.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AcfDataTable.InnerSingleton, Z_Construct_UScriptStruct_FAcfDataTable_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AcfDataTable.InnerSingleton;
}
// End ScriptStruct FAcfDataTable

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AcfDataTable_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAcfDataTable::StaticStruct, Z_Construct_UScriptStruct_FAcfDataTable_Statics::NewStructOps, TEXT("AcfDataTable"), &Z_Registration_Info_UScriptStruct_AcfDataTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAcfDataTable), 509651295U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AcfDataTable_h_2877632016(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AcfDataTable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AcfDataTable_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
