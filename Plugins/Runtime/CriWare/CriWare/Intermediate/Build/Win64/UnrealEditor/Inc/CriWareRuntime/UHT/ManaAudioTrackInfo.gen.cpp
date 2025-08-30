// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/ManaAudioTrackInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManaAudioTrackInfo() {}

// Begin Cross Module References
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaSoundType();
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaAudioTrackInfo();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin ScriptStruct FManaAudioTrackInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManaAudioTrackInfo;
class UScriptStruct* FManaAudioTrackInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManaAudioTrackInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManaAudioTrackInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManaAudioTrackInfo, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("ManaAudioTrackInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ManaAudioTrackInfo.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FManaAudioTrackInfo>()
{
	return FManaAudioTrackInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ManaAudioTrackInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumChannels_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaAudioTrackInfo" },
		{ "ModuleRelativePath", "Public/ManaAudioTrackInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SamplingRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaAudioTrackInfo" },
		{ "ModuleRelativePath", "Public/ManaAudioTrackInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalSamples_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaAudioTrackInfo" },
		{ "ModuleRelativePath", "Public/ManaAudioTrackInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAmbisonics_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaAudioTrackInfo" },
		{ "ModuleRelativePath", "Public/ManaAudioTrackInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaAudioTrackInfo" },
		{ "ModuleRelativePath", "Public/ManaAudioTrackInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumChannels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SamplingRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalSamples;
	static void NewProp_bIsAmbisonics_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAmbisonics;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManaAudioTrackInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_NumChannels = { "NumChannels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManaAudioTrackInfo, NumChannels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumChannels_MetaData), NewProp_NumChannels_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_SamplingRate = { "SamplingRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManaAudioTrackInfo, SamplingRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SamplingRate_MetaData), NewProp_SamplingRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_TotalSamples = { "TotalSamples", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManaAudioTrackInfo, TotalSamples), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalSamples_MetaData), NewProp_TotalSamples_MetaData) };
void Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_bIsAmbisonics_SetBit(void* Obj)
{
	((FManaAudioTrackInfo*)Obj)->bIsAmbisonics = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_bIsAmbisonics = { "bIsAmbisonics", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FManaAudioTrackInfo), &Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_bIsAmbisonics_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAmbisonics_MetaData), NewProp_bIsAmbisonics_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManaAudioTrackInfo, Type), Z_Construct_UEnum_CriWareRuntime_EManaSoundType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 869709634
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_NumChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_SamplingRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_TotalSamples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_bIsAmbisonics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	&NewStructOps,
	"ManaAudioTrackInfo",
	Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::PropPointers),
	sizeof(FManaAudioTrackInfo),
	alignof(FManaAudioTrackInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FManaAudioTrackInfo()
{
	if (!Z_Registration_Info_UScriptStruct_ManaAudioTrackInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManaAudioTrackInfo.InnerSingleton, Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ManaAudioTrackInfo.InnerSingleton;
}
// End ScriptStruct FManaAudioTrackInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaAudioTrackInfo_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FManaAudioTrackInfo::StaticStruct, Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewStructOps, TEXT("ManaAudioTrackInfo"), &Z_Registration_Info_UScriptStruct_ManaAudioTrackInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManaAudioTrackInfo), 2532791637U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaAudioTrackInfo_h_2790030758(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaAudioTrackInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaAudioTrackInfo_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
