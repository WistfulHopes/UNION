// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EManaPlayerOptionBooleanOverride.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEManaPlayerOptionBooleanOverride() {}

// Begin Cross Module References
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaPlayerOptionBooleanOverride();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Enum EManaPlayerOptionBooleanOverride
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EManaPlayerOptionBooleanOverride;
static UEnum* EManaPlayerOptionBooleanOverride_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EManaPlayerOptionBooleanOverride.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EManaPlayerOptionBooleanOverride.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EManaPlayerOptionBooleanOverride, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EManaPlayerOptionBooleanOverride"));
	}
	return Z_Registration_Info_UEnum_EManaPlayerOptionBooleanOverride.OuterSingleton;
}
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EManaPlayerOptionBooleanOverride>()
{
	return EManaPlayerOptionBooleanOverride_StaticEnum();
}
struct Z_Construct_UEnum_CriWareRuntime_EManaPlayerOptionBooleanOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Disabled.Name", "EManaPlayerOptionBooleanOverride::Disabled" },
		{ "Enabled.Name", "EManaPlayerOptionBooleanOverride::Enabled" },
		{ "ModuleRelativePath", "Public/EManaPlayerOptionBooleanOverride.h" },
		{ "UseManaPlayerSetting.Name", "EManaPlayerOptionBooleanOverride::UseManaPlayerSetting" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EManaPlayerOptionBooleanOverride::UseManaPlayerSetting", (int64)EManaPlayerOptionBooleanOverride::UseManaPlayerSetting },
		{ "EManaPlayerOptionBooleanOverride::Enabled", (int64)EManaPlayerOptionBooleanOverride::Enabled },
		{ "EManaPlayerOptionBooleanOverride::Disabled", (int64)EManaPlayerOptionBooleanOverride::Disabled },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareRuntime_EManaPlayerOptionBooleanOverride_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	"EManaPlayerOptionBooleanOverride",
	"EManaPlayerOptionBooleanOverride",
	Z_Construct_UEnum_CriWareRuntime_EManaPlayerOptionBooleanOverride_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EManaPlayerOptionBooleanOverride_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EManaPlayerOptionBooleanOverride_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CriWareRuntime_EManaPlayerOptionBooleanOverride_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CriWareRuntime_EManaPlayerOptionBooleanOverride()
{
	if (!Z_Registration_Info_UEnum_EManaPlayerOptionBooleanOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EManaPlayerOptionBooleanOverride.InnerSingleton, Z_Construct_UEnum_CriWareRuntime_EManaPlayerOptionBooleanOverride_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EManaPlayerOptionBooleanOverride.InnerSingleton;
}
// End Enum EManaPlayerOptionBooleanOverride

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaPlayerOptionBooleanOverride_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EManaPlayerOptionBooleanOverride_StaticEnum, TEXT("EManaPlayerOptionBooleanOverride"), &Z_Registration_Info_UEnum_EManaPlayerOptionBooleanOverride, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2246815507U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaPlayerOptionBooleanOverride_h_629741654(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaPlayerOptionBooleanOverride_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaPlayerOptionBooleanOverride_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
