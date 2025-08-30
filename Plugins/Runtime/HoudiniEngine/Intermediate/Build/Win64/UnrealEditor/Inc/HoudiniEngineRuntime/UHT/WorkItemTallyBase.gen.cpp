// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/WorkItemTallyBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorkItemTallyBase() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FWorkItemTallyBase();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin ScriptStruct FWorkItemTallyBase
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorkItemTallyBase;
class UScriptStruct* FWorkItemTallyBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorkItemTallyBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorkItemTallyBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorkItemTallyBase, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("WorkItemTallyBase"));
	}
	return Z_Registration_Info_UScriptStruct_WorkItemTallyBase.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FWorkItemTallyBase>()
{
	return FWorkItemTallyBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWorkItemTallyBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WorkItemTallyBase.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorkItemTallyBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorkItemTallyBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"WorkItemTallyBase",
	nullptr,
	0,
	sizeof(FWorkItemTallyBase),
	alignof(FWorkItemTallyBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkItemTallyBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWorkItemTallyBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWorkItemTallyBase()
{
	if (!Z_Registration_Info_UScriptStruct_WorkItemTallyBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorkItemTallyBase.InnerSingleton, Z_Construct_UScriptStruct_FWorkItemTallyBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WorkItemTallyBase.InnerSingleton;
}
// End ScriptStruct FWorkItemTallyBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_WorkItemTallyBase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWorkItemTallyBase::StaticStruct, Z_Construct_UScriptStruct_FWorkItemTallyBase_Statics::NewStructOps, TEXT("WorkItemTallyBase"), &Z_Registration_Info_UScriptStruct_WorkItemTallyBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorkItemTallyBase), 1138929364U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_WorkItemTallyBase_h_965956623(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_WorkItemTallyBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_WorkItemTallyBase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
