// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EManaComponentStatus.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEManaComponentStatus() {}

// Begin Cross Module References
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaComponentStatus();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Enum EManaComponentStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EManaComponentStatus;
static UEnum* EManaComponentStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EManaComponentStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EManaComponentStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EManaComponentStatus, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EManaComponentStatus"));
	}
	return Z_Registration_Info_UEnum_EManaComponentStatus.OuterSingleton;
}
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EManaComponentStatus>()
{
	return EManaComponentStatus_StaticEnum();
}
struct Z_Construct_UEnum_CriWareRuntime_EManaComponentStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DecHdr.Name", "EManaComponentStatus::DecHdr" },
		{ "Error.Name", "EManaComponentStatus::Error" },
		{ "ModuleRelativePath", "Public/EManaComponentStatus.h" },
		{ "PlayEnd.Name", "EManaComponentStatus::PlayEnd" },
		{ "Playing.Name", "EManaComponentStatus::Playing" },
		{ "Prep.Name", "EManaComponentStatus::Prep" },
		{ "Ready.Name", "EManaComponentStatus::Ready" },
		{ "Stop.Name", "EManaComponentStatus::Stop" },
		{ "StopProcessing.Name", "EManaComponentStatus::StopProcessing" },
		{ "WaitPrep.Name", "EManaComponentStatus::WaitPrep" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EManaComponentStatus::Stop", (int64)EManaComponentStatus::Stop },
		{ "EManaComponentStatus::DecHdr", (int64)EManaComponentStatus::DecHdr },
		{ "EManaComponentStatus::WaitPrep", (int64)EManaComponentStatus::WaitPrep },
		{ "EManaComponentStatus::Prep", (int64)EManaComponentStatus::Prep },
		{ "EManaComponentStatus::Ready", (int64)EManaComponentStatus::Ready },
		{ "EManaComponentStatus::Playing", (int64)EManaComponentStatus::Playing },
		{ "EManaComponentStatus::PlayEnd", (int64)EManaComponentStatus::PlayEnd },
		{ "EManaComponentStatus::Error", (int64)EManaComponentStatus::Error },
		{ "EManaComponentStatus::StopProcessing", (int64)EManaComponentStatus::StopProcessing },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareRuntime_EManaComponentStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	"EManaComponentStatus",
	"EManaComponentStatus",
	Z_Construct_UEnum_CriWareRuntime_EManaComponentStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EManaComponentStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EManaComponentStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CriWareRuntime_EManaComponentStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CriWareRuntime_EManaComponentStatus()
{
	if (!Z_Registration_Info_UEnum_EManaComponentStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EManaComponentStatus.InnerSingleton, Z_Construct_UEnum_CriWareRuntime_EManaComponentStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EManaComponentStatus.InnerSingleton;
}
// End Enum EManaComponentStatus

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaComponentStatus_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EManaComponentStatus_StaticEnum, TEXT("EManaComponentStatus"), &Z_Registration_Info_UEnum_EManaComponentStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1856978859U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaComponentStatus_h_2256900797(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaComponentStatus_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaComponentStatus_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
