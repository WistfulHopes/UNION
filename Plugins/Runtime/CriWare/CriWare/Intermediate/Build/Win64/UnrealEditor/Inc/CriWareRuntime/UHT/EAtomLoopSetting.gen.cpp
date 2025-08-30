// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EAtomLoopSetting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAtomLoopSetting() {}

// Begin Cross Module References
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomLoopSetting();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Enum EAtomLoopSetting
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomLoopSetting;
static UEnum* EAtomLoopSetting_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAtomLoopSetting.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAtomLoopSetting.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EAtomLoopSetting, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EAtomLoopSetting"));
	}
	return Z_Registration_Info_UEnum_EAtomLoopSetting.OuterSingleton;
}
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomLoopSetting>()
{
	return EAtomLoopSetting_StaticEnum();
}
struct Z_Construct_UEnum_CriWareRuntime_EAtomLoopSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Inherited.Name", "EAtomLoopSetting::Inherited" },
		{ "Loop.Name", "EAtomLoopSetting::Loop" },
		{ "ModuleRelativePath", "Public/EAtomLoopSetting.h" },
		{ "OneShot.Name", "EAtomLoopSetting::OneShot" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAtomLoopSetting::Inherited", (int64)EAtomLoopSetting::Inherited },
		{ "EAtomLoopSetting::Loop", (int64)EAtomLoopSetting::Loop },
		{ "EAtomLoopSetting::OneShot", (int64)EAtomLoopSetting::OneShot },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareRuntime_EAtomLoopSetting_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	"EAtomLoopSetting",
	"EAtomLoopSetting",
	Z_Construct_UEnum_CriWareRuntime_EAtomLoopSetting_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EAtomLoopSetting_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EAtomLoopSetting_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CriWareRuntime_EAtomLoopSetting_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomLoopSetting()
{
	if (!Z_Registration_Info_UEnum_EAtomLoopSetting.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomLoopSetting.InnerSingleton, Z_Construct_UEnum_CriWareRuntime_EAtomLoopSetting_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAtomLoopSetting.InnerSingleton;
}
// End Enum EAtomLoopSetting

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomLoopSetting_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAtomLoopSetting_StaticEnum, TEXT("EAtomLoopSetting"), &Z_Registration_Info_UEnum_EAtomLoopSetting, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3027281822U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomLoopSetting_h_3007011360(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomLoopSetting_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomLoopSetting_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
