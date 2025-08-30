// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EManaPlayerTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEManaPlayerTrack() {}

// Begin Cross Module References
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Enum EManaPlayerTrack
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EManaPlayerTrack;
static UEnum* EManaPlayerTrack_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EManaPlayerTrack.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EManaPlayerTrack.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EManaPlayerTrack"));
	}
	return Z_Registration_Info_UEnum_EManaPlayerTrack.OuterSingleton;
}
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EManaPlayerTrack>()
{
	return EManaPlayerTrack_StaticEnum();
}
struct Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Alpha.Name", "EManaPlayerTrack::Alpha" },
		{ "Audio.Name", "EManaPlayerTrack::Audio" },
		{ "BlueprintType", "true" },
		{ "EventPoint.Name", "EManaPlayerTrack::EventPoint" },
		{ "ExtraAudio.Name", "EManaPlayerTrack::ExtraAudio" },
		{ "ModuleRelativePath", "Public/EManaPlayerTrack.h" },
		{ "SubAudio.Name", "EManaPlayerTrack::SubAudio" },
		{ "Subtitle.Name", "EManaPlayerTrack::Subtitle" },
		{ "Video.Name", "EManaPlayerTrack::Video" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EManaPlayerTrack::Audio", (int64)EManaPlayerTrack::Audio },
		{ "EManaPlayerTrack::SubAudio", (int64)EManaPlayerTrack::SubAudio },
		{ "EManaPlayerTrack::ExtraAudio", (int64)EManaPlayerTrack::ExtraAudio },
		{ "EManaPlayerTrack::EventPoint", (int64)EManaPlayerTrack::EventPoint },
		{ "EManaPlayerTrack::Subtitle", (int64)EManaPlayerTrack::Subtitle },
		{ "EManaPlayerTrack::Video", (int64)EManaPlayerTrack::Video },
		{ "EManaPlayerTrack::Alpha", (int64)EManaPlayerTrack::Alpha },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	"EManaPlayerTrack",
	"EManaPlayerTrack",
	Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack()
{
	if (!Z_Registration_Info_UEnum_EManaPlayerTrack.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EManaPlayerTrack.InnerSingleton, Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EManaPlayerTrack.InnerSingleton;
}
// End Enum EManaPlayerTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaPlayerTrack_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EManaPlayerTrack_StaticEnum, TEXT("EManaPlayerTrack"), &Z_Registration_Info_UEnum_EManaPlayerTrack, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 471400301U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaPlayerTrack_h_3315608072(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaPlayerTrack_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaPlayerTrack_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
