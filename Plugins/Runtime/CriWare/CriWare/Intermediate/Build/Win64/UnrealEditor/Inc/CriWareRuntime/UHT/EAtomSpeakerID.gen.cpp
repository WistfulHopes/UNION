// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EAtomSpeakerID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAtomSpeakerID() {}

// Begin Cross Module References
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomSpeakerID();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Enum EAtomSpeakerID
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomSpeakerID;
static UEnum* EAtomSpeakerID_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAtomSpeakerID.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAtomSpeakerID.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EAtomSpeakerID, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EAtomSpeakerID"));
	}
	return Z_Registration_Info_UEnum_EAtomSpeakerID.OuterSingleton;
}
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomSpeakerID>()
{
	return EAtomSpeakerID_StaticEnum();
}
struct Z_Construct_UEnum_CriWareRuntime_EAtomSpeakerID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FrontCenter.Name", "EAtomSpeakerID::FrontCenter" },
		{ "FrontLeft.Name", "EAtomSpeakerID::FrontLeft" },
		{ "FrontRight.Name", "EAtomSpeakerID::FrontRight" },
		{ "LowFrequency.Name", "EAtomSpeakerID::LowFrequency" },
		{ "ModuleRelativePath", "Public/EAtomSpeakerID.h" },
		{ "SurroundBackLeft.Name", "EAtomSpeakerID::SurroundBackLeft" },
		{ "SurroundBackRight.Name", "EAtomSpeakerID::SurroundBackRight" },
		{ "SurroundLeft.Name", "EAtomSpeakerID::SurroundLeft" },
		{ "SurroundRight.Name", "EAtomSpeakerID::SurroundRight" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAtomSpeakerID::FrontLeft", (int64)EAtomSpeakerID::FrontLeft },
		{ "EAtomSpeakerID::FrontRight", (int64)EAtomSpeakerID::FrontRight },
		{ "EAtomSpeakerID::FrontCenter", (int64)EAtomSpeakerID::FrontCenter },
		{ "EAtomSpeakerID::LowFrequency", (int64)EAtomSpeakerID::LowFrequency },
		{ "EAtomSpeakerID::SurroundLeft", (int64)EAtomSpeakerID::SurroundLeft },
		{ "EAtomSpeakerID::SurroundRight", (int64)EAtomSpeakerID::SurroundRight },
		{ "EAtomSpeakerID::SurroundBackLeft", (int64)EAtomSpeakerID::SurroundBackLeft },
		{ "EAtomSpeakerID::SurroundBackRight", (int64)EAtomSpeakerID::SurroundBackRight },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareRuntime_EAtomSpeakerID_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	"EAtomSpeakerID",
	"EAtomSpeakerID",
	Z_Construct_UEnum_CriWareRuntime_EAtomSpeakerID_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EAtomSpeakerID_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EAtomSpeakerID_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CriWareRuntime_EAtomSpeakerID_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomSpeakerID()
{
	if (!Z_Registration_Info_UEnum_EAtomSpeakerID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomSpeakerID.InnerSingleton, Z_Construct_UEnum_CriWareRuntime_EAtomSpeakerID_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAtomSpeakerID.InnerSingleton;
}
// End Enum EAtomSpeakerID

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomSpeakerID_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAtomSpeakerID_StaticEnum, TEXT("EAtomSpeakerID"), &Z_Registration_Info_UEnum_EAtomSpeakerID, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2617091793U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomSpeakerID_h_115226518(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomSpeakerID_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomSpeakerID_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
