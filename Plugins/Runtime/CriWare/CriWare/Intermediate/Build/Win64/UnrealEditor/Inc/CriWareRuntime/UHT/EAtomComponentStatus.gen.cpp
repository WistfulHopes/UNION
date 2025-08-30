// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EAtomComponentStatus.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAtomComponentStatus() {}

// Begin Cross Module References
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomComponentStatus();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Enum EAtomComponentStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomComponentStatus;
static UEnum* EAtomComponentStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAtomComponentStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAtomComponentStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EAtomComponentStatus, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EAtomComponentStatus"));
	}
	return Z_Registration_Info_UEnum_EAtomComponentStatus.OuterSingleton;
}
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomComponentStatus>()
{
	return EAtomComponentStatus_StaticEnum();
}
struct Z_Construct_UEnum_CriWareRuntime_EAtomComponentStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Error.Name", "EAtomComponentStatus::Error" },
		{ "ModuleRelativePath", "Public/EAtomComponentStatus.h" },
		{ "PlayEnd.Name", "EAtomComponentStatus::PlayEnd" },
		{ "Playing.Name", "EAtomComponentStatus::Playing" },
		{ "Prep.Name", "EAtomComponentStatus::Prep" },
		{ "Stop.Name", "EAtomComponentStatus::Stop" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAtomComponentStatus::Stop", (int64)EAtomComponentStatus::Stop },
		{ "EAtomComponentStatus::Prep", (int64)EAtomComponentStatus::Prep },
		{ "EAtomComponentStatus::Playing", (int64)EAtomComponentStatus::Playing },
		{ "EAtomComponentStatus::PlayEnd", (int64)EAtomComponentStatus::PlayEnd },
		{ "EAtomComponentStatus::Error", (int64)EAtomComponentStatus::Error },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareRuntime_EAtomComponentStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	"EAtomComponentStatus",
	"EAtomComponentStatus",
	Z_Construct_UEnum_CriWareRuntime_EAtomComponentStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EAtomComponentStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EAtomComponentStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CriWareRuntime_EAtomComponentStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomComponentStatus()
{
	if (!Z_Registration_Info_UEnum_EAtomComponentStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomComponentStatus.InnerSingleton, Z_Construct_UEnum_CriWareRuntime_EAtomComponentStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAtomComponentStatus.InnerSingleton;
}
// End Enum EAtomComponentStatus

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomComponentStatus_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAtomComponentStatus_StaticEnum, TEXT("EAtomComponentStatus"), &Z_Registration_Info_UEnum_EAtomComponentStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 755361537U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomComponentStatus_h_4012721645(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomComponentStatus_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomComponentStatus_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
