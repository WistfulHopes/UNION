// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AisacControlInterpolationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAisacControlInterpolationSettings() {}

// Begin Cross Module References
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAisacControlInterpolationSettings();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin ScriptStruct FAisacControlInterpolationSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AisacControlInterpolationSettings;
class UScriptStruct* FAisacControlInterpolationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AisacControlInterpolationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AisacControlInterpolationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AisacControlInterpolationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AisacControlInterpolationSettings.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAisacControlInterpolationSettings>()
{
	return FAisacControlInterpolationSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AisacControlInterpolationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AisacControlID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AisacControlInterpolationSettings" },
		{ "ModuleRelativePath", "Public/AisacControlInterpolationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AisacControlName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AisacControlInterpolationSettings" },
		{ "ModuleRelativePath", "Public/AisacControlInterpolationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AisacControlValueForInside_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AisacControlInterpolationSettings" },
		{ "ModuleRelativePath", "Public/AisacControlInterpolationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AisacControlValueForOutside_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AisacControlInterpolationSettings" },
		{ "ModuleRelativePath", "Public/AisacControlInterpolationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AisacControlInterpolationSettings" },
		{ "ModuleRelativePath", "Public/AisacControlInterpolationSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AisacControlID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AisacControlName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AisacControlValueForInside;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AisacControlValueForOutside;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAisacControlInterpolationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlID = { "AisacControlID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAisacControlInterpolationSettings, AisacControlID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AisacControlID_MetaData), NewProp_AisacControlID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlName = { "AisacControlName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAisacControlInterpolationSettings, AisacControlName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AisacControlName_MetaData), NewProp_AisacControlName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlValueForInside = { "AisacControlValueForInside", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAisacControlInterpolationSettings, AisacControlValueForInside), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AisacControlValueForInside_MetaData), NewProp_AisacControlValueForInside_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlValueForOutside = { "AisacControlValueForOutside", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAisacControlInterpolationSettings, AisacControlValueForOutside), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AisacControlValueForOutside_MetaData), NewProp_AisacControlValueForOutside_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAisacControlInterpolationSettings, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlValueForInside,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlValueForOutside,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_Width,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	&NewStructOps,
	"AisacControlInterpolationSettings",
	Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::PropPointers),
	sizeof(FAisacControlInterpolationSettings),
	alignof(FAisacControlInterpolationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAisacControlInterpolationSettings()
{
	if (!Z_Registration_Info_UScriptStruct_AisacControlInterpolationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AisacControlInterpolationSettings.InnerSingleton, Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AisacControlInterpolationSettings.InnerSingleton;
}
// End ScriptStruct FAisacControlInterpolationSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AisacControlInterpolationSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAisacControlInterpolationSettings::StaticStruct, Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewStructOps, TEXT("AisacControlInterpolationSettings"), &Z_Registration_Info_UScriptStruct_AisacControlInterpolationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAisacControlInterpolationSettings), 853477751U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AisacControlInterpolationSettings_h_2157948816(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AisacControlInterpolationSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AisacControlInterpolationSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
