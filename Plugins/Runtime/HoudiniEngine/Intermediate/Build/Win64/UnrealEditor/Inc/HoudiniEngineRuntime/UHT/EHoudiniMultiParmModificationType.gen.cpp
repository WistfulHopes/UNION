// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniMultiParmModificationType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniMultiParmModificationType() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniMultiParmModificationType();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EHoudiniMultiParmModificationType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniMultiParmModificationType;
static UEnum* EHoudiniMultiParmModificationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniMultiParmModificationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniMultiParmModificationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniMultiParmModificationType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniMultiParmModificationType"));
	}
	return Z_Registration_Info_UEnum_EHoudiniMultiParmModificationType.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniMultiParmModificationType>()
{
	return EHoudiniMultiParmModificationType_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniMultiParmModificationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Inserted.Name", "EHoudiniMultiParmModificationType::Inserted" },
		{ "Modified.Name", "EHoudiniMultiParmModificationType::Modified" },
		{ "ModuleRelativePath", "Public/EHoudiniMultiParmModificationType.h" },
		{ "None.Name", "EHoudiniMultiParmModificationType::None" },
		{ "Removed.Name", "EHoudiniMultiParmModificationType::Removed" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniMultiParmModificationType::None", (int64)EHoudiniMultiParmModificationType::None },
		{ "EHoudiniMultiParmModificationType::Inserted", (int64)EHoudiniMultiParmModificationType::Inserted },
		{ "EHoudiniMultiParmModificationType::Removed", (int64)EHoudiniMultiParmModificationType::Removed },
		{ "EHoudiniMultiParmModificationType::Modified", (int64)EHoudiniMultiParmModificationType::Modified },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniMultiParmModificationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniMultiParmModificationType",
	"EHoudiniMultiParmModificationType",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniMultiParmModificationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniMultiParmModificationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniMultiParmModificationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniMultiParmModificationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniMultiParmModificationType()
{
	if (!Z_Registration_Info_UEnum_EHoudiniMultiParmModificationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniMultiParmModificationType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniMultiParmModificationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniMultiParmModificationType.InnerSingleton;
}
// End Enum EHoudiniMultiParmModificationType

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniMultiParmModificationType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniMultiParmModificationType_StaticEnum, TEXT("EHoudiniMultiParmModificationType"), &Z_Registration_Info_UEnum_EHoudiniMultiParmModificationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1475685085U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniMultiParmModificationType_h_3411924776(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniMultiParmModificationType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniMultiParmModificationType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
