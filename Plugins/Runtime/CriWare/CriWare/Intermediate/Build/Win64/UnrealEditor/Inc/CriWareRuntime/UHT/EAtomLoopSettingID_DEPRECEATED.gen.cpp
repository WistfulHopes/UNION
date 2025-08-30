// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EAtomLoopSettingID_DEPRECEATED.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAtomLoopSettingID_DEPRECEATED() {}

// Begin Cross Module References
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomLoopSettingID_DEPRECEATED();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Enum EAtomLoopSettingID_DEPRECEATED
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomLoopSettingID_DEPRECEATED;
static UEnum* EAtomLoopSettingID_DEPRECEATED_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAtomLoopSettingID_DEPRECEATED.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAtomLoopSettingID_DEPRECEATED.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EAtomLoopSettingID_DEPRECEATED, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EAtomLoopSettingID_DEPRECEATED"));
	}
	return Z_Registration_Info_UEnum_EAtomLoopSettingID_DEPRECEATED.OuterSingleton;
}
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomLoopSettingID_DEPRECEATED>()
{
	return EAtomLoopSettingID_DEPRECEATED_StaticEnum();
}
struct Z_Construct_UEnum_CriWareRuntime_EAtomLoopSettingID_DEPRECEATED_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DefaultLoop_DEPRECATED.Name", "EAtomLoopSettingID_DEPRECEATED::DefaultLoop_DEPRECATED" },
		{ "ForceLoop_DEPRECATED.Name", "EAtomLoopSettingID_DEPRECEATED::ForceLoop_DEPRECATED" },
		{ "IgnoreLoop_DEPRECATED.Name", "EAtomLoopSettingID_DEPRECEATED::IgnoreLoop_DEPRECATED" },
		{ "ModuleRelativePath", "Public/EAtomLoopSettingID_DEPRECEATED.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAtomLoopSettingID_DEPRECEATED::DefaultLoop_DEPRECATED", (int64)EAtomLoopSettingID_DEPRECEATED::DefaultLoop_DEPRECATED },
		{ "EAtomLoopSettingID_DEPRECEATED::ForceLoop_DEPRECATED", (int64)EAtomLoopSettingID_DEPRECEATED::ForceLoop_DEPRECATED },
		{ "EAtomLoopSettingID_DEPRECEATED::IgnoreLoop_DEPRECATED", (int64)EAtomLoopSettingID_DEPRECEATED::IgnoreLoop_DEPRECATED },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareRuntime_EAtomLoopSettingID_DEPRECEATED_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	"EAtomLoopSettingID_DEPRECEATED",
	"EAtomLoopSettingID_DEPRECEATED",
	Z_Construct_UEnum_CriWareRuntime_EAtomLoopSettingID_DEPRECEATED_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EAtomLoopSettingID_DEPRECEATED_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EAtomLoopSettingID_DEPRECEATED_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CriWareRuntime_EAtomLoopSettingID_DEPRECEATED_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomLoopSettingID_DEPRECEATED()
{
	if (!Z_Registration_Info_UEnum_EAtomLoopSettingID_DEPRECEATED.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomLoopSettingID_DEPRECEATED.InnerSingleton, Z_Construct_UEnum_CriWareRuntime_EAtomLoopSettingID_DEPRECEATED_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAtomLoopSettingID_DEPRECEATED.InnerSingleton;
}
// End Enum EAtomLoopSettingID_DEPRECEATED

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomLoopSettingID_DEPRECEATED_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAtomLoopSettingID_DEPRECEATED_StaticEnum, TEXT("EAtomLoopSettingID_DEPRECEATED"), &Z_Registration_Info_UEnum_EAtomLoopSettingID_DEPRECEATED, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3458243263U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomLoopSettingID_DEPRECEATED_h_302982872(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomLoopSettingID_DEPRECEATED_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomLoopSettingID_DEPRECEATED_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
