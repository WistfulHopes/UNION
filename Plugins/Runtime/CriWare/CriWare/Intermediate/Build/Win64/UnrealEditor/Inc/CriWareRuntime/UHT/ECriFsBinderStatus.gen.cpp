// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/ECriFsBinderStatus.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECriFsBinderStatus() {}

// Begin Cross Module References
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_ECriFsBinderStatus();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Enum ECriFsBinderStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECriFsBinderStatus;
static UEnum* ECriFsBinderStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECriFsBinderStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECriFsBinderStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_ECriFsBinderStatus, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("ECriFsBinderStatus"));
	}
	return Z_Registration_Info_UEnum_ECriFsBinderStatus.OuterSingleton;
}
template<> CRIWARERUNTIME_API UEnum* StaticEnum<ECriFsBinderStatus>()
{
	return ECriFsBinderStatus_StaticEnum();
}
struct Z_Construct_UEnum_CriWareRuntime_ECriFsBinderStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Binding.Name", "ECriFsBinderStatus::Binding" },
		{ "BlueprintType", "true" },
		{ "Complete.Name", "ECriFsBinderStatus::Complete" },
		{ "Error.Name", "ECriFsBinderStatus::Error" },
		{ "ModuleRelativePath", "Public/ECriFsBinderStatus.h" },
		{ "Stop.Name", "ECriFsBinderStatus::Stop" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECriFsBinderStatus::Stop", (int64)ECriFsBinderStatus::Stop },
		{ "ECriFsBinderStatus::Binding", (int64)ECriFsBinderStatus::Binding },
		{ "ECriFsBinderStatus::Complete", (int64)ECriFsBinderStatus::Complete },
		{ "ECriFsBinderStatus::Error", (int64)ECriFsBinderStatus::Error },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareRuntime_ECriFsBinderStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	"ECriFsBinderStatus",
	"ECriFsBinderStatus",
	Z_Construct_UEnum_CriWareRuntime_ECriFsBinderStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_ECriFsBinderStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_ECriFsBinderStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CriWareRuntime_ECriFsBinderStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CriWareRuntime_ECriFsBinderStatus()
{
	if (!Z_Registration_Info_UEnum_ECriFsBinderStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECriFsBinderStatus.InnerSingleton, Z_Construct_UEnum_CriWareRuntime_ECriFsBinderStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECriFsBinderStatus.InnerSingleton;
}
// End Enum ECriFsBinderStatus

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ECriFsBinderStatus_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECriFsBinderStatus_StaticEnum, TEXT("ECriFsBinderStatus"), &Z_Registration_Info_UEnum_ECriFsBinderStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1116239411U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ECriFsBinderStatus_h_2849728735(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ECriFsBinderStatus_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ECriFsBinderStatus_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
