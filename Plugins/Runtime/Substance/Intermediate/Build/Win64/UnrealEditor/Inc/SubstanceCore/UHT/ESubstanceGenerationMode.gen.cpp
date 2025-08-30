// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubstanceCore/Public/ESubstanceGenerationMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESubstanceGenerationMode() {}

// Begin Cross Module References
SUBSTANCECORE_API UEnum* Z_Construct_UEnum_SubstanceCore_ESubstanceGenerationMode();
UPackage* Z_Construct_UPackage__Script_SubstanceCore();
// End Cross Module References

// Begin Enum ESubstanceGenerationMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESubstanceGenerationMode;
static UEnum* ESubstanceGenerationMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESubstanceGenerationMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESubstanceGenerationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SubstanceCore_ESubstanceGenerationMode, (UObject*)Z_Construct_UPackage__Script_SubstanceCore(), TEXT("ESubstanceGenerationMode"));
	}
	return Z_Registration_Info_UEnum_ESubstanceGenerationMode.OuterSingleton;
}
template<> SUBSTANCECORE_API UEnum* StaticEnum<ESubstanceGenerationMode>()
{
	return ESubstanceGenerationMode_StaticEnum();
}
struct Z_Construct_UEnum_SubstanceCore_ESubstanceGenerationMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ESubstanceGenerationMode.h" },
		{ "SGM_Baked.Name", "SGM_Baked" },
		{ "SGM_OnLoadAsync.Name", "SGM_OnLoadAsync" },
		{ "SGM_OnLoadAsyncAndCache.Name", "SGM_OnLoadAsyncAndCache" },
		{ "SGM_OnLoadSync.Name", "SGM_OnLoadSync" },
		{ "SGM_OnLoadSyncAndCache.Name", "SGM_OnLoadSyncAndCache" },
		{ "SGM_PlatformDefault.Name", "SGM_PlatformDefault" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "SGM_PlatformDefault", (int64)SGM_PlatformDefault },
		{ "SGM_Baked", (int64)SGM_Baked },
		{ "SGM_OnLoadSync", (int64)SGM_OnLoadSync },
		{ "SGM_OnLoadSyncAndCache", (int64)SGM_OnLoadSyncAndCache },
		{ "SGM_OnLoadAsync", (int64)SGM_OnLoadAsync },
		{ "SGM_OnLoadAsyncAndCache", (int64)SGM_OnLoadAsyncAndCache },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SubstanceCore_ESubstanceGenerationMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SubstanceCore,
	nullptr,
	"ESubstanceGenerationMode",
	"ESubstanceGenerationMode",
	Z_Construct_UEnum_SubstanceCore_ESubstanceGenerationMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SubstanceCore_ESubstanceGenerationMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SubstanceCore_ESubstanceGenerationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SubstanceCore_ESubstanceGenerationMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SubstanceCore_ESubstanceGenerationMode()
{
	if (!Z_Registration_Info_UEnum_ESubstanceGenerationMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESubstanceGenerationMode.InnerSingleton, Z_Construct_UEnum_SubstanceCore_ESubstanceGenerationMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESubstanceGenerationMode.InnerSingleton;
}
// End Enum ESubstanceGenerationMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_ESubstanceGenerationMode_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESubstanceGenerationMode_StaticEnum, TEXT("ESubstanceGenerationMode"), &Z_Registration_Info_UEnum_ESubstanceGenerationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1400103919U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_ESubstanceGenerationMode_h_3067716839(TEXT("/Script/SubstanceCore"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_ESubstanceGenerationMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_Substance_Source_SubstanceCore_Public_ESubstanceGenerationMode_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
