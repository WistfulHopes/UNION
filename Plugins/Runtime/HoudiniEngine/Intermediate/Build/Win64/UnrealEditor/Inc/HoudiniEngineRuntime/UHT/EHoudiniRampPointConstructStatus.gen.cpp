// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/EHoudiniRampPointConstructStatus.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniRampPointConstructStatus() {}

// Begin Cross Module References
HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampPointConstructStatus();
UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References

// Begin Enum EHoudiniRampPointConstructStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniRampPointConstructStatus;
static UEnum* EHoudiniRampPointConstructStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoudiniRampPointConstructStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoudiniRampPointConstructStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampPointConstructStatus, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniRampPointConstructStatus"));
	}
	return Z_Registration_Info_UEnum_EHoudiniRampPointConstructStatus.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniRampPointConstructStatus>()
{
	return EHoudiniRampPointConstructStatus_StaticEnum();
}
struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampPointConstructStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "INITIALIZED.Name", "EHoudiniRampPointConstructStatus::INITIALIZED" },
		{ "INTERPTYPE_INSERTED.Name", "EHoudiniRampPointConstructStatus::INTERPTYPE_INSERTED" },
		{ "ModuleRelativePath", "Public/EHoudiniRampPointConstructStatus.h" },
		{ "None.Name", "EHoudiniRampPointConstructStatus::None" },
		{ "POSITION_INSERTED.Name", "EHoudiniRampPointConstructStatus::POSITION_INSERTED" },
		{ "VALUE_INSERTED.Name", "EHoudiniRampPointConstructStatus::VALUE_INSERTED" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoudiniRampPointConstructStatus::None", (int64)EHoudiniRampPointConstructStatus::None },
		{ "EHoudiniRampPointConstructStatus::INITIALIZED", (int64)EHoudiniRampPointConstructStatus::INITIALIZED },
		{ "EHoudiniRampPointConstructStatus::POSITION_INSERTED", (int64)EHoudiniRampPointConstructStatus::POSITION_INSERTED },
		{ "EHoudiniRampPointConstructStatus::VALUE_INSERTED", (int64)EHoudiniRampPointConstructStatus::VALUE_INSERTED },
		{ "EHoudiniRampPointConstructStatus::INTERPTYPE_INSERTED", (int64)EHoudiniRampPointConstructStatus::INTERPTYPE_INSERTED },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampPointConstructStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	nullptr,
	"EHoudiniRampPointConstructStatus",
	"EHoudiniRampPointConstructStatus",
	Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampPointConstructStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampPointConstructStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampPointConstructStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampPointConstructStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampPointConstructStatus()
{
	if (!Z_Registration_Info_UEnum_EHoudiniRampPointConstructStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniRampPointConstructStatus.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampPointConstructStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoudiniRampPointConstructStatus.InnerSingleton;
}
// End Enum EHoudiniRampPointConstructStatus

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniRampPointConstructStatus_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoudiniRampPointConstructStatus_StaticEnum, TEXT("EHoudiniRampPointConstructStatus"), &Z_Registration_Info_UEnum_EHoudiniRampPointConstructStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1951668684U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniRampPointConstructStatus_h_589349499(TEXT("/Script/HoudiniEngineRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniRampPointConstructStatus_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_EHoudiniRampPointConstructStatus_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
