// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniCurveInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniCurveInfo() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniCurveInfo();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin ScriptStruct FHoudiniCurveInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniCurveInfo;
class UScriptStruct* FHoudiniCurveInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniCurveInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniCurveInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniCurveInfo, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniCurveInfo"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniCurveInfo.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniCurveInfo>()
{
	return FHoudiniCurveInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHoudiniCurveInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HoudiniCurveInfo.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniCurveInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniCurveInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	&NewStructOps,
	"HoudiniCurveInfo",
	nullptr,
	0,
	sizeof(FHoudiniCurveInfo),
	alignof(FHoudiniCurveInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniCurveInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoudiniCurveInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoudiniCurveInfo()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniCurveInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniCurveInfo.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniCurveInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HoudiniCurveInfo.InnerSingleton;
}
// End ScriptStruct FHoudiniCurveInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniCurveInfo_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHoudiniCurveInfo::StaticStruct, Z_Construct_UScriptStruct_FHoudiniCurveInfo_Statics::NewStructOps, TEXT("HoudiniCurveInfo"), &Z_Registration_Info_UScriptStruct_HoudiniCurveInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniCurveInfo), 458833032U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniCurveInfo_h_3824385510(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniCurveInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniCurveInfo_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
