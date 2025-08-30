// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EEngineIniFileType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEngineIniFileType() {}

// Begin Cross Module References
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EEngineIniFileType();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Enum EEngineIniFileType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEngineIniFileType;
static UEnum* EEngineIniFileType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEngineIniFileType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEngineIniFileType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EEngineIniFileType, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EEngineIniFileType"));
	}
	return Z_Registration_Info_UEnum_EEngineIniFileType.OuterSingleton;
}
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EEngineIniFileType::Type>()
{
	return EEngineIniFileType_StaticEnum();
}
struct Z_Construct_UEnum_CriWareRuntime_EEngineIniFileType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EngBaseEngineIni.Name", "EEngineIniFileType::EngBaseEngineIni" },
		{ "EngWindowsEngineIni.Name", "EEngineIniFileType::EngWindowsEngineIni" },
		{ "ModuleRelativePath", "Public/EEngineIniFileType.h" },
		{ "ProjDefaultEngineIni.Name", "EEngineIniFileType::ProjDefaultEngineIni" },
		{ "ProjWindowsEngineIni.Name", "EEngineIniFileType::ProjWindowsEngineIni" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEngineIniFileType::EngBaseEngineIni", (int64)EEngineIniFileType::EngBaseEngineIni },
		{ "EEngineIniFileType::EngWindowsEngineIni", (int64)EEngineIniFileType::EngWindowsEngineIni },
		{ "EEngineIniFileType::ProjDefaultEngineIni", (int64)EEngineIniFileType::ProjDefaultEngineIni },
		{ "EEngineIniFileType::ProjWindowsEngineIni", (int64)EEngineIniFileType::ProjWindowsEngineIni },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareRuntime_EEngineIniFileType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	"EEngineIniFileType",
	"EEngineIniFileType::Type",
	Z_Construct_UEnum_CriWareRuntime_EEngineIniFileType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EEngineIniFileType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EEngineIniFileType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CriWareRuntime_EEngineIniFileType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CriWareRuntime_EEngineIniFileType()
{
	if (!Z_Registration_Info_UEnum_EEngineIniFileType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEngineIniFileType.InnerSingleton, Z_Construct_UEnum_CriWareRuntime_EEngineIniFileType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEngineIniFileType.InnerSingleton;
}
// End Enum EEngineIniFileType

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EEngineIniFileType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEngineIniFileType_StaticEnum, TEXT("EEngineIniFileType"), &Z_Registration_Info_UEnum_EEngineIniFileType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3412145766U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EEngineIniFileType_h_1027110545(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EEngineIniFileType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EEngineIniFileType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
