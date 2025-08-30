// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/ManaPlayerTrackOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManaPlayerTrackOptions() {}

// Begin Cross Module References
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaPlayerTrackOptions();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin ScriptStruct FManaPlayerTrackOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManaPlayerTrackOptions;
class UScriptStruct* FManaPlayerTrackOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManaPlayerTrackOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManaPlayerTrackOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManaPlayerTrackOptions, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("ManaPlayerTrackOptions"));
	}
	return Z_Registration_Info_UScriptStruct_ManaPlayerTrackOptions.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FManaPlayerTrackOptions>()
{
	return FManaPlayerTrackOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ManaPlayerTrackOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Audio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerTrackOptions" },
		{ "ModuleRelativePath", "Public/ManaPlayerTrackOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubAudio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerTrackOptions" },
		{ "ModuleRelativePath", "Public/ManaPlayerTrackOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtraAudio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerTrackOptions" },
		{ "ModuleRelativePath", "Public/ManaPlayerTrackOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Subtitle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerTrackOptions" },
		{ "ModuleRelativePath", "Public/ManaPlayerTrackOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Video_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerTrackOptions" },
		{ "ModuleRelativePath", "Public/ManaPlayerTrackOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerTrackOptions" },
		{ "ModuleRelativePath", "Public/ManaPlayerTrackOptions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Audio;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SubAudio;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExtraAudio;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Subtitle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Video;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManaPlayerTrackOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Audio = { "Audio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManaPlayerTrackOptions, Audio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Audio_MetaData), NewProp_Audio_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_SubAudio = { "SubAudio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManaPlayerTrackOptions, SubAudio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubAudio_MetaData), NewProp_SubAudio_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_ExtraAudio = { "ExtraAudio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManaPlayerTrackOptions, ExtraAudio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtraAudio_MetaData), NewProp_ExtraAudio_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Subtitle = { "Subtitle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManaPlayerTrackOptions, Subtitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Subtitle_MetaData), NewProp_Subtitle_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Video = { "Video", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManaPlayerTrackOptions, Video), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Video_MetaData), NewProp_Video_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManaPlayerTrackOptions, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Audio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_SubAudio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_ExtraAudio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Subtitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Video,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Alpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	&NewStructOps,
	"ManaPlayerTrackOptions",
	Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::PropPointers),
	sizeof(FManaPlayerTrackOptions),
	alignof(FManaPlayerTrackOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FManaPlayerTrackOptions()
{
	if (!Z_Registration_Info_UScriptStruct_ManaPlayerTrackOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManaPlayerTrackOptions.InnerSingleton, Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ManaPlayerTrackOptions.InnerSingleton;
}
// End ScriptStruct FManaPlayerTrackOptions

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayerTrackOptions_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FManaPlayerTrackOptions::StaticStruct, Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewStructOps, TEXT("ManaPlayerTrackOptions"), &Z_Registration_Info_UScriptStruct_ManaPlayerTrackOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManaPlayerTrackOptions), 1466849623U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayerTrackOptions_h_2678724000(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayerTrackOptions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayerTrackOptions_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
