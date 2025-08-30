// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniEngineEditorSettingUseCustomLocation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniEngineEditorSettingUseCustomLocation() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineEditorSettingUseCustomLocation();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EHoudiniEngineEditorSettingUseCustomLocation
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniEngineEditorSettingUseCustomLocation;
static UEnum* EHoudiniEngineEditorSettingUseCustomLocation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniEngineEditorSettingUseCustomLocation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniEngineEditorSettingUseCustomLocation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineEditorSettingUseCustomLocation, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniEngineEditorSettingUseCustomLocation"));
	}
	return Z_Registration_Info_UEnum_EHoudiniEngineEditorSettingUseCustomLocation.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniEngineEditorSettingUseCustomLocation>()
{
	return EHoudiniEngineEditorSettingUseCustomLocation_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineEditorSettingUseCustomLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Disabled.Name", "EHoudiniEngineEditorSettingUseCustomLocation::Disabled" },
		{ "Enabled.Name", "EHoudiniEngineEditorSettingUseCustomLocation::Enabled" },
		{ "ModuleRelativePath", "Public/EHoudiniEngineEditorSettingUseCustomLocation.h" },
		{ "Project.Name", "EHoudiniEngineEditorSettingUseCustomLocation::Project" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniEngineEditorSettingUseCustomLocation::Project", (int64)EHoudiniEngineEditorSettingUseCustomLocation::Project },
		{ "EHoudiniEngineEditorSettingUseCustomLocation::Disabled", (int64)EHoudiniEngineEditorSettingUseCustomLocation::Disabled },
		{ "EHoudiniEngineEditorSettingUseCustomLocation::Enabled", (int64)EHoudiniEngineEditorSettingUseCustomLocation::Enabled },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineEditorSettingUseCustomLocation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniEngineEditorSettingUseCustomLocation",
	"EHoudiniEngineEditorSettingUseCustomLocation",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineEditorSettingUseCustomLocation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineEditorSettingUseCustomLocation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineEditorSettingUseCustomLocation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineEditorSettingUseCustomLocation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineEditorSettingUseCustomLocation()
{
	if (!Z_Registration_Info_UEnum_EHoudiniEngineEditorSettingUseCustomLocation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniEngineEditorSettingUseCustomLocation.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineEditorSettingUseCustomLocation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniEngineEditorSettingUseCustomLocation.InnerSingleton;
}
// End Enum EHoudiniEngineEditorSettingUseCustomLocation

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniEngineEditorSettingUseCustomLocation_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniEngineEditorSettingUseCustomLocation_StaticEnum, TEXT("EHoudiniEngineEditorSettingUseCustomLocation"), &Z_Registration_Info_UEnum_EHoudiniEngineEditorSettingUseCustomLocation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 87289011U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniEngineEditorSettingUseCustomLocation_h_2163301927(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniEngineEditorSettingUseCustomLocation_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniEngineEditorSettingUseCustomLocation_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
