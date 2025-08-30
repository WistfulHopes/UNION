// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniInstancerType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniInstancerType() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInstancerType();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EHoudiniInstancerType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniInstancerType;
static UEnum* EHoudiniInstancerType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniInstancerType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniInstancerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInstancerType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniInstancerType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniInstancerType.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniInstancerType>()
{
	return EHoudiniInstancerType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInstancerType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AttributeInstancer.Name", "EHoudiniInstancerType::AttributeInstancer" },
		{ "BlueprintType", "true" },
		{ "GeometryCollection.Name", "EHoudiniInstancerType::GeometryCollection" },
		{ "Invalid.Name", "EHoudiniInstancerType::Invalid" },
		{ "ModuleRelativePath", "Public/EHoudiniInstancerType.h" },
		{ "MotionClip.Name", "EHoudiniInstancerType::MotionClip" },
		{ "ObjectInstancer.Name", "EHoudiniInstancerType::ObjectInstancer" },
		{ "OldSchoolAttributeInstancer.Name", "EHoudiniInstancerType::OldSchoolAttributeInstancer" },
		{ "PackedPrimitive.Name", "EHoudiniInstancerType::PackedPrimitive" },
		{ "SkeletalMesh.Name", "EHoudiniInstancerType::SkeletalMesh" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniInstancerType::Invalid", (int64)EHoudiniInstancerType::Invalid },
		{ "EHoudiniInstancerType::ObjectInstancer", (int64)EHoudiniInstancerType::ObjectInstancer },
		{ "EHoudiniInstancerType::PackedPrimitive", (int64)EHoudiniInstancerType::PackedPrimitive },
		{ "EHoudiniInstancerType::AttributeInstancer", (int64)EHoudiniInstancerType::AttributeInstancer },
		{ "EHoudiniInstancerType::OldSchoolAttributeInstancer", (int64)EHoudiniInstancerType::OldSchoolAttributeInstancer },
		{ "EHoudiniInstancerType::GeometryCollection", (int64)EHoudiniInstancerType::GeometryCollection },
		{ "EHoudiniInstancerType::SkeletalMesh", (int64)EHoudiniInstancerType::SkeletalMesh },
		{ "EHoudiniInstancerType::MotionClip", (int64)EHoudiniInstancerType::MotionClip },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInstancerType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniInstancerType",
	"EHoudiniInstancerType",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInstancerType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInstancerType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInstancerType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInstancerType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInstancerType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniInstancerType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniInstancerType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInstancerType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniInstancerType.InnerSingleton;
}
// End Enum EHoudiniInstancerType

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniInstancerType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniInstancerType_StaticEnum, TEXT("EHoudiniInstancerType"), &Z_Registration_Info_UEnum_EHoudiniInstancerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1421601064U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniInstancerType_h_3346666544(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniInstancerType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniInstancerType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
