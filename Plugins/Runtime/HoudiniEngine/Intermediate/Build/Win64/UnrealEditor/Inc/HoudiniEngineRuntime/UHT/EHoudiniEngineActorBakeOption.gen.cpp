// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniEngineActorBakeOption.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniEngineActorBakeOption() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineActorBakeOption();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EHoudiniEngineActorBakeOption
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniEngineActorBakeOption;
static UEnum* EHoudiniEngineActorBakeOption_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniEngineActorBakeOption.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniEngineActorBakeOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineActorBakeOption, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniEngineActorBakeOption"));
	}
	return Z_Registration_Info_UEnum_EHoudiniEngineActorBakeOption.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniEngineActorBakeOption>()
{
	return EHoudiniEngineActorBakeOption_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineActorBakeOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EHoudiniEngineActorBakeOption.h" },
		{ "OneActorPerComponent.Name", "EHoudiniEngineActorBakeOption::OneActorPerComponent" },
		{ "OneActorPerHDA.Name", "EHoudiniEngineActorBakeOption::OneActorPerHDA" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniEngineActorBakeOption::OneActorPerComponent", (int64)EHoudiniEngineActorBakeOption::OneActorPerComponent },
		{ "EHoudiniEngineActorBakeOption::OneActorPerHDA", (int64)EHoudiniEngineActorBakeOption::OneActorPerHDA },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineActorBakeOption_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniEngineActorBakeOption",
	"EHoudiniEngineActorBakeOption",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineActorBakeOption_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineActorBakeOption_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineActorBakeOption_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineActorBakeOption_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineActorBakeOption()
{
	if (!Z_Registration_Info_UEnum_EHoudiniEngineActorBakeOption.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniEngineActorBakeOption.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineActorBakeOption_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniEngineActorBakeOption.InnerSingleton;
}
// End Enum EHoudiniEngineActorBakeOption

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniEngineActorBakeOption_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniEngineActorBakeOption_StaticEnum, TEXT("EHoudiniEngineActorBakeOption"), &Z_Registration_Info_UEnum_EHoudiniEngineActorBakeOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4052302913U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniEngineActorBakeOption_h_2381899465(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniEngineActorBakeOption_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniEngineActorBakeOption_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
