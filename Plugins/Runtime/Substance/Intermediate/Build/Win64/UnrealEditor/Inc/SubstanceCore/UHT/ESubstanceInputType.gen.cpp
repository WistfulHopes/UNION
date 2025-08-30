// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubstanceCore/Public/ESubstanceInputType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESubstanceInputType() {}

// Begin Cross Module References
SUBSTANCECORE_API UEnum* Z_Construct_UEnum_SubstanceCore_ESubstanceInputType();
UPackage* Z_Construct_UPackage__Script_SubstanceCore();
// End Cross Module References

// Begin Enum ESubstanceInputType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESubstanceInputType;
static UEnum* ESubstanceInputType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESubstanceInputType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESubstanceInputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SubstanceCore_ESubstanceInputType, (UObject*)Z_Construct_UPackage__Script_SubstanceCore(), TEXT("ESubstanceInputType"));
	}
	return Z_Registration_Info_UEnum_ESubstanceInputType.OuterSingleton;
}
template<> SUBSTANCECORE_API UEnum* StaticEnum<ESubstanceInputType>()
{
	return ESubstanceInputType_StaticEnum();
}
struct Z_Construct_UEnum_SubstanceCore_ESubstanceInputType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ESubstanceInputType.h" },
		{ "SIT_Float.Name", "SIT_Float" },
		{ "SIT_Float2.Name", "SIT_Float2" },
		{ "SIT_Float3.Name", "SIT_Float3" },
		{ "SIT_Float4.Name", "SIT_Float4" },
		{ "SIT_Image.Name", "SIT_Image" },
		{ "SIT_Integer.Name", "SIT_Integer" },
		{ "SIT_Integer2.Name", "SIT_Integer2" },
		{ "SIT_Integer3.Name", "SIT_Integer3" },
		{ "SIT_Integer4.Name", "SIT_Integer4" },
		{ "SIT_Unused_6.Name", "SIT_Unused_6" },
		{ "SIT_Unused_7.Name", "SIT_Unused_7" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "SIT_Float", (int64)SIT_Float },
		{ "SIT_Float2", (int64)SIT_Float2 },
		{ "SIT_Float3", (int64)SIT_Float3 },
		{ "SIT_Float4", (int64)SIT_Float4 },
		{ "SIT_Integer", (int64)SIT_Integer },
		{ "SIT_Image", (int64)SIT_Image },
		{ "SIT_Unused_6", (int64)SIT_Unused_6 },
		{ "SIT_Unused_7", (int64)SIT_Unused_7 },
		{ "SIT_Integer2", (int64)SIT_Integer2 },
		{ "SIT_Integer3", (int64)SIT_Integer3 },
		{ "SIT_Integer4", (int64)SIT_Integer4 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SubstanceCore_ESubstanceInputType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SubstanceCore,
	nullptr,
	"ESubstanceInputType",
	"ESubstanceInputType",
	Z_Construct_UEnum_SubstanceCore_ESubstanceInputType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SubstanceCore_ESubstanceInputType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SubstanceCore_ESubstanceInputType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SubstanceCore_ESubstanceInputType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SubstanceCore_ESubstanceInputType()
{
	if (!Z_Registration_Info_UEnum_ESubstanceInputType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESubstanceInputType.InnerSingleton, Z_Construct_UEnum_SubstanceCore_ESubstanceInputType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESubstanceInputType.InnerSingleton;
}
// End Enum ESubstanceInputType

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_ESubstanceInputType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESubstanceInputType_StaticEnum, TEXT("ESubstanceInputType"), &Z_Registration_Info_UEnum_ESubstanceInputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1603683655U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_ESubstanceInputType_h_1476265421(TEXT("/Script/SubstanceCore"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_ESubstanceInputType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_ESubstanceInputType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
