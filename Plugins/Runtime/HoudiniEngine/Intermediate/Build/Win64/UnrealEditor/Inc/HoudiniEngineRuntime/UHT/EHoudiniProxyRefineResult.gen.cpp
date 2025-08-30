// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniProxyRefineResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniProxyRefineResult() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineResult();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EHoudiniProxyRefineResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniProxyRefineResult;
static UEnum* EHoudiniProxyRefineResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniProxyRefineResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniProxyRefineResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineResult, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniProxyRefineResult"));
	}
	return Z_Registration_Info_UEnum_EHoudiniProxyRefineResult.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniProxyRefineResult>()
{
	return EHoudiniProxyRefineResult_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Failed.Name", "EHoudiniProxyRefineResult::Failed" },
		{ "Invalid.Name", "EHoudiniProxyRefineResult::Invalid" },
		{ "ModuleRelativePath", "Public/EHoudiniProxyRefineResult.h" },
		{ "Skipped.Name", "EHoudiniProxyRefineResult::Skipped" },
		{ "Success.Name", "EHoudiniProxyRefineResult::Success" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniProxyRefineResult::Invalid", (int64)EHoudiniProxyRefineResult::Invalid },
		{ "EHoudiniProxyRefineResult::Failed", (int64)EHoudiniProxyRefineResult::Failed },
		{ "EHoudiniProxyRefineResult::Success", (int64)EHoudiniProxyRefineResult::Success },
		{ "EHoudiniProxyRefineResult::Skipped", (int64)EHoudiniProxyRefineResult::Skipped },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniProxyRefineResult",
	"EHoudiniProxyRefineResult",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineResult()
{
	if (!Z_Registration_Info_UEnum_EHoudiniProxyRefineResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniProxyRefineResult.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniProxyRefineResult.InnerSingleton;
}
// End Enum EHoudiniProxyRefineResult

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniProxyRefineResult_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniProxyRefineResult_StaticEnum, TEXT("EHoudiniProxyRefineResult"), &Z_Registration_Info_UEnum_EHoudiniProxyRefineResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2160737429U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniProxyRefineResult_h_3341304537(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniProxyRefineResult_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniProxyRefineResult_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
