// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EXformParameter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEXformParameter() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EXformParameter();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EXformParameter
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EXformParameter;
static UEnum* EXformParameter_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EXformParameter.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EXformParameter.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EXformParameter, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EXformParameter"));
	}
	return Z_Registration_Info_UEnum_EXformParameter.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EXformParameter>()
{
	return EXformParameter_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EXformParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "COUNT.Name", "EXformParameter::COUNT" },
		{ "ModuleRelativePath", "Public/EXformParameter.h" },
		{ "RX.Name", "EXformParameter::RX" },
		{ "RY.Name", "EXformParameter::RY" },
		{ "RZ.Name", "EXformParameter::RZ" },
		{ "SX.Name", "EXformParameter::SX" },
		{ "SY.Name", "EXformParameter::SY" },
		{ "SZ.Name", "EXformParameter::SZ" },
		{ "TX.Name", "EXformParameter::TX" },
		{ "TY.Name", "EXformParameter::TY" },
		{ "TZ.Name", "EXformParameter::TZ" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EXformParameter::TX", (int64)EXformParameter::TX },
		{ "EXformParameter::TY", (int64)EXformParameter::TY },
		{ "EXformParameter::TZ", (int64)EXformParameter::TZ },
		{ "EXformParameter::RX", (int64)EXformParameter::RX },
		{ "EXformParameter::RY", (int64)EXformParameter::RY },
		{ "EXformParameter::RZ", (int64)EXformParameter::RZ },
		{ "EXformParameter::SX", (int64)EXformParameter::SX },
		{ "EXformParameter::SY", (int64)EXformParameter::SY },
		{ "EXformParameter::SZ", (int64)EXformParameter::SZ },
		{ "EXformParameter::COUNT", (int64)EXformParameter::COUNT },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EXformParameter_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EXformParameter",
	"EXformParameter",
	Z_Construct_UEnum_HoudiniEngineRuntime_EXformParameter_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EXformParameter_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EXformParameter_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EXformParameter_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EXformParameter()
{
	if (!Z_Registration_Info_UEnum_EXformParameter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EXformParameter.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EXformParameter_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EXformParameter.InnerSingleton;
}
// End Enum EXformParameter

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EXformParameter_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EXformParameter_StaticEnum, TEXT("EXformParameter"), &Z_Registration_Info_UEnum_EXformParameter, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4098521963U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EXformParameter_h_2899025083(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EXformParameter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EXformParameter_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
