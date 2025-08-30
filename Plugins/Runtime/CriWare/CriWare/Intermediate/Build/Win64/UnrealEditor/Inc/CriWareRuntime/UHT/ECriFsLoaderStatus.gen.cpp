// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/ECriFsLoaderStatus.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECriFsLoaderStatus() {}

// Begin Cross Module References
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_ECriFsLoaderStatus();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Enum ECriFsLoaderStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECriFsLoaderStatus;
static UEnum* ECriFsLoaderStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECriFsLoaderStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECriFsLoaderStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_ECriFsLoaderStatus, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("ECriFsLoaderStatus"));
	}
	return Z_Registration_Info_UEnum_ECriFsLoaderStatus.OuterSingleton;
}
template<> CRIWARERUNTIME_API UEnum* StaticEnum<ECriFsLoaderStatus>()
{
	return ECriFsLoaderStatus_StaticEnum();
}
struct Z_Construct_UEnum_CriWareRuntime_ECriFsLoaderStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Complete.Name", "ECriFsLoaderStatus::Complete" },
		{ "Error.Name", "ECriFsLoaderStatus::Error" },
		{ "Loading.Name", "ECriFsLoaderStatus::Loading" },
		{ "ModuleRelativePath", "Public/ECriFsLoaderStatus.h" },
		{ "Stop.Name", "ECriFsLoaderStatus::Stop" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECriFsLoaderStatus::Stop", (int64)ECriFsLoaderStatus::Stop },
		{ "ECriFsLoaderStatus::Loading", (int64)ECriFsLoaderStatus::Loading },
		{ "ECriFsLoaderStatus::Complete", (int64)ECriFsLoaderStatus::Complete },
		{ "ECriFsLoaderStatus::Error", (int64)ECriFsLoaderStatus::Error },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareRuntime_ECriFsLoaderStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	"ECriFsLoaderStatus",
	"ECriFsLoaderStatus",
	Z_Construct_UEnum_CriWareRuntime_ECriFsLoaderStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_ECriFsLoaderStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_ECriFsLoaderStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CriWareRuntime_ECriFsLoaderStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CriWareRuntime_ECriFsLoaderStatus()
{
	if (!Z_Registration_Info_UEnum_ECriFsLoaderStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECriFsLoaderStatus.InnerSingleton, Z_Construct_UEnum_CriWareRuntime_ECriFsLoaderStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECriFsLoaderStatus.InnerSingleton;
}
// End Enum ECriFsLoaderStatus

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ECriFsLoaderStatus_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECriFsLoaderStatus_StaticEnum, TEXT("ECriFsLoaderStatus"), &Z_Registration_Info_UEnum_ECriFsLoaderStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3354020798U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ECriFsLoaderStatus_h_3099920017(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ECriFsLoaderStatus_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ECriFsLoaderStatus_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
