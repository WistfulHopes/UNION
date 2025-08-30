// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/SnapshotSwitchSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapshotSwitchSettings() {}

// Begin Cross Module References
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSnapshotSwitchSettings();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin ScriptStruct FSnapshotSwitchSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SnapshotSwitchSettings;
class UScriptStruct* FSnapshotSwitchSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SnapshotSwitchSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SnapshotSwitchSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSnapshotSwitchSettings, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("SnapshotSwitchSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SnapshotSwitchSettings.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FSnapshotSwitchSettings>()
{
	return FSnapshotSwitchSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SnapshotSwitchSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AsrRackID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SnapshotSwitchSettings" },
		{ "ModuleRelativePath", "Public/SnapshotSwitchSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DspBusSettingsID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SnapshotSwitchSettings" },
		{ "ModuleRelativePath", "Public/SnapshotSwitchSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DspBusSettingsName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SnapshotSwitchSettings" },
		{ "ModuleRelativePath", "Public/SnapshotSwitchSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SnapshotSwitchSettings" },
		{ "ModuleRelativePath", "Public/SnapshotSwitchSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SnapshotSwitchSettings" },
		{ "ModuleRelativePath", "Public/SnapshotSwitchSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SnapshotSwitchSettings" },
		{ "ModuleRelativePath", "Public/SnapshotSwitchSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AsrRackID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DspBusSettingsID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DspBusSettingsName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SnapshotID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SnapshotName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSnapshotSwitchSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_AsrRackID = { "AsrRackID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapshotSwitchSettings, AsrRackID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AsrRackID_MetaData), NewProp_AsrRackID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_DspBusSettingsID = { "DspBusSettingsID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapshotSwitchSettings, DspBusSettingsID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DspBusSettingsID_MetaData), NewProp_DspBusSettingsID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_DspBusSettingsName = { "DspBusSettingsName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapshotSwitchSettings, DspBusSettingsName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DspBusSettingsName_MetaData), NewProp_DspBusSettingsName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_SnapshotID = { "SnapshotID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapshotSwitchSettings, SnapshotID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapshotID_MetaData), NewProp_SnapshotID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_SnapshotName = { "SnapshotName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapshotSwitchSettings, SnapshotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapshotName_MetaData), NewProp_SnapshotName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_FadeTime = { "FadeTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapshotSwitchSettings, FadeTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeTime_MetaData), NewProp_FadeTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_AsrRackID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_DspBusSettingsID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_DspBusSettingsName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_SnapshotID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_SnapshotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_FadeTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	&NewStructOps,
	"SnapshotSwitchSettings",
	Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::PropPointers),
	sizeof(FSnapshotSwitchSettings),
	alignof(FSnapshotSwitchSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSnapshotSwitchSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SnapshotSwitchSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SnapshotSwitchSettings.InnerSingleton, Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SnapshotSwitchSettings.InnerSingleton;
}
// End ScriptStruct FSnapshotSwitchSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SnapshotSwitchSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSnapshotSwitchSettings::StaticStruct, Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewStructOps, TEXT("SnapshotSwitchSettings"), &Z_Registration_Info_UScriptStruct_SnapshotSwitchSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSnapshotSwitchSettings), 918467453U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SnapshotSwitchSettings_h_154046639(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SnapshotSwitchSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SnapshotSwitchSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
