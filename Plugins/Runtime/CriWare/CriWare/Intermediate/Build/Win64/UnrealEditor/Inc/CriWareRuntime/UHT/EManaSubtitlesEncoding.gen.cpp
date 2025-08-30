// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EManaSubtitlesEncoding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEManaSubtitlesEncoding() {}

// Begin Cross Module References
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Enum EManaSubtitlesEncoding
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EManaSubtitlesEncoding;
static UEnum* EManaSubtitlesEncoding_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EManaSubtitlesEncoding.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EManaSubtitlesEncoding.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EManaSubtitlesEncoding"));
	}
	return Z_Registration_Info_UEnum_EManaSubtitlesEncoding.OuterSingleton;
}
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EManaSubtitlesEncoding>()
{
	return EManaSubtitlesEncoding_StaticEnum();
}
struct Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ANSI.Name", "EManaSubtitlesEncoding::ANSI" },
		{ "BlueprintType", "true" },
		{ "Default.Name", "EManaSubtitlesEncoding::Default" },
		{ "ModuleRelativePath", "Public/EManaSubtitlesEncoding.h" },
		{ "Utf16.Name", "EManaSubtitlesEncoding::Utf16" },
		{ "Utf8.Name", "EManaSubtitlesEncoding::Utf8" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EManaSubtitlesEncoding::Default", (int64)EManaSubtitlesEncoding::Default },
		{ "EManaSubtitlesEncoding::ANSI", (int64)EManaSubtitlesEncoding::ANSI },
		{ "EManaSubtitlesEncoding::Utf8", (int64)EManaSubtitlesEncoding::Utf8 },
		{ "EManaSubtitlesEncoding::Utf16", (int64)EManaSubtitlesEncoding::Utf16 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	"EManaSubtitlesEncoding",
	"EManaSubtitlesEncoding",
	Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding()
{
	if (!Z_Registration_Info_UEnum_EManaSubtitlesEncoding.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EManaSubtitlesEncoding.InnerSingleton, Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EManaSubtitlesEncoding.InnerSingleton;
}
// End Enum EManaSubtitlesEncoding

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaSubtitlesEncoding_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EManaSubtitlesEncoding_StaticEnum, TEXT("EManaSubtitlesEncoding"), &Z_Registration_Info_UEnum_EManaSubtitlesEncoding, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1557399849U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaSubtitlesEncoding_h_2805404502(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaSubtitlesEncoding_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaSubtitlesEncoding_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
