// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniProxyRefineRequestResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniProxyRefineRequestResult() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineRequestResult();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EHoudiniProxyRefineRequestResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniProxyRefineRequestResult;
static UEnum* EHoudiniProxyRefineRequestResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniProxyRefineRequestResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniProxyRefineRequestResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineRequestResult, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniProxyRefineRequestResult"));
	}
	return Z_Registration_Info_UEnum_EHoudiniProxyRefineRequestResult.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniProxyRefineRequestResult>()
{
	return EHoudiniProxyRefineRequestResult_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineRequestResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Invalid.Name", "EHoudiniProxyRefineRequestResult::Invalid" },
		{ "ModuleRelativePath", "Public/EHoudiniProxyRefineRequestResult.h" },
		{ "None.Name", "EHoudiniProxyRefineRequestResult::None" },
		{ "PendingCooks.Name", "EHoudiniProxyRefineRequestResult::PendingCooks" },
		{ "Refined.Name", "EHoudiniProxyRefineRequestResult::Refined" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniProxyRefineRequestResult::Invalid", (int64)EHoudiniProxyRefineRequestResult::Invalid },
		{ "EHoudiniProxyRefineRequestResult::None", (int64)EHoudiniProxyRefineRequestResult::None },
		{ "EHoudiniProxyRefineRequestResult::PendingCooks", (int64)EHoudiniProxyRefineRequestResult::PendingCooks },
		{ "EHoudiniProxyRefineRequestResult::Refined", (int64)EHoudiniProxyRefineRequestResult::Refined },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineRequestResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniProxyRefineRequestResult",
	"EHoudiniProxyRefineRequestResult",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineRequestResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineRequestResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineRequestResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineRequestResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineRequestResult()
{
	if (!Z_Registration_Info_UEnum_EHoudiniProxyRefineRequestResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniProxyRefineRequestResult.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineRequestResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniProxyRefineRequestResult.InnerSingleton;
}
// End Enum EHoudiniProxyRefineRequestResult

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniProxyRefineRequestResult_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniProxyRefineRequestResult_StaticEnum, TEXT("EHoudiniProxyRefineRequestResult"), &Z_Registration_Info_UEnum_EHoudiniProxyRefineRequestResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2518724434U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniProxyRefineRequestResult_h_2073718723(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniProxyRefineRequestResult_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniProxyRefineRequestResult_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
