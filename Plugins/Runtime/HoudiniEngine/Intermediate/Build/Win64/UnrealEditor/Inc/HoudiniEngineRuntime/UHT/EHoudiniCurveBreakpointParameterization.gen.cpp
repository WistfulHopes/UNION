// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniCurveBreakpointParameterization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniCurveBreakpointParameterization() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EHoudiniCurveBreakpointParameterization
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniCurveBreakpointParameterization;
static UEnum* EHoudiniCurveBreakpointParameterization_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniCurveBreakpointParameterization.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniCurveBreakpointParameterization.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniCurveBreakpointParameterization"));
	}
	return Z_Registration_Info_UEnum_EHoudiniCurveBreakpointParameterization.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniCurveBreakpointParameterization>()
{
	return EHoudiniCurveBreakpointParameterization_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Centripetal.Name", "EHoudiniCurveBreakpointParameterization::Centripetal" },
		{ "Chord.Name", "EHoudiniCurveBreakpointParameterization::Chord" },
		{ "Invalid.Name", "EHoudiniCurveBreakpointParameterization::Invalid" },
		{ "ModuleRelativePath", "Public/EHoudiniCurveBreakpointParameterization.h" },
		{ "Uniform.Name", "EHoudiniCurveBreakpointParameterization::Uniform" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniCurveBreakpointParameterization::Invalid", (int64)EHoudiniCurveBreakpointParameterization::Invalid },
		{ "EHoudiniCurveBreakpointParameterization::Uniform", (int64)EHoudiniCurveBreakpointParameterization::Uniform },
		{ "EHoudiniCurveBreakpointParameterization::Chord", (int64)EHoudiniCurveBreakpointParameterization::Chord },
		{ "EHoudiniCurveBreakpointParameterization::Centripetal", (int64)EHoudiniCurveBreakpointParameterization::Centripetal },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniCurveBreakpointParameterization",
	"EHoudiniCurveBreakpointParameterization",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization()
{
	if (!Z_Registration_Info_UEnum_EHoudiniCurveBreakpointParameterization.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniCurveBreakpointParameterization.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveBreakpointParameterization_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniCurveBreakpointParameterization.InnerSingleton;
}
// End Enum EHoudiniCurveBreakpointParameterization

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniCurveBreakpointParameterization_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniCurveBreakpointParameterization_StaticEnum, TEXT("EHoudiniCurveBreakpointParameterization"), &Z_Registration_Info_UEnum_EHoudiniCurveBreakpointParameterization, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2330648373U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniCurveBreakpointParameterization_h_2187256081(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniCurveBreakpointParameterization_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniCurveBreakpointParameterization_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
