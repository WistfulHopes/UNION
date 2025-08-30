// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniFolderParameterType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniFolderParameterType() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniFolderParameterType();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EHoudiniFolderParameterType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniFolderParameterType;
static UEnum* EHoudiniFolderParameterType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniFolderParameterType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniFolderParameterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniFolderParameterType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniFolderParameterType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniFolderParameterType.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniFolderParameterType>()
{
	return EHoudiniFolderParameterType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniFolderParameterType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Collapsible.Name", "EHoudiniFolderParameterType::Collapsible" },
		{ "Invalid.Name", "EHoudiniFolderParameterType::Invalid" },
		{ "ModuleRelativePath", "Public/EHoudiniFolderParameterType.h" },
		{ "Other.Name", "EHoudiniFolderParameterType::Other" },
		{ "Radio.Name", "EHoudiniFolderParameterType::Radio" },
		{ "Simple.Name", "EHoudiniFolderParameterType::Simple" },
		{ "Tabs.Name", "EHoudiniFolderParameterType::Tabs" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniFolderParameterType::Invalid", (int64)EHoudiniFolderParameterType::Invalid },
		{ "EHoudiniFolderParameterType::Collapsible", (int64)EHoudiniFolderParameterType::Collapsible },
		{ "EHoudiniFolderParameterType::Simple", (int64)EHoudiniFolderParameterType::Simple },
		{ "EHoudiniFolderParameterType::Tabs", (int64)EHoudiniFolderParameterType::Tabs },
		{ "EHoudiniFolderParameterType::Radio", (int64)EHoudiniFolderParameterType::Radio },
		{ "EHoudiniFolderParameterType::Other", (int64)EHoudiniFolderParameterType::Other },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniFolderParameterType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniFolderParameterType",
	"EHoudiniFolderParameterType",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniFolderParameterType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniFolderParameterType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniFolderParameterType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniFolderParameterType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniFolderParameterType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniFolderParameterType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniFolderParameterType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniFolderParameterType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniFolderParameterType.InnerSingleton;
}
// End Enum EHoudiniFolderParameterType

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniFolderParameterType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniFolderParameterType_StaticEnum, TEXT("EHoudiniFolderParameterType"), &Z_Registration_Info_UEnum_EHoudiniFolderParameterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2694273428U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniFolderParameterType_h_3449047492(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniFolderParameterType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniFolderParameterType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
