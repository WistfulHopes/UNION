// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubstanceCore/Public/ESubstanceEngineType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESubstanceEngineType() {}

// Begin Cross Module References
SUBSTANCECORE_API UEnum* Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType();
UPackage* Z_Construct_UPackage__Script_SubstanceCore();
// End Cross Module References

// Begin Enum ESubstanceEngineType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESubstanceEngineType;
static UEnum* ESubstanceEngineType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESubstanceEngineType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESubstanceEngineType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType, (UObject*)Z_Construct_UPackage__Script_SubstanceCore(), TEXT("ESubstanceEngineType"));
	}
	return Z_Registration_Info_UEnum_ESubstanceEngineType.OuterSingleton;
}
template<> SUBSTANCECORE_API UEnum* StaticEnum<ESubstanceEngineType>()
{
	return ESubstanceEngineType_StaticEnum();
}
struct Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ESubstanceEngineType.h" },
		{ "SET_CPU.Name", "SET_CPU" },
		{ "SET_GPU.Name", "SET_GPU" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "SET_CPU", (int64)SET_CPU },
		{ "SET_GPU", (int64)SET_GPU },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SubstanceCore,
	nullptr,
	"ESubstanceEngineType",
	"ESubstanceEngineType",
	Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType()
{
	if (!Z_Registration_Info_UEnum_ESubstanceEngineType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESubstanceEngineType.InnerSingleton, Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESubstanceEngineType.InnerSingleton;
}
// End Enum ESubstanceEngineType

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_ESubstanceEngineType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESubstanceEngineType_StaticEnum, TEXT("ESubstanceEngineType"), &Z_Registration_Info_UEnum_ESubstanceEngineType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1059976167U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_ESubstanceEngineType_h_2909408373(TEXT("/Script/SubstanceCore"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_ESubstanceEngineType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_ESubstanceEngineType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
