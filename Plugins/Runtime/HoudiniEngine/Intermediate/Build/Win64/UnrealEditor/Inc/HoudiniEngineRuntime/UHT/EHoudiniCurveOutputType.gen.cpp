// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniCurveOutputType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniCurveOutputType() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveOutputType();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EHoudiniCurveOutputType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniCurveOutputType;
static UEnum* EHoudiniCurveOutputType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniCurveOutputType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniCurveOutputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveOutputType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniCurveOutputType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniCurveOutputType.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniCurveOutputType>()
{
	return EHoudiniCurveOutputType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveOutputType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HoudiniSpline.Name", "EHoudiniCurveOutputType::HoudiniSpline" },
		{ "ModuleRelativePath", "Public/EHoudiniCurveOutputType.h" },
		{ "UnrealSpline.Name", "EHoudiniCurveOutputType::UnrealSpline" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniCurveOutputType::UnrealSpline", (int64)EHoudiniCurveOutputType::UnrealSpline },
		{ "EHoudiniCurveOutputType::HoudiniSpline", (int64)EHoudiniCurveOutputType::HoudiniSpline },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveOutputType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniCurveOutputType",
	"EHoudiniCurveOutputType",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveOutputType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveOutputType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveOutputType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveOutputType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveOutputType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniCurveOutputType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniCurveOutputType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveOutputType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniCurveOutputType.InnerSingleton;
}
// End Enum EHoudiniCurveOutputType

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniCurveOutputType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniCurveOutputType_StaticEnum, TEXT("EHoudiniCurveOutputType"), &Z_Registration_Info_UEnum_EHoudiniCurveOutputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 281212152U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniCurveOutputType_h_476006947(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniCurveOutputType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniCurveOutputType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
