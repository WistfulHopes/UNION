// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniPartType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniPartType() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniPartType();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EHoudiniPartType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniPartType;
static UEnum* EHoudiniPartType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniPartType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniPartType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniPartType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniPartType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniPartType.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniPartType>()
{
	return EHoudiniPartType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniPartType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Curve.Name", "EHoudiniPartType::Curve" },
		{ "DataTable.Name", "EHoudiniPartType::DataTable" },
		{ "Instancer.Name", "EHoudiniPartType::Instancer" },
		{ "Invalid.Name", "EHoudiniPartType::Invalid" },
		{ "LandscapeSpline.Name", "EHoudiniPartType::LandscapeSpline" },
		{ "Mesh.Name", "EHoudiniPartType::Mesh" },
		{ "ModuleRelativePath", "Public/EHoudiniPartType.h" },
		{ "MotionClip.Name", "EHoudiniPartType::MotionClip" },
		{ "SkeletalMeshPose.Name", "EHoudiniPartType::SkeletalMeshPose" },
		{ "SkeletalMeshShape.Name", "EHoudiniPartType::SkeletalMeshShape" },
		{ "Volume.Name", "EHoudiniPartType::Volume" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniPartType::Invalid", (int64)EHoudiniPartType::Invalid },
		{ "EHoudiniPartType::Mesh", (int64)EHoudiniPartType::Mesh },
		{ "EHoudiniPartType::Instancer", (int64)EHoudiniPartType::Instancer },
		{ "EHoudiniPartType::Curve", (int64)EHoudiniPartType::Curve },
		{ "EHoudiniPartType::Volume", (int64)EHoudiniPartType::Volume },
		{ "EHoudiniPartType::DataTable", (int64)EHoudiniPartType::DataTable },
		{ "EHoudiniPartType::LandscapeSpline", (int64)EHoudiniPartType::LandscapeSpline },
		{ "EHoudiniPartType::SkeletalMeshShape", (int64)EHoudiniPartType::SkeletalMeshShape },
		{ "EHoudiniPartType::SkeletalMeshPose", (int64)EHoudiniPartType::SkeletalMeshPose },
		{ "EHoudiniPartType::MotionClip", (int64)EHoudiniPartType::MotionClip },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniPartType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniPartType",
	"EHoudiniPartType",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniPartType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniPartType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniPartType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniPartType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniPartType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniPartType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniPartType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniPartType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniPartType.InnerSingleton;
}
// End Enum EHoudiniPartType

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniPartType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniPartType_StaticEnum, TEXT("EHoudiniPartType"), &Z_Registration_Info_UEnum_EHoudiniPartType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2617854909U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniPartType_h_3587803(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniPartType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniPartType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
