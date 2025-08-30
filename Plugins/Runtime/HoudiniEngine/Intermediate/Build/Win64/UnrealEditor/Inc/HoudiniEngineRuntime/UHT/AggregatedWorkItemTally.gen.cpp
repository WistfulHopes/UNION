// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/AggregatedWorkItemTally.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAggregatedWorkItemTally() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAggregatedWorkItemTally();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FWorkItemTallyBase();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin ScriptStruct FAggregatedWorkItemTally
static_assert(std::is_polymorphic<FAggregatedWorkItemTally>() == std::is_polymorphic<FWorkItemTallyBase>(), "USTRUCT FAggregatedWorkItemTally cannot be polymorphic unless super FWorkItemTallyBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AggregatedWorkItemTally;
class UScriptStruct* FAggregatedWorkItemTally::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AggregatedWorkItemTally.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AggregatedWorkItemTally.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAggregatedWorkItemTally, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("AggregatedWorkItemTally"));
	}
	return Z_Registration_Info_UScriptStruct_AggregatedWorkItemTally.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FAggregatedWorkItemTally>()
{
	return FAggregatedWorkItemTally::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AggregatedWorkItemTally.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalWorkItems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AggregatedWorkItemTally" },
		{ "ModuleRelativePath", "Public/AggregatedWorkItemTally.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaitingWorkItems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AggregatedWorkItemTally" },
		{ "ModuleRelativePath", "Public/AggregatedWorkItemTally.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScheduledWorkItems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AggregatedWorkItemTally" },
		{ "ModuleRelativePath", "Public/AggregatedWorkItemTally.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CookingWorkItems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AggregatedWorkItemTally" },
		{ "ModuleRelativePath", "Public/AggregatedWorkItemTally.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CookedWorkItems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AggregatedWorkItemTally" },
		{ "ModuleRelativePath", "Public/AggregatedWorkItemTally.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErroredWorkItems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AggregatedWorkItemTally" },
		{ "ModuleRelativePath", "Public/AggregatedWorkItemTally.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CookCancelledWorkItems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AggregatedWorkItemTally" },
		{ "ModuleRelativePath", "Public/AggregatedWorkItemTally.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalWorkItems;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WaitingWorkItems;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ScheduledWorkItems;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CookingWorkItems;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CookedWorkItems;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ErroredWorkItems;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CookCancelledWorkItems;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAggregatedWorkItemTally>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_TotalWorkItems = { "TotalWorkItems", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAggregatedWorkItemTally, TotalWorkItems), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalWorkItems_MetaData), NewProp_TotalWorkItems_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_WaitingWorkItems = { "WaitingWorkItems", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAggregatedWorkItemTally, WaitingWorkItems), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaitingWorkItems_MetaData), NewProp_WaitingWorkItems_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_ScheduledWorkItems = { "ScheduledWorkItems", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAggregatedWorkItemTally, ScheduledWorkItems), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScheduledWorkItems_MetaData), NewProp_ScheduledWorkItems_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_CookingWorkItems = { "CookingWorkItems", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAggregatedWorkItemTally, CookingWorkItems), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CookingWorkItems_MetaData), NewProp_CookingWorkItems_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_CookedWorkItems = { "CookedWorkItems", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAggregatedWorkItemTally, CookedWorkItems), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CookedWorkItems_MetaData), NewProp_CookedWorkItems_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_ErroredWorkItems = { "ErroredWorkItems", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAggregatedWorkItemTally, ErroredWorkItems), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErroredWorkItems_MetaData), NewProp_ErroredWorkItems_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_CookCancelledWorkItems = { "CookCancelledWorkItems", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAggregatedWorkItemTally, CookCancelledWorkItems), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CookCancelledWorkItems_MetaData), NewProp_CookCancelledWorkItems_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_TotalWorkItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_WaitingWorkItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_ScheduledWorkItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_CookingWorkItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_CookedWorkItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_ErroredWorkItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewProp_CookCancelledWorkItems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	Z_Construct_UScriptStruct_FWorkItemTallyBase,
	&NewStructOps,
	"AggregatedWorkItemTally",
	Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::PropPointers),
	sizeof(FAggregatedWorkItemTally),
	alignof(FAggregatedWorkItemTally),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAggregatedWorkItemTally()
{
	if (!Z_Registration_Info_UScriptStruct_AggregatedWorkItemTally.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AggregatedWorkItemTally.InnerSingleton, Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AggregatedWorkItemTally.InnerSingleton;
}
// End ScriptStruct FAggregatedWorkItemTally

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_AggregatedWorkItemTally_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAggregatedWorkItemTally::StaticStruct, Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics::NewStructOps, TEXT("AggregatedWorkItemTally"), &Z_Registration_Info_UScriptStruct_AggregatedWorkItemTally, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAggregatedWorkItemTally), 1858335540U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_AggregatedWorkItemTally_h_2049497356(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_AggregatedWorkItemTally_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_AggregatedWorkItemTally_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
