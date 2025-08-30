// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubstanceCore/Public/ESubstanceTextureSize.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESubstanceTextureSize() {}

// Begin Cross Module References
SUBSTANCECORE_API UEnum* Z_Construct_UEnum_SubstanceCore_ESubstanceTextureSize();
UPackage* Z_Construct_UPackage__Script_SubstanceCore();
// End Cross Module References

// Begin Enum ESubstanceTextureSize
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESubstanceTextureSize;
static UEnum* ESubstanceTextureSize_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESubstanceTextureSize.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESubstanceTextureSize.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SubstanceCore_ESubstanceTextureSize, (UObject*)Z_Construct_UPackage__Script_SubstanceCore(), TEXT("ESubstanceTextureSize"));
	}
	return Z_Registration_Info_UEnum_ESubstanceTextureSize.OuterSingleton;
}
template<> SUBSTANCECORE_API UEnum* StaticEnum<ESubstanceTextureSize>()
{
	return ESubstanceTextureSize_StaticEnum();
}
struct Z_Construct_UEnum_SubstanceCore_ESubstanceTextureSize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ERL_1024.Name", "ERL_1024" },
		{ "ERL_128.Name", "ERL_128" },
		{ "ERL_16.Name", "ERL_16" },
		{ "ERL_2048.Name", "ERL_2048" },
		{ "ERL_256.Name", "ERL_256" },
		{ "ERL_32.Name", "ERL_32" },
		{ "ERL_4096.Name", "ERL_4096" },
		{ "ERL_512.Name", "ERL_512" },
		{ "ERL_64.Name", "ERL_64" },
		{ "ERL_8192.Name", "ERL_8192" },
		{ "ModuleRelativePath", "Public/ESubstanceTextureSize.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERL_16", (int64)ERL_16 },
		{ "ERL_32", (int64)ERL_32 },
		{ "ERL_64", (int64)ERL_64 },
		{ "ERL_128", (int64)ERL_128 },
		{ "ERL_256", (int64)ERL_256 },
		{ "ERL_512", (int64)ERL_512 },
		{ "ERL_1024", (int64)ERL_1024 },
		{ "ERL_2048", (int64)ERL_2048 },
		{ "ERL_4096", (int64)ERL_4096 },
		{ "ERL_8192", (int64)ERL_8192 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SubstanceCore_ESubstanceTextureSize_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SubstanceCore,
	nullptr,
	"ESubstanceTextureSize",
	"ESubstanceTextureSize",
	Z_Construct_UEnum_SubstanceCore_ESubstanceTextureSize_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SubstanceCore_ESubstanceTextureSize_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SubstanceCore_ESubstanceTextureSize_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SubstanceCore_ESubstanceTextureSize_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SubstanceCore_ESubstanceTextureSize()
{
	if (!Z_Registration_Info_UEnum_ESubstanceTextureSize.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESubstanceTextureSize.InnerSingleton, Z_Construct_UEnum_SubstanceCore_ESubstanceTextureSize_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESubstanceTextureSize.InnerSingleton;
}
// End Enum ESubstanceTextureSize

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_ESubstanceTextureSize_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESubstanceTextureSize_StaticEnum, TEXT("ESubstanceTextureSize"), &Z_Registration_Info_UEnum_ESubstanceTextureSize, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 862035151U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_ESubstanceTextureSize_h_1396704543(TEXT("/Script/SubstanceCore"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_ESubstanceTextureSize_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_ESubstanceTextureSize_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
