// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniCurveType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniCurveType() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EHoudiniCurveType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniCurveType;
static UEnum* EHoudiniCurveType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniCurveType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniCurveType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniCurveType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniCurveType.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniCurveType>()
{
	return EHoudiniCurveType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bezier.Name", "EHoudiniCurveType::Bezier" },
		{ "Invalid.Name", "EHoudiniCurveType::Invalid" },
		{ "ModuleRelativePath", "Public/EHoudiniCurveType.h" },
		{ "Nurbs.Name", "EHoudiniCurveType::Nurbs" },
		{ "Points.Name", "EHoudiniCurveType::Points" },
		{ "Polygon.Name", "EHoudiniCurveType::Polygon" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniCurveType::Invalid", (int64)EHoudiniCurveType::Invalid },
		{ "EHoudiniCurveType::Polygon", (int64)EHoudiniCurveType::Polygon },
		{ "EHoudiniCurveType::Nurbs", (int64)EHoudiniCurveType::Nurbs },
		{ "EHoudiniCurveType::Bezier", (int64)EHoudiniCurveType::Bezier },
		{ "EHoudiniCurveType::Points", (int64)EHoudiniCurveType::Points },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniCurveType",
	"EHoudiniCurveType",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniCurveType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniCurveType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniCurveType.InnerSingleton;
}
// End Enum EHoudiniCurveType

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniCurveType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniCurveType_StaticEnum, TEXT("EHoudiniCurveType"), &Z_Registration_Info_UEnum_EHoudiniCurveType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3851994378U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniCurveType_h_3304861919(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniCurveType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniCurveType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
