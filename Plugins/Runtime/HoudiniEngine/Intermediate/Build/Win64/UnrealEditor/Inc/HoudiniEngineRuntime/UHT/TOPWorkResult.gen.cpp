// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/TOPWorkResult.h"
#include "HoudiniEngineRuntime/Public/TOPWorkResultObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTOPWorkResult() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTOPWorkResult();
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTOPWorkResultObject();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin ScriptStruct FTOPWorkResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TOPWorkResult;
class UScriptStruct* FTOPWorkResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TOPWorkResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TOPWorkResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTOPWorkResult, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("TOPWorkResult"));
	}
	return Z_Registration_Info_UScriptStruct_TOPWorkResult.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FTOPWorkResult>()
{
	return FTOPWorkResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTOPWorkResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TOPWorkResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkItemIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TOPWorkResult" },
		{ "ModuleRelativePath", "Public/TOPWorkResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkItemID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TOPWorkResult" },
		{ "ModuleRelativePath", "Public/TOPWorkResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultObjects_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TOPWorkResult" },
		{ "ModuleRelativePath", "Public/TOPWorkResult.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_WorkItemIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WorkItemID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResultObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ResultObjects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTOPWorkResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_WorkItemIndex = { "WorkItemIndex", nullptr, (EPropertyFlags)0x0010000400000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTOPWorkResult, WorkItemIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkItemIndex_MetaData), NewProp_WorkItemIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_WorkItemID = { "WorkItemID", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTOPWorkResult, WorkItemID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkItemID_MetaData), NewProp_WorkItemID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_ResultObjects_Inner = { "ResultObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTOPWorkResultObject, METADATA_PARAMS(0, nullptr) }; // 2408953892
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_ResultObjects = { "ResultObjects", nullptr, (EPropertyFlags)0x0010000400000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTOPWorkResult, ResultObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultObjects_MetaData), NewProp_ResultObjects_MetaData) }; // 2408953892
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTOPWorkResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_WorkItemIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_WorkItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_ResultObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewProp_ResultObjects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTOPWorkResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTOPWorkResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"TOPWorkResult",
	Z_Construct_UScriptStruct_FTOPWorkResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTOPWorkResult_Statics::PropPointers),
	sizeof(FTOPWorkResult),
	alignof(FTOPWorkResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTOPWorkResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTOPWorkResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTOPWorkResult()
{
	if (!Z_Registration_Info_UScriptStruct_TOPWorkResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TOPWorkResult.InnerSingleton, Z_Construct_UScriptStruct_FTOPWorkResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TOPWorkResult.InnerSingleton;
}
// End ScriptStruct FTOPWorkResult

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_TOPWorkResult_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTOPWorkResult::StaticStruct, Z_Construct_UScriptStruct_FTOPWorkResult_Statics::NewStructOps, TEXT("TOPWorkResult"), &Z_Registration_Info_UScriptStruct_TOPWorkResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTOPWorkResult), 2141361368U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_TOPWorkResult_h_41240514(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_TOPWorkResult_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_TOPWorkResult_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
