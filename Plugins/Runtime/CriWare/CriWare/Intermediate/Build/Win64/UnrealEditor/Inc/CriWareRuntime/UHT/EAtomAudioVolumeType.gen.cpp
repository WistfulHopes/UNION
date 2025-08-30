// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EAtomAudioVolumeType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAtomAudioVolumeType() {}

// Begin Cross Module References
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomAudioVolumeType();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Enum EAtomAudioVolumeType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomAudioVolumeType;
static UEnum* EAtomAudioVolumeType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAtomAudioVolumeType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAtomAudioVolumeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EAtomAudioVolumeType, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EAtomAudioVolumeType"));
	}
	return Z_Registration_Info_UEnum_EAtomAudioVolumeType.OuterSingleton;
}
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomAudioVolumeType>()
{
	return EAtomAudioVolumeType_StaticEnum();
}
struct Z_Construct_UEnum_CriWareRuntime_EAtomAudioVolumeType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EAtomAudioVolumeType.h" },
		{ "Num.Name", "EAtomAudioVolumeType::Num" },
		{ "UseAisacControl.Name", "EAtomAudioVolumeType::UseAisacControl" },
		{ "UseBus.Name", "EAtomAudioVolumeType::UseBus" },
		{ "UseEntranceVolume.Name", "EAtomAudioVolumeType::UseEntranceVolume" },
		{ "UseSnapshot.Name", "EAtomAudioVolumeType::UseSnapshot" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAtomAudioVolumeType::UseSnapshot", (int64)EAtomAudioVolumeType::UseSnapshot },
		{ "EAtomAudioVolumeType::UseBus", (int64)EAtomAudioVolumeType::UseBus },
		{ "EAtomAudioVolumeType::UseAisacControl", (int64)EAtomAudioVolumeType::UseAisacControl },
		{ "EAtomAudioVolumeType::UseEntranceVolume", (int64)EAtomAudioVolumeType::UseEntranceVolume },
		{ "EAtomAudioVolumeType::Num", (int64)EAtomAudioVolumeType::Num },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareRuntime_EAtomAudioVolumeType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	"EAtomAudioVolumeType",
	"EAtomAudioVolumeType",
	Z_Construct_UEnum_CriWareRuntime_EAtomAudioVolumeType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EAtomAudioVolumeType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EAtomAudioVolumeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CriWareRuntime_EAtomAudioVolumeType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomAudioVolumeType()
{
	if (!Z_Registration_Info_UEnum_EAtomAudioVolumeType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomAudioVolumeType.InnerSingleton, Z_Construct_UEnum_CriWareRuntime_EAtomAudioVolumeType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAtomAudioVolumeType.InnerSingleton;
}
// End Enum EAtomAudioVolumeType

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomAudioVolumeType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAtomAudioVolumeType_StaticEnum, TEXT("EAtomAudioVolumeType"), &Z_Registration_Info_UEnum_EAtomAudioVolumeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 453566794U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomAudioVolumeType_h_2511694079(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomAudioVolumeType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomAudioVolumeType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
