// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EAtomCueSheetLoaderComponentStatus.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAtomCueSheetLoaderComponentStatus() {}

// Begin Cross Module References
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomCueSheetLoaderComponentStatus();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Enum EAtomCueSheetLoaderComponentStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomCueSheetLoaderComponentStatus;
static UEnum* EAtomCueSheetLoaderComponentStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAtomCueSheetLoaderComponentStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAtomCueSheetLoaderComponentStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EAtomCueSheetLoaderComponentStatus, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EAtomCueSheetLoaderComponentStatus"));
	}
	return Z_Registration_Info_UEnum_EAtomCueSheetLoaderComponentStatus.OuterSingleton;
}
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomCueSheetLoaderComponentStatus>()
{
	return EAtomCueSheetLoaderComponentStatus_StaticEnum();
}
struct Z_Construct_UEnum_CriWareRuntime_EAtomCueSheetLoaderComponentStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BindEnd.Name", "EAtomCueSheetLoaderComponentStatus::BindEnd" },
		{ "Binding.Name", "EAtomCueSheetLoaderComponentStatus::Binding" },
		{ "BlueprintType", "true" },
		{ "Complete.Name", "EAtomCueSheetLoaderComponentStatus::Complete" },
		{ "Error.Name", "EAtomCueSheetLoaderComponentStatus::Error" },
		{ "LoadCueSheet.Name", "EAtomCueSheetLoaderComponentStatus::LoadCueSheet" },
		{ "LoadEnd.Name", "EAtomCueSheetLoaderComponentStatus::LoadEnd" },
		{ "Loading.Name", "EAtomCueSheetLoaderComponentStatus::Loading" },
		{ "ModuleRelativePath", "Public/EAtomCueSheetLoaderComponentStatus.h" },
		{ "SerializeEnd.Name", "EAtomCueSheetLoaderComponentStatus::SerializeEnd" },
		{ "Serializing.Name", "EAtomCueSheetLoaderComponentStatus::Serializing" },
		{ "Stop.Name", "EAtomCueSheetLoaderComponentStatus::Stop" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAtomCueSheetLoaderComponentStatus::Stop", (int64)EAtomCueSheetLoaderComponentStatus::Stop },
		{ "EAtomCueSheetLoaderComponentStatus::Loading", (int64)EAtomCueSheetLoaderComponentStatus::Loading },
		{ "EAtomCueSheetLoaderComponentStatus::LoadEnd", (int64)EAtomCueSheetLoaderComponentStatus::LoadEnd },
		{ "EAtomCueSheetLoaderComponentStatus::Serializing", (int64)EAtomCueSheetLoaderComponentStatus::Serializing },
		{ "EAtomCueSheetLoaderComponentStatus::SerializeEnd", (int64)EAtomCueSheetLoaderComponentStatus::SerializeEnd },
		{ "EAtomCueSheetLoaderComponentStatus::Binding", (int64)EAtomCueSheetLoaderComponentStatus::Binding },
		{ "EAtomCueSheetLoaderComponentStatus::BindEnd", (int64)EAtomCueSheetLoaderComponentStatus::BindEnd },
		{ "EAtomCueSheetLoaderComponentStatus::LoadCueSheet", (int64)EAtomCueSheetLoaderComponentStatus::LoadCueSheet },
		{ "EAtomCueSheetLoaderComponentStatus::Complete", (int64)EAtomCueSheetLoaderComponentStatus::Complete },
		{ "EAtomCueSheetLoaderComponentStatus::Error", (int64)EAtomCueSheetLoaderComponentStatus::Error },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareRuntime_EAtomCueSheetLoaderComponentStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	"EAtomCueSheetLoaderComponentStatus",
	"EAtomCueSheetLoaderComponentStatus",
	Z_Construct_UEnum_CriWareRuntime_EAtomCueSheetLoaderComponentStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EAtomCueSheetLoaderComponentStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EAtomCueSheetLoaderComponentStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CriWareRuntime_EAtomCueSheetLoaderComponentStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomCueSheetLoaderComponentStatus()
{
	if (!Z_Registration_Info_UEnum_EAtomCueSheetLoaderComponentStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomCueSheetLoaderComponentStatus.InnerSingleton, Z_Construct_UEnum_CriWareRuntime_EAtomCueSheetLoaderComponentStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAtomCueSheetLoaderComponentStatus.InnerSingleton;
}
// End Enum EAtomCueSheetLoaderComponentStatus

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomCueSheetLoaderComponentStatus_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAtomCueSheetLoaderComponentStatus_StaticEnum, TEXT("EAtomCueSheetLoaderComponentStatus"), &Z_Registration_Info_UEnum_EAtomCueSheetLoaderComponentStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 63698360U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomCueSheetLoaderComponentStatus_h_509371832(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomCueSheetLoaderComponentStatus_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomCueSheetLoaderComponentStatus_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
