// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniInputType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniInputType() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EHoudiniInputType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniInputType;
static UEnum* EHoudiniInputType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniInputType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniInputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniInputType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniInputType.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniInputType>()
{
	return EHoudiniInputType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Asset_DEPRECATED.Name", "EHoudiniInputType::Asset_DEPRECATED" },
		{ "BlueprintType", "true" },
		{ "Curve.Name", "EHoudiniInputType::Curve" },
		{ "Geometry.Name", "EHoudiniInputType::Geometry" },
		{ "GeometryCollection_DEPRECATED.Name", "EHoudiniInputType::GeometryCollection_DEPRECATED" },
		{ "Invalid.Name", "EHoudiniInputType::Invalid" },
		{ "Landscape_DEPRECATED.Name", "EHoudiniInputType::Landscape_DEPRECATED" },
		{ "ModuleRelativePath", "Public/EHoudiniInputType.h" },
		{ "Skeletal_DEPRECATED.Name", "EHoudiniInputType::Skeletal_DEPRECATED" },
		{ "World.Name", "EHoudiniInputType::World" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniInputType::Invalid", (int64)EHoudiniInputType::Invalid },
		{ "EHoudiniInputType::Geometry", (int64)EHoudiniInputType::Geometry },
		{ "EHoudiniInputType::Curve", (int64)EHoudiniInputType::Curve },
		{ "EHoudiniInputType::Asset_DEPRECATED", (int64)EHoudiniInputType::Asset_DEPRECATED },
		{ "EHoudiniInputType::Landscape_DEPRECATED", (int64)EHoudiniInputType::Landscape_DEPRECATED },
		{ "EHoudiniInputType::World", (int64)EHoudiniInputType::World },
		{ "EHoudiniInputType::Skeletal_DEPRECATED", (int64)EHoudiniInputType::Skeletal_DEPRECATED },
		{ "EHoudiniInputType::GeometryCollection_DEPRECATED", (int64)EHoudiniInputType::GeometryCollection_DEPRECATED },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniInputType",
	"EHoudiniInputType",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniInputType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniInputType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniInputType.InnerSingleton;
}
// End Enum EHoudiniInputType

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniInputType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniInputType_StaticEnum, TEXT("EHoudiniInputType"), &Z_Registration_Info_UEnum_EHoudiniInputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2992247386U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniInputType_h_555278454(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniInputType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniInputType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
