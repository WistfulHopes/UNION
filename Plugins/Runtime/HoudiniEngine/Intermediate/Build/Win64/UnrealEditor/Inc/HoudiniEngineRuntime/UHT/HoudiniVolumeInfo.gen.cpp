// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniVolumeInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniVolumeInfo() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniVolumeInfo();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin ScriptStruct FHoudiniVolumeInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniVolumeInfo;
class UScriptStruct* FHoudiniVolumeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniVolumeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniVolumeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniVolumeInfo, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniVolumeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniVolumeInfo.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniVolumeInfo>()
{
	return FHoudiniVolumeInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniVolumeInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HoudiniVolumeInfo.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniVolumeInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniVolumeInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniVolumeInfo",
	nullptr,
	0,
	sizeof(FHoudiniVolumeInfo),
	alignof(FHoudiniVolumeInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniVolumeInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniVolumeInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniVolumeInfo()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniVolumeInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniVolumeInfo.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniVolumeInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniVolumeInfo.InnerSingleton;
}
// End ScriptStruct FHoudiniVolumeInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniVolumeInfo_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHoudiniVolumeInfo::StaticStruct, Z_Construct_UScriptStruct_FHoudiniVolumeInfo_Statics::NewStructOps, TEXT("HoudiniVolumeInfo"), &Z_Registration_Info_UScriptStruct_HoudiniVolumeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniVolumeInfo), 817108500U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniVolumeInfo_h_3275048295(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniVolumeInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniVolumeInfo_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
