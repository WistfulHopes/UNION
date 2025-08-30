// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniGeoType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniGeoType() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniGeoType();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EHoudiniGeoType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniGeoType;
static UEnum* EHoudiniGeoType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniGeoType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniGeoType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniGeoType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniGeoType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniGeoType.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniGeoType>()
{
	return EHoudiniGeoType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniGeoType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Curve.Name", "EHoudiniGeoType::Curve" },
		{ "Default.Name", "EHoudiniGeoType::Default" },
		{ "Input.Name", "EHoudiniGeoType::Input" },
		{ "Intermediate.Name", "EHoudiniGeoType::Intermediate" },
		{ "Invalid.Name", "EHoudiniGeoType::Invalid" },
		{ "ModuleRelativePath", "Public/EHoudiniGeoType.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniGeoType::Invalid", (int64)EHoudiniGeoType::Invalid },
		{ "EHoudiniGeoType::Default", (int64)EHoudiniGeoType::Default },
		{ "EHoudiniGeoType::Intermediate", (int64)EHoudiniGeoType::Intermediate },
		{ "EHoudiniGeoType::Input", (int64)EHoudiniGeoType::Input },
		{ "EHoudiniGeoType::Curve", (int64)EHoudiniGeoType::Curve },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniGeoType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniGeoType",
	"EHoudiniGeoType",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniGeoType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniGeoType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniGeoType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniGeoType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniGeoType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniGeoType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniGeoType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniGeoType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniGeoType.InnerSingleton;
}
// End Enum EHoudiniGeoType

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniGeoType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniGeoType_StaticEnum, TEXT("EHoudiniGeoType"), &Z_Registration_Info_UEnum_EHoudiniGeoType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4080659913U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniGeoType_h_830971303(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniGeoType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniGeoType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
