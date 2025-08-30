// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniLandscapeSplineSegmentData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniLandscapeSplineSegmentData() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin ScriptStruct FHoudiniLandscapeSplineSegmentData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniLandscapeSplineSegmentData;
class UScriptStruct* FHoudiniLandscapeSplineSegmentData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniLandscapeSplineSegmentData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniLandscapeSplineSegmentData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniLandscapeSplineSegmentData"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniLandscapeSplineSegmentData.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniLandscapeSplineSegmentData>()
{
	return FHoudiniLandscapeSplineSegmentData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HoudiniLandscapeSplineSegmentData.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniLandscapeSplineSegmentData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniLandscapeSplineSegmentData",
	nullptr,
	0,
	sizeof(FHoudiniLandscapeSplineSegmentData),
	alignof(FHoudiniLandscapeSplineSegmentData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniLandscapeSplineSegmentData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniLandscapeSplineSegmentData.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniLandscapeSplineSegmentData.InnerSingleton;
}
// End ScriptStruct FHoudiniLandscapeSplineSegmentData

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniLandscapeSplineSegmentData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHoudiniLandscapeSplineSegmentData::StaticStruct, Z_Construct_UScriptStruct_FHoudiniLandscapeSplineSegmentData_Statics::NewStructOps, TEXT("HoudiniLandscapeSplineSegmentData"), &Z_Registration_Info_UScriptStruct_HoudiniLandscapeSplineSegmentData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniLandscapeSplineSegmentData), 3370130784U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniLandscapeSplineSegmentData_h_1316129984(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniLandscapeSplineSegmentData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniLandscapeSplineSegmentData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
