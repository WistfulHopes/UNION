// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/WorkItemTally.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorkItemTally() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FWorkItemTally();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FWorkItemTallyBase();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin ScriptStruct FWorkItemTally
static_assert(std::is_polymorphic<FWorkItemTally>() == std::is_polymorphic<FWorkItemTallyBase>(), "USTRUCT FWorkItemTally cannot be polymorphic unless super FWorkItemTallyBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorkItemTally;
class UScriptStruct* FWorkItemTally::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorkItemTally.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorkItemTally.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorkItemTally, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("WorkItemTally"));
	}
	return Z_Registration_Info_UScriptStruct_WorkItemTally.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FWorkItemTally>()
{
	return FWorkItemTally::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWorkItemTally_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WorkItemTally.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllWorkItems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WorkItemTally" },
		{ "ModuleRelativePath", "Public/WorkItemTally.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaitingWorkItems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WorkItemTally" },
		{ "ModuleRelativePath", "Public/WorkItemTally.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScheduledWorkItems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WorkItemTally" },
		{ "ModuleRelativePath", "Public/WorkItemTally.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CookingWorkItems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WorkItemTally" },
		{ "ModuleRelativePath", "Public/WorkItemTally.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CookedWorkItems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WorkItemTally" },
		{ "ModuleRelativePath", "Public/WorkItemTally.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErroredWorkItems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WorkItemTally" },
		{ "ModuleRelativePath", "Public/WorkItemTally.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CookCancelledWorkItems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WorkItemTally" },
		{ "ModuleRelativePath", "Public/WorkItemTally.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AllWorkItems_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_AllWorkItems;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WaitingWorkItems_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_WaitingWorkItems;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ScheduledWorkItems_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ScheduledWorkItems;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CookingWorkItems_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_CookingWorkItems;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CookedWorkItems_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_CookedWorkItems;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ErroredWorkItems_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ErroredWorkItems;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CookCancelledWorkItems_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_CookCancelledWorkItems;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorkItemTally>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_AllWorkItems_ElementProp = { "AllWorkItems", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_AllWorkItems = { "AllWorkItems", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorkItemTally, AllWorkItems), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllWorkItems_MetaData), NewProp_AllWorkItems_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_WaitingWorkItems_ElementProp = { "WaitingWorkItems", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_WaitingWorkItems = { "WaitingWorkItems", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorkItemTally, WaitingWorkItems), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaitingWorkItems_MetaData), NewProp_WaitingWorkItems_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ScheduledWorkItems_ElementProp = { "ScheduledWorkItems", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ScheduledWorkItems = { "ScheduledWorkItems", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorkItemTally, ScheduledWorkItems), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScheduledWorkItems_MetaData), NewProp_ScheduledWorkItems_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookingWorkItems_ElementProp = { "CookingWorkItems", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookingWorkItems = { "CookingWorkItems", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorkItemTally, CookingWorkItems), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CookingWorkItems_MetaData), NewProp_CookingWorkItems_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookedWorkItems_ElementProp = { "CookedWorkItems", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookedWorkItems = { "CookedWorkItems", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorkItemTally, CookedWorkItems), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CookedWorkItems_MetaData), NewProp_CookedWorkItems_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ErroredWorkItems_ElementProp = { "ErroredWorkItems", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ErroredWorkItems = { "ErroredWorkItems", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorkItemTally, ErroredWorkItems), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErroredWorkItems_MetaData), NewProp_ErroredWorkItems_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookCancelledWorkItems_ElementProp = { "CookCancelledWorkItems", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookCancelledWorkItems = { "CookCancelledWorkItems", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorkItemTally, CookCancelledWorkItems), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CookCancelledWorkItems_MetaData), NewProp_CookCancelledWorkItems_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorkItemTally_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_AllWorkItems_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_AllWorkItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_WaitingWorkItems_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_WaitingWorkItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ScheduledWorkItems_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ScheduledWorkItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookingWorkItems_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookingWorkItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookedWorkItems_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookedWorkItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ErroredWorkItems_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_ErroredWorkItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookCancelledWorkItems_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewProp_CookCancelledWorkItems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkItemTally_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorkItemTally_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	Z_Construct_UScriptStruct_FWorkItemTallyBase,
	&NewStructOps,
	"WorkItemTally",
	Z_Construct_UScriptStruct_FWorkItemTally_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkItemTally_Statics::PropPointers),
	sizeof(FWorkItemTally),
	alignof(FWorkItemTally),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkItemTally_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWorkItemTally_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWorkItemTally()
{
	if (!Z_Registration_Info_UScriptStruct_WorkItemTally.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorkItemTally.InnerSingleton, Z_Construct_UScriptStruct_FWorkItemTally_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WorkItemTally.InnerSingleton;
}
// End ScriptStruct FWorkItemTally

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_WorkItemTally_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWorkItemTally::StaticStruct, Z_Construct_UScriptStruct_FWorkItemTally_Statics::NewStructOps, TEXT("WorkItemTally"), &Z_Registration_Info_UScriptStruct_WorkItemTally, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorkItemTally), 3019783741U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_WorkItemTally_h_569656581(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_WorkItemTally_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_WorkItemTally_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
