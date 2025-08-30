// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniToolSelectionType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniToolSelectionType() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolSelectionType();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EHoudiniToolSelectionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniToolSelectionType;
static UEnum* EHoudiniToolSelectionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniToolSelectionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniToolSelectionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolSelectionType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniToolSelectionType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniToolSelectionType.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniToolSelectionType>()
{
	return EHoudiniToolSelectionType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolSelectionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HTOOL_SELECTION_ALL.Name", "EHoudiniToolSelectionType::HTOOL_SELECTION_ALL" },
		{ "HTOOL_SELECTION_CB_ONLY.Name", "EHoudiniToolSelectionType::HTOOL_SELECTION_CB_ONLY" },
		{ "HTOOL_SELECTION_WORLD_ONLY.Name", "EHoudiniToolSelectionType::HTOOL_SELECTION_WORLD_ONLY" },
		{ "ModuleRelativePath", "Public/EHoudiniToolSelectionType.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniToolSelectionType::HTOOL_SELECTION_ALL", (int64)EHoudiniToolSelectionType::HTOOL_SELECTION_ALL },
		{ "EHoudiniToolSelectionType::HTOOL_SELECTION_WORLD_ONLY", (int64)EHoudiniToolSelectionType::HTOOL_SELECTION_WORLD_ONLY },
		{ "EHoudiniToolSelectionType::HTOOL_SELECTION_CB_ONLY", (int64)EHoudiniToolSelectionType::HTOOL_SELECTION_CB_ONLY },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolSelectionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniToolSelectionType",
	"EHoudiniToolSelectionType",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolSelectionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolSelectionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolSelectionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolSelectionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolSelectionType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniToolSelectionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniToolSelectionType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolSelectionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniToolSelectionType.InnerSingleton;
}
// End Enum EHoudiniToolSelectionType

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniToolSelectionType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniToolSelectionType_StaticEnum, TEXT("EHoudiniToolSelectionType"), &Z_Registration_Info_UEnum_EHoudiniToolSelectionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1679578419U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniToolSelectionType_h_1000297923(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniToolSelectionType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniToolSelectionType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
