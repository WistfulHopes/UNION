// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniOutputType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniOutputType() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EHoudiniOutputType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniOutputType;
static UEnum* EHoudiniOutputType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniOutputType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniOutputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniOutputType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniOutputType.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniOutputType>()
{
	return EHoudiniOutputType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AnimSequence.Name", "EHoudiniOutputType::AnimSequence" },
		{ "BlueprintType", "true" },
		{ "Curve.Name", "EHoudiniOutputType::Curve" },
		{ "DataTable.Name", "EHoudiniOutputType::DataTable" },
		{ "GeometryCollection.Name", "EHoudiniOutputType::GeometryCollection" },
		{ "Instancer.Name", "EHoudiniOutputType::Instancer" },
		{ "Invalid.Name", "EHoudiniOutputType::Invalid" },
		{ "Landscape.Name", "EHoudiniOutputType::Landscape" },
		{ "LandscapeSpline.Name", "EHoudiniOutputType::LandscapeSpline" },
		{ "Mesh.Name", "EHoudiniOutputType::Mesh" },
		{ "ModuleRelativePath", "Public/EHoudiniOutputType.h" },
		{ "Skeletal.Name", "EHoudiniOutputType::Skeletal" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniOutputType::Invalid", (int64)EHoudiniOutputType::Invalid },
		{ "EHoudiniOutputType::Mesh", (int64)EHoudiniOutputType::Mesh },
		{ "EHoudiniOutputType::Instancer", (int64)EHoudiniOutputType::Instancer },
		{ "EHoudiniOutputType::Landscape", (int64)EHoudiniOutputType::Landscape },
		{ "EHoudiniOutputType::Curve", (int64)EHoudiniOutputType::Curve },
		{ "EHoudiniOutputType::Skeletal", (int64)EHoudiniOutputType::Skeletal },
		{ "EHoudiniOutputType::GeometryCollection", (int64)EHoudiniOutputType::GeometryCollection },
		{ "EHoudiniOutputType::DataTable", (int64)EHoudiniOutputType::DataTable },
		{ "EHoudiniOutputType::LandscapeSpline", (int64)EHoudiniOutputType::LandscapeSpline },
		{ "EHoudiniOutputType::AnimSequence", (int64)EHoudiniOutputType::AnimSequence },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniOutputType",
	"EHoudiniOutputType",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniOutputType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniOutputType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniOutputType.InnerSingleton;
}
// End Enum EHoudiniOutputType

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniOutputType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniOutputType_StaticEnum, TEXT("EHoudiniOutputType"), &Z_Registration_Info_UEnum_EHoudiniOutputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3071875950U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniOutputType_h_2430416419(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniOutputType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniOutputType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
