// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniObjectInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniObjectInfo() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniObjectInfo();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin ScriptStruct FHoudiniObjectInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniObjectInfo;
class UScriptStruct* FHoudiniObjectInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniObjectInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniObjectInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniObjectInfo, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniObjectInfo"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniObjectInfo.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniObjectInfo>()
{
	return FHoudiniObjectInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniObjectInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HoudiniObjectInfo.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniObjectInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniObjectInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniObjectInfo",
	nullptr,
	0,
	sizeof(FHoudiniObjectInfo),
	alignof(FHoudiniObjectInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniObjectInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniObjectInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniObjectInfo()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniObjectInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniObjectInfo.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniObjectInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniObjectInfo.InnerSingleton;
}
// End ScriptStruct FHoudiniObjectInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniObjectInfo_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHoudiniObjectInfo::StaticStruct, Z_Construct_UScriptStruct_FHoudiniObjectInfo_Statics::NewStructOps, TEXT("HoudiniObjectInfo"), &Z_Registration_Info_UScriptStruct_HoudiniObjectInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniObjectInfo), 2390586049U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniObjectInfo_h_18161102(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniObjectInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniObjectInfo_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
