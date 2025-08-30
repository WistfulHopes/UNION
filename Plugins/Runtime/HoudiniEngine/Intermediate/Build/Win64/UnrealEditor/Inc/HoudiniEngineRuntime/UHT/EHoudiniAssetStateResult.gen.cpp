// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniAssetStateResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniAssetStateResult() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EHoudiniAssetStateResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniAssetStateResult;
static UEnum* EHoudiniAssetStateResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniAssetStateResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniAssetStateResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniAssetStateResult"));
	}
	return Z_Registration_Info_UEnum_EHoudiniAssetStateResult.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniAssetStateResult>()
{
	return EHoudiniAssetStateResult_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Aborted.Name", "EHoudiniAssetStateResult::Aborted" },
		{ "BlueprintType", "true" },
		{ "FinishedWithError.Name", "EHoudiniAssetStateResult::FinishedWithError" },
		{ "FinishedWithFatalError.Name", "EHoudiniAssetStateResult::FinishedWithFatalError" },
		{ "ModuleRelativePath", "Public/EHoudiniAssetStateResult.h" },
		{ "None.Name", "EHoudiniAssetStateResult::None" },
		{ "Success.Name", "EHoudiniAssetStateResult::Success" },
		{ "Working.Name", "EHoudiniAssetStateResult::Working" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniAssetStateResult::None", (int64)EHoudiniAssetStateResult::None },
		{ "EHoudiniAssetStateResult::Working", (int64)EHoudiniAssetStateResult::Working },
		{ "EHoudiniAssetStateResult::Success", (int64)EHoudiniAssetStateResult::Success },
		{ "EHoudiniAssetStateResult::FinishedWithError", (int64)EHoudiniAssetStateResult::FinishedWithError },
		{ "EHoudiniAssetStateResult::FinishedWithFatalError", (int64)EHoudiniAssetStateResult::FinishedWithFatalError },
		{ "EHoudiniAssetStateResult::Aborted", (int64)EHoudiniAssetStateResult::Aborted },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniAssetStateResult",
	"EHoudiniAssetStateResult",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult()
{
	if (!Z_Registration_Info_UEnum_EHoudiniAssetStateResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniAssetStateResult.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniAssetStateResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniAssetStateResult.InnerSingleton;
}
// End Enum EHoudiniAssetStateResult

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniAssetStateResult_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniAssetStateResult_StaticEnum, TEXT("EHoudiniAssetStateResult"), &Z_Registration_Info_UEnum_EHoudiniAssetStateResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1276189728U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniAssetStateResult_h_1356235189(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniAssetStateResult_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniAssetStateResult_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
