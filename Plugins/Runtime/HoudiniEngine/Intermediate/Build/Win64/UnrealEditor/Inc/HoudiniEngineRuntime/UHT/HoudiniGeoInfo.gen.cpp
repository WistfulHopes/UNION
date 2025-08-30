// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniGeoInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniGeoInfo() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGeoInfo();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin ScriptStruct FHoudiniGeoInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniGeoInfo;
class UScriptStruct* FHoudiniGeoInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniGeoInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniGeoInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniGeoInfo, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniGeoInfo"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniGeoInfo.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniGeoInfo>()
{
	return FHoudiniGeoInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniGeoInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HoudiniGeoInfo.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniGeoInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniGeoInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniGeoInfo",
	nullptr,
	0,
	sizeof(FHoudiniGeoInfo),
	alignof(FHoudiniGeoInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniGeoInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniGeoInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGeoInfo()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniGeoInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniGeoInfo.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniGeoInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniGeoInfo.InnerSingleton;
}
// End ScriptStruct FHoudiniGeoInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniGeoInfo_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHoudiniGeoInfo::StaticStruct, Z_Construct_UScriptStruct_FHoudiniGeoInfo_Statics::NewStructOps, TEXT("HoudiniGeoInfo"), &Z_Registration_Info_UScriptStruct_HoudiniGeoInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniGeoInfo), 2040439287U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniGeoInfo_h_2949142876(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniGeoInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniGeoInfo_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
