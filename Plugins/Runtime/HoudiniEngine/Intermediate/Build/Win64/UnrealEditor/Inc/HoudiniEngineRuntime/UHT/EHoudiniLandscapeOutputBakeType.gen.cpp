// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniLandscapeOutputBakeType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniLandscapeOutputBakeType() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EHoudiniLandscapeOutputBakeType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniLandscapeOutputBakeType;
static UEnum* EHoudiniLandscapeOutputBakeType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniLandscapeOutputBakeType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniLandscapeOutputBakeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniLandscapeOutputBakeType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniLandscapeOutputBakeType.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniLandscapeOutputBakeType>()
{
	return EHoudiniLandscapeOutputBakeType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BakeToImage.Name", "EHoudiniLandscapeOutputBakeType::BakeToImage" },
		{ "BakeToWorld.Name", "EHoudiniLandscapeOutputBakeType::BakeToWorld" },
		{ "BlueprintType", "true" },
		{ "Detachment.Name", "EHoudiniLandscapeOutputBakeType::Detachment" },
		{ "InValid.Name", "EHoudiniLandscapeOutputBakeType::InValid" },
		{ "ModuleRelativePath", "Public/EHoudiniLandscapeOutputBakeType.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniLandscapeOutputBakeType::Detachment", (int64)EHoudiniLandscapeOutputBakeType::Detachment },
		{ "EHoudiniLandscapeOutputBakeType::BakeToImage", (int64)EHoudiniLandscapeOutputBakeType::BakeToImage },
		{ "EHoudiniLandscapeOutputBakeType::BakeToWorld", (int64)EHoudiniLandscapeOutputBakeType::BakeToWorld },
		{ "EHoudiniLandscapeOutputBakeType::InValid", (int64)EHoudiniLandscapeOutputBakeType::InValid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniLandscapeOutputBakeType",
	"EHoudiniLandscapeOutputBakeType",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniLandscapeOutputBakeType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniLandscapeOutputBakeType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniLandscapeOutputBakeType.InnerSingleton;
}
// End Enum EHoudiniLandscapeOutputBakeType

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniLandscapeOutputBakeType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniLandscapeOutputBakeType_StaticEnum, TEXT("EHoudiniLandscapeOutputBakeType"), &Z_Registration_Info_UEnum_EHoudiniLandscapeOutputBakeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4117445867U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniLandscapeOutputBakeType_h_610410018(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniLandscapeOutputBakeType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniLandscapeOutputBakeType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
