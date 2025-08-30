// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/ManaSubtitleTrackInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManaSubtitleTrackInfo() {}

// Begin Cross Module References
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding();
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaSubtitleTrackInfo();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin ScriptStruct FManaSubtitleTrackInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManaSubtitleTrackInfo;
class UScriptStruct* FManaSubtitleTrackInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManaSubtitleTrackInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManaSubtitleTrackInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManaSubtitleTrackInfo, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("ManaSubtitleTrackInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ManaSubtitleTrackInfo.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FManaSubtitleTrackInfo>()
{
	return FManaSubtitleTrackInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FManaSubtitleTrackInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ManaSubtitleTrackInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaSubtitleTrackInfo" },
		{ "ModuleRelativePath", "Public/ManaSubtitleTrackInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaSubtitleTrackInfo" },
		{ "ModuleRelativePath", "Public/ManaSubtitleTrackInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Encoding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaSubtitleTrackInfo" },
		{ "ModuleRelativePath", "Public/ManaSubtitleTrackInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Encoding_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Encoding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManaSubtitleTrackInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FManaSubtitleTrackInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManaSubtitleTrackInfo, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FManaSubtitleTrackInfo_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManaSubtitleTrackInfo, Language), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Language_MetaData), NewProp_Language_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FManaSubtitleTrackInfo_Statics::NewProp_Encoding_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FManaSubtitleTrackInfo_Statics::NewProp_Encoding = { "Encoding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManaSubtitleTrackInfo, Encoding), Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Encoding_MetaData), NewProp_Encoding_MetaData) }; // 1557399849
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManaSubtitleTrackInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaSubtitleTrackInfo_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaSubtitleTrackInfo_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaSubtitleTrackInfo_Statics::NewProp_Encoding_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaSubtitleTrackInfo_Statics::NewProp_Encoding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaSubtitleTrackInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManaSubtitleTrackInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	&NewStructOps,
	"ManaSubtitleTrackInfo",
	Z_Construct_UScriptStruct_FManaSubtitleTrackInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaSubtitleTrackInfo_Statics::PropPointers),
	sizeof(FManaSubtitleTrackInfo),
	alignof(FManaSubtitleTrackInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaSubtitleTrackInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FManaSubtitleTrackInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FManaSubtitleTrackInfo()
{
	if (!Z_Registration_Info_UScriptStruct_ManaSubtitleTrackInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManaSubtitleTrackInfo.InnerSingleton, Z_Construct_UScriptStruct_FManaSubtitleTrackInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ManaSubtitleTrackInfo.InnerSingleton;
}
// End ScriptStruct FManaSubtitleTrackInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaSubtitleTrackInfo_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FManaSubtitleTrackInfo::StaticStruct, Z_Construct_UScriptStruct_FManaSubtitleTrackInfo_Statics::NewStructOps, TEXT("ManaSubtitleTrackInfo"), &Z_Registration_Info_UScriptStruct_ManaSubtitleTrackInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManaSubtitleTrackInfo), 3143107429U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaSubtitleTrackInfo_h_734164638(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaSubtitleTrackInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaSubtitleTrackInfo_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
