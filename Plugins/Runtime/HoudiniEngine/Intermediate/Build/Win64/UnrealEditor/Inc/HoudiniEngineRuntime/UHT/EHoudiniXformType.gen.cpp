// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniXformType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniXformType() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EHoudiniXformType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniXformType;
static UEnum* EHoudiniXformType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniXformType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniXformType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniXformType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniXformType.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniXformType>()
{
	return EHoudiniXformType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Auto.Name", "EHoudiniXformType::Auto" },
		{ "BlueprintType", "true" },
		{ "IntoThisObject.Name", "EHoudiniXformType::IntoThisObject" },
		{ "ModuleRelativePath", "Public/EHoudiniXformType.h" },
		{ "None.Name", "EHoudiniXformType::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniXformType::None", (int64)EHoudiniXformType::None },
		{ "EHoudiniXformType::IntoThisObject", (int64)EHoudiniXformType::IntoThisObject },
		{ "EHoudiniXformType::Auto", (int64)EHoudiniXformType::Auto },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniXformType",
	"EHoudiniXformType",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniXformType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniXformType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniXformType.InnerSingleton;
}
// End Enum EHoudiniXformType

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniXformType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniXformType_StaticEnum, TEXT("EHoudiniXformType"), &Z_Registration_Info_UEnum_EHoudiniXformType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3536828231U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniXformType_h_1475084338(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniXformType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniXformType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
