// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniRampInterpolationType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniRampInterpolationType() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EHoudiniRampInterpolationType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniRampInterpolationType;
static UEnum* EHoudiniRampInterpolationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniRampInterpolationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniRampInterpolationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniRampInterpolationType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniRampInterpolationType.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniRampInterpolationType>()
{
	return EHoudiniRampInterpolationType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BEZIER.Name", "EHoudiniRampInterpolationType::BEZIER" },
		{ "BSPLINE.Name", "EHoudiniRampInterpolationType::BSPLINE" },
		{ "CATMULL_ROM.Name", "EHoudiniRampInterpolationType::CATMULL_ROM" },
		{ "CONSTANT.Name", "EHoudiniRampInterpolationType::CONSTANT" },
		{ "HERMITE.Name", "EHoudiniRampInterpolationType::HERMITE" },
		{ "InValid.Name", "EHoudiniRampInterpolationType::InValid" },
		{ "LINEAR.Name", "EHoudiniRampInterpolationType::LINEAR" },
		{ "ModuleRelativePath", "Public/EHoudiniRampInterpolationType.h" },
		{ "MONOTONE_CUBIC.Name", "EHoudiniRampInterpolationType::MONOTONE_CUBIC" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniRampInterpolationType::InValid", (int64)EHoudiniRampInterpolationType::InValid },
		{ "EHoudiniRampInterpolationType::CONSTANT", (int64)EHoudiniRampInterpolationType::CONSTANT },
		{ "EHoudiniRampInterpolationType::LINEAR", (int64)EHoudiniRampInterpolationType::LINEAR },
		{ "EHoudiniRampInterpolationType::CATMULL_ROM", (int64)EHoudiniRampInterpolationType::CATMULL_ROM },
		{ "EHoudiniRampInterpolationType::MONOTONE_CUBIC", (int64)EHoudiniRampInterpolationType::MONOTONE_CUBIC },
		{ "EHoudiniRampInterpolationType::BEZIER", (int64)EHoudiniRampInterpolationType::BEZIER },
		{ "EHoudiniRampInterpolationType::BSPLINE", (int64)EHoudiniRampInterpolationType::BSPLINE },
		{ "EHoudiniRampInterpolationType::HERMITE", (int64)EHoudiniRampInterpolationType::HERMITE },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniRampInterpolationType",
	"EHoudiniRampInterpolationType",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniRampInterpolationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniRampInterpolationType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniRampInterpolationType.InnerSingleton;
}
// End Enum EHoudiniRampInterpolationType

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniRampInterpolationType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniRampInterpolationType_StaticEnum, TEXT("EHoudiniRampInterpolationType"), &Z_Registration_Info_UEnum_EHoudiniRampInterpolationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3446783854U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniRampInterpolationType_h_206755127(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniRampInterpolationType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniRampInterpolationType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
