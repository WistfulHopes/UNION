// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EManaComponentTextureType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEManaComponentTextureType() {}

// Begin Cross Module References
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaComponentTextureType();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Enum EManaComponentTextureType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EManaComponentTextureType;
static UEnum* EManaComponentTextureType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EManaComponentTextureType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EManaComponentTextureType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EManaComponentTextureType, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EManaComponentTextureType"));
	}
	return Z_Registration_Info_UEnum_EManaComponentTextureType.OuterSingleton;
}
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EManaComponentTextureType>()
{
	return EManaComponentTextureType_StaticEnum();
}
struct Z_Construct_UEnum_CriWareRuntime_EManaComponentTextureType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EManaComponentTextureType.h" },
		{ "Texture_A.Name", "EManaComponentTextureType::Texture_A" },
		{ "Texture_External.Name", "EManaComponentTextureType::Texture_External" },
		{ "Texture_RGB.Name", "EManaComponentTextureType::Texture_RGB" },
		{ "Texture_U.Name", "EManaComponentTextureType::Texture_U" },
		{ "Texture_UV.Name", "EManaComponentTextureType::Texture_UV" },
		{ "Texture_V.Name", "EManaComponentTextureType::Texture_V" },
		{ "Texture_Y.Name", "EManaComponentTextureType::Texture_Y" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EManaComponentTextureType::Texture_Y", (int64)EManaComponentTextureType::Texture_Y },
		{ "EManaComponentTextureType::Texture_U", (int64)EManaComponentTextureType::Texture_U },
		{ "EManaComponentTextureType::Texture_V", (int64)EManaComponentTextureType::Texture_V },
		{ "EManaComponentTextureType::Texture_A", (int64)EManaComponentTextureType::Texture_A },
		{ "EManaComponentTextureType::Texture_UV", (int64)EManaComponentTextureType::Texture_UV },
		{ "EManaComponentTextureType::Texture_RGB", (int64)EManaComponentTextureType::Texture_RGB },
		{ "EManaComponentTextureType::Texture_External", (int64)EManaComponentTextureType::Texture_External },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareRuntime_EManaComponentTextureType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	"EManaComponentTextureType",
	"EManaComponentTextureType",
	Z_Construct_UEnum_CriWareRuntime_EManaComponentTextureType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EManaComponentTextureType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EManaComponentTextureType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CriWareRuntime_EManaComponentTextureType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CriWareRuntime_EManaComponentTextureType()
{
	if (!Z_Registration_Info_UEnum_EManaComponentTextureType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EManaComponentTextureType.InnerSingleton, Z_Construct_UEnum_CriWareRuntime_EManaComponentTextureType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EManaComponentTextureType.InnerSingleton;
}
// End Enum EManaComponentTextureType

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaComponentTextureType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EManaComponentTextureType_StaticEnum, TEXT("EManaComponentTextureType"), &Z_Registration_Info_UEnum_EManaComponentTextureType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2524103528U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaComponentTextureType_h_593992922(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaComponentTextureType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaComponentTextureType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
