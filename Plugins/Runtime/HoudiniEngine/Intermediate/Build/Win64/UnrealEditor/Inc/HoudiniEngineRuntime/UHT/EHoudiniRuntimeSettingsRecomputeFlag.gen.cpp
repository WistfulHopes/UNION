// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniRuntimeSettingsRecomputeFlag.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniRuntimeSettingsRecomputeFlag() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EHoudiniRuntimeSettingsRecomputeFlag
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniRuntimeSettingsRecomputeFlag;
static UEnum* EHoudiniRuntimeSettingsRecomputeFlag_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniRuntimeSettingsRecomputeFlag.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniRuntimeSettingsRecomputeFlag.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniRuntimeSettingsRecomputeFlag"));
	}
	return Z_Registration_Info_UEnum_EHoudiniRuntimeSettingsRecomputeFlag.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniRuntimeSettingsRecomputeFlag>()
{
	return EHoudiniRuntimeSettingsRecomputeFlag_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HRSRF_Always.Name", "HRSRF_Always" },
		{ "HRSRF_Never.Name", "HRSRF_Never" },
		{ "HRSRF_OnlyIfMissing.Name", "HRSRF_OnlyIfMissing" },
		{ "ModuleRelativePath", "Public/EHoudiniRuntimeSettingsRecomputeFlag.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "HRSRF_Always", (int64)HRSRF_Always },
		{ "HRSRF_OnlyIfMissing", (int64)HRSRF_OnlyIfMissing },
		{ "HRSRF_Never", (int64)HRSRF_Never },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniRuntimeSettingsRecomputeFlag",
	"EHoudiniRuntimeSettingsRecomputeFlag",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag()
{
	if (!Z_Registration_Info_UEnum_EHoudiniRuntimeSettingsRecomputeFlag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniRuntimeSettingsRecomputeFlag.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniRuntimeSettingsRecomputeFlag.InnerSingleton;
}
// End Enum EHoudiniRuntimeSettingsRecomputeFlag

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniRuntimeSettingsRecomputeFlag_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniRuntimeSettingsRecomputeFlag_StaticEnum, TEXT("EHoudiniRuntimeSettingsRecomputeFlag"), &Z_Registration_Info_UEnum_EHoudiniRuntimeSettingsRecomputeFlag, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3397569832U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniRuntimeSettingsRecomputeFlag_h_4079369915(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniRuntimeSettingsRecomputeFlag_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniRuntimeSettingsRecomputeFlag_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
