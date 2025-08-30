// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniLandscapeExportType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniLandscapeExportType() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EHoudiniLandscapeExportType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniLandscapeExportType;
static UEnum* EHoudiniLandscapeExportType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniLandscapeExportType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniLandscapeExportType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniLandscapeExportType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniLandscapeExportType.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniLandscapeExportType>()
{
	return EHoudiniLandscapeExportType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Heightfield.Name", "EHoudiniLandscapeExportType::Heightfield" },
		{ "Mesh.Name", "EHoudiniLandscapeExportType::Mesh" },
		{ "ModuleRelativePath", "Public/EHoudiniLandscapeExportType.h" },
		{ "Points.Name", "EHoudiniLandscapeExportType::Points" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniLandscapeExportType::Heightfield", (int64)EHoudiniLandscapeExportType::Heightfield },
		{ "EHoudiniLandscapeExportType::Mesh", (int64)EHoudiniLandscapeExportType::Mesh },
		{ "EHoudiniLandscapeExportType::Points", (int64)EHoudiniLandscapeExportType::Points },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniLandscapeExportType",
	"EHoudiniLandscapeExportType",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniLandscapeExportType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniLandscapeExportType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniLandscapeExportType.InnerSingleton;
}
// End Enum EHoudiniLandscapeExportType

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniLandscapeExportType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniLandscapeExportType_StaticEnum, TEXT("EHoudiniLandscapeExportType"), &Z_Registration_Info_UEnum_EHoudiniLandscapeExportType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1182319071U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniLandscapeExportType_h_2325641195(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniLandscapeExportType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniLandscapeExportType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
