// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniInputObjectType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniInputObjectType() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputObjectType();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EHoudiniInputObjectType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniInputObjectType;
static UEnum* EHoudiniInputObjectType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniInputObjectType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniInputObjectType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputObjectType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniInputObjectType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniInputObjectType.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniInputObjectType>()
{
	return EHoudiniInputObjectType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputObjectType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Actor.Name", "EHoudiniInputObjectType::Actor" },
		{ "Animation.Name", "EHoudiniInputObjectType::Animation" },
		{ "Blueprint.Name", "EHoudiniInputObjectType::Blueprint" },
		{ "BlueprintType", "true" },
		{ "Brush.Name", "EHoudiniInputObjectType::Brush" },
		{ "CameraComponent.Name", "EHoudiniInputObjectType::CameraComponent" },
		{ "DataTable.Name", "EHoudiniInputObjectType::DataTable" },
		{ "FoliageType_InstancedStaticMesh.Name", "EHoudiniInputObjectType::FoliageType_InstancedStaticMesh" },
		{ "GeometryCollection.Name", "EHoudiniInputObjectType::GeometryCollection" },
		{ "GeometryCollectionActor_Deprecated.Name", "EHoudiniInputObjectType::GeometryCollectionActor_Deprecated" },
		{ "GeometryCollectionComponent.Name", "EHoudiniInputObjectType::GeometryCollectionComponent" },
		{ "HoudiniAssetActor.Name", "EHoudiniInputObjectType::HoudiniAssetActor" },
		{ "HoudiniAssetComponent.Name", "EHoudiniInputObjectType::HoudiniAssetComponent" },
		{ "HoudiniSplineComponent.Name", "EHoudiniInputObjectType::HoudiniSplineComponent" },
		{ "InstancedStaticMeshComponent.Name", "EHoudiniInputObjectType::InstancedStaticMeshComponent" },
		{ "Invalid.Name", "EHoudiniInputObjectType::Invalid" },
		{ "Landscape.Name", "EHoudiniInputObjectType::Landscape" },
		{ "LandscapeSplineActor.Name", "EHoudiniInputObjectType::LandscapeSplineActor" },
		{ "LandscapeSplinesComponent.Name", "EHoudiniInputObjectType::LandscapeSplinesComponent" },
		{ "LevelInstance.Name", "EHoudiniInputObjectType::LevelInstance" },
		{ "ModuleRelativePath", "Public/EHoudiniInputObjectType.h" },
		{ "Object.Name", "EHoudiniInputObjectType::Object" },
		{ "PackedLevelActor.Name", "EHoudiniInputObjectType::PackedLevelActor" },
		{ "SceneComponent.Name", "EHoudiniInputObjectType::SceneComponent" },
		{ "SkeletalMesh.Name", "EHoudiniInputObjectType::SkeletalMesh" },
		{ "SkeletalMeshComponent.Name", "EHoudiniInputObjectType::SkeletalMeshComponent" },
		{ "SplineComponent.Name", "EHoudiniInputObjectType::SplineComponent" },
		{ "SplineMeshComponent.Name", "EHoudiniInputObjectType::SplineMeshComponent" },
		{ "StaticMesh.Name", "EHoudiniInputObjectType::StaticMesh" },
		{ "StaticMeshComponent.Name", "EHoudiniInputObjectType::StaticMeshComponent" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniInputObjectType::Invalid", (int64)EHoudiniInputObjectType::Invalid },
		{ "EHoudiniInputObjectType::Object", (int64)EHoudiniInputObjectType::Object },
		{ "EHoudiniInputObjectType::StaticMesh", (int64)EHoudiniInputObjectType::StaticMesh },
		{ "EHoudiniInputObjectType::SkeletalMesh", (int64)EHoudiniInputObjectType::SkeletalMesh },
		{ "EHoudiniInputObjectType::SceneComponent", (int64)EHoudiniInputObjectType::SceneComponent },
		{ "EHoudiniInputObjectType::StaticMeshComponent", (int64)EHoudiniInputObjectType::StaticMeshComponent },
		{ "EHoudiniInputObjectType::InstancedStaticMeshComponent", (int64)EHoudiniInputObjectType::InstancedStaticMeshComponent },
		{ "EHoudiniInputObjectType::SplineComponent", (int64)EHoudiniInputObjectType::SplineComponent },
		{ "EHoudiniInputObjectType::HoudiniSplineComponent", (int64)EHoudiniInputObjectType::HoudiniSplineComponent },
		{ "EHoudiniInputObjectType::HoudiniAssetComponent", (int64)EHoudiniInputObjectType::HoudiniAssetComponent },
		{ "EHoudiniInputObjectType::Actor", (int64)EHoudiniInputObjectType::Actor },
		{ "EHoudiniInputObjectType::Landscape", (int64)EHoudiniInputObjectType::Landscape },
		{ "EHoudiniInputObjectType::Brush", (int64)EHoudiniInputObjectType::Brush },
		{ "EHoudiniInputObjectType::CameraComponent", (int64)EHoudiniInputObjectType::CameraComponent },
		{ "EHoudiniInputObjectType::DataTable", (int64)EHoudiniInputObjectType::DataTable },
		{ "EHoudiniInputObjectType::HoudiniAssetActor", (int64)EHoudiniInputObjectType::HoudiniAssetActor },
		{ "EHoudiniInputObjectType::FoliageType_InstancedStaticMesh", (int64)EHoudiniInputObjectType::FoliageType_InstancedStaticMesh },
		{ "EHoudiniInputObjectType::GeometryCollection", (int64)EHoudiniInputObjectType::GeometryCollection },
		{ "EHoudiniInputObjectType::GeometryCollectionComponent", (int64)EHoudiniInputObjectType::GeometryCollectionComponent },
		{ "EHoudiniInputObjectType::GeometryCollectionActor_Deprecated", (int64)EHoudiniInputObjectType::GeometryCollectionActor_Deprecated },
		{ "EHoudiniInputObjectType::SkeletalMeshComponent", (int64)EHoudiniInputObjectType::SkeletalMeshComponent },
		{ "EHoudiniInputObjectType::LandscapeSplineActor", (int64)EHoudiniInputObjectType::LandscapeSplineActor },
		{ "EHoudiniInputObjectType::LandscapeSplinesComponent", (int64)EHoudiniInputObjectType::LandscapeSplinesComponent },
		{ "EHoudiniInputObjectType::Blueprint", (int64)EHoudiniInputObjectType::Blueprint },
		{ "EHoudiniInputObjectType::Animation", (int64)EHoudiniInputObjectType::Animation },
		{ "EHoudiniInputObjectType::SplineMeshComponent", (int64)EHoudiniInputObjectType::SplineMeshComponent },
		{ "EHoudiniInputObjectType::LevelInstance", (int64)EHoudiniInputObjectType::LevelInstance },
		{ "EHoudiniInputObjectType::PackedLevelActor", (int64)EHoudiniInputObjectType::PackedLevelActor },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputObjectType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniInputObjectType",
	"EHoudiniInputObjectType",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputObjectType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputObjectType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputObjectType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputObjectType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputObjectType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniInputObjectType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniInputObjectType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputObjectType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniInputObjectType.InnerSingleton;
}
// End Enum EHoudiniInputObjectType

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniInputObjectType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniInputObjectType_StaticEnum, TEXT("EHoudiniInputObjectType"), &Z_Registration_Info_UEnum_EHoudiniInputObjectType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 603618656U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniInputObjectType_h_622030425(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniInputObjectType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniInputObjectType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
