// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubstanceCore/Public/EDefaultSubstanceTextureSize.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDefaultSubstanceTextureSize() {}

// Begin Cross Module References
SUBSTANCECORE_API UEnum* Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize();
UPackage* Z_Construct_UPackage__Script_SubstanceCore();
// End Cross Module References

// Begin Enum EDefaultSubstanceTextureSize
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDefaultSubstanceTextureSize;
static UEnum* EDefaultSubstanceTextureSize_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDefaultSubstanceTextureSize.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDefaultSubstanceTextureSize.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize, (UObject*)Z_Construct_UPackage__Script_SubstanceCore(), TEXT("EDefaultSubstanceTextureSize"));
	}
	return Z_Registration_Info_UEnum_EDefaultSubstanceTextureSize.OuterSingleton;
}
template<> SUBSTANCECORE_API UEnum* StaticEnum<EDefaultSubstanceTextureSize>()
{
	return EDefaultSubstanceTextureSize_StaticEnum();
}
struct Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EDefaultSubstanceTextureSize.h" },
		{ "Size_0.Name", "Size_0" },
		{ "Size_1024.Name", "Size_1024" },
		{ "Size_128.Name", "Size_128" },
		{ "Size_16.Name", "Size_16" },
		{ "Size_2048.Name", "Size_2048" },
		{ "Size_256.Name", "Size_256" },
		{ "Size_32.Name", "Size_32" },
		{ "Size_4096.Name", "Size_4096" },
		{ "Size_512.Name", "Size_512" },
		{ "Size_64.Name", "Size_64" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Size_0", (int64)Size_0 },
		{ "Size_16", (int64)Size_16 },
		{ "Size_32", (int64)Size_32 },
		{ "Size_64", (int64)Size_64 },
		{ "Size_128", (int64)Size_128 },
		{ "Size_256", (int64)Size_256 },
		{ "Size_512", (int64)Size_512 },
		{ "Size_1024", (int64)Size_1024 },
		{ "Size_2048", (int64)Size_2048 },
		{ "Size_4096", (int64)Size_4096 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SubstanceCore,
	nullptr,
	"EDefaultSubstanceTextureSize",
	"EDefaultSubstanceTextureSize",
	Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize()
{
	if (!Z_Registration_Info_UEnum_EDefaultSubstanceTextureSize.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDefaultSubstanceTextureSize.InnerSingleton, Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDefaultSubstanceTextureSize.InnerSingleton;
}
// End Enum EDefaultSubstanceTextureSize

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_EDefaultSubstanceTextureSize_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDefaultSubstanceTextureSize_StaticEnum, TEXT("EDefaultSubstanceTextureSize"), &Z_Registration_Info_UEnum_EDefaultSubstanceTextureSize, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3415714051U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_EDefaultSubstanceTextureSize_h_624630995(TEXT("/Script/SubstanceCore"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_EDefaultSubstanceTextureSize_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_EDefaultSubstanceTextureSize_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
