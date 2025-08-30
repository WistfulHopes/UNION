// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EManaMaxFrameDrop.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEManaMaxFrameDrop() {}

// Begin Cross Module References
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaMaxFrameDrop();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Enum EManaMaxFrameDrop
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EManaMaxFrameDrop;
static UEnum* EManaMaxFrameDrop_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EManaMaxFrameDrop.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EManaMaxFrameDrop.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EManaMaxFrameDrop, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EManaMaxFrameDrop"));
	}
	return Z_Registration_Info_UEnum_EManaMaxFrameDrop.OuterSingleton;
}
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EManaMaxFrameDrop>()
{
	return EManaMaxFrameDrop_StaticEnum();
}
struct Z_Construct_UEnum_CriWareRuntime_EManaMaxFrameDrop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Disabled.Name", "EManaMaxFrameDrop::Disabled" },
		{ "Eight.Name", "EManaMaxFrameDrop::Eight" },
		{ "Five.Name", "EManaMaxFrameDrop::Five" },
		{ "For.Name", "EManaMaxFrameDrop::For" },
		{ "Infinite.Name", "EManaMaxFrameDrop::Infinite" },
		{ "ModuleRelativePath", "Public/EManaMaxFrameDrop.h" },
		{ "Nine.Name", "EManaMaxFrameDrop::Nine" },
		{ "One.Name", "EManaMaxFrameDrop::One" },
		{ "Seven.Name", "EManaMaxFrameDrop::Seven" },
		{ "Six.Name", "EManaMaxFrameDrop::Six" },
		{ "Ten.Name", "EManaMaxFrameDrop::Ten" },
		{ "Three.Name", "EManaMaxFrameDrop::Three" },
		{ "Two.Name", "EManaMaxFrameDrop::Two" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EManaMaxFrameDrop::Disabled", (int64)EManaMaxFrameDrop::Disabled },
		{ "EManaMaxFrameDrop::One", (int64)EManaMaxFrameDrop::One },
		{ "EManaMaxFrameDrop::Two", (int64)EManaMaxFrameDrop::Two },
		{ "EManaMaxFrameDrop::Three", (int64)EManaMaxFrameDrop::Three },
		{ "EManaMaxFrameDrop::For", (int64)EManaMaxFrameDrop::For },
		{ "EManaMaxFrameDrop::Five", (int64)EManaMaxFrameDrop::Five },
		{ "EManaMaxFrameDrop::Six", (int64)EManaMaxFrameDrop::Six },
		{ "EManaMaxFrameDrop::Seven", (int64)EManaMaxFrameDrop::Seven },
		{ "EManaMaxFrameDrop::Eight", (int64)EManaMaxFrameDrop::Eight },
		{ "EManaMaxFrameDrop::Nine", (int64)EManaMaxFrameDrop::Nine },
		{ "EManaMaxFrameDrop::Ten", (int64)EManaMaxFrameDrop::Ten },
		{ "EManaMaxFrameDrop::Infinite", (int64)EManaMaxFrameDrop::Infinite },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareRuntime_EManaMaxFrameDrop_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	"EManaMaxFrameDrop",
	"EManaMaxFrameDrop",
	Z_Construct_UEnum_CriWareRuntime_EManaMaxFrameDrop_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EManaMaxFrameDrop_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EManaMaxFrameDrop_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CriWareRuntime_EManaMaxFrameDrop_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CriWareRuntime_EManaMaxFrameDrop()
{
	if (!Z_Registration_Info_UEnum_EManaMaxFrameDrop.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EManaMaxFrameDrop.InnerSingleton, Z_Construct_UEnum_CriWareRuntime_EManaMaxFrameDrop_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EManaMaxFrameDrop.InnerSingleton;
}
// End Enum EManaMaxFrameDrop

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaMaxFrameDrop_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EManaMaxFrameDrop_StaticEnum, TEXT("EManaMaxFrameDrop"), &Z_Registration_Info_UEnum_EManaMaxFrameDrop, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1699464272U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaMaxFrameDrop_h_279346612(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaMaxFrameDrop_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaMaxFrameDrop_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
