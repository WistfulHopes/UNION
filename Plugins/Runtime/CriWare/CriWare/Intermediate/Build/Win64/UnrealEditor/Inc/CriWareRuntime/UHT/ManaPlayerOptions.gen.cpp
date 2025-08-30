// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/ManaPlayerOptions.h"
#include "CriWareRuntime/Public/ManaPlayerTrackOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManaPlayerOptions() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponent_NoRegister();
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaFrameAction();
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaMaxFrameDrop();
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaPlaybackTimer();
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaPlayerOptionBooleanOverride();
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaPlayerOptions();
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaPlayerTrackOptions();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin ScriptStruct FManaPlayerOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManaPlayerOptions;
class UScriptStruct* FManaPlayerOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManaPlayerOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManaPlayerOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManaPlayerOptions, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("ManaPlayerOptions"));
	}
	return Z_Registration_Info_UScriptStruct_ManaPlayerOptions.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FManaPlayerOptions>()
{
	return FManaPlayerOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FManaPlayerOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ManaPlayerOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tracks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerOptions" },
		{ "ModuleRelativePath", "Public/ManaPlayerOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeekTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerOptions" },
		{ "ModuleRelativePath", "Public/ManaPlayerOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayOnOpen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerOptions" },
		{ "ModuleRelativePath", "Public/ManaPlayerOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Loop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerOptions" },
		{ "ModuleRelativePath", "Public/ManaPlayerOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerOptions" },
		{ "ModuleRelativePath", "Public/ManaPlayerOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxFrameDrop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerOptions" },
		{ "ModuleRelativePath", "Public/ManaPlayerOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndFrameAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerOptions" },
		{ "ModuleRelativePath", "Public/ManaPlayerOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeSyncedSource_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerOptions" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ManaPlayerOptions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tracks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SeekTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlayOnOpen_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlayOnOpen;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Loop_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Loop;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlaybackTimer_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlaybackTimer;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaxFrameDrop_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaxFrameDrop;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EndFrameAction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EndFrameAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TimeSyncedSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManaPlayerOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_Tracks = { "Tracks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManaPlayerOptions, Tracks), Z_Construct_UScriptStruct_FManaPlayerTrackOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tracks_MetaData), NewProp_Tracks_MetaData) }; // 1466849623
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_SeekTime = { "SeekTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManaPlayerOptions, SeekTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeekTime_MetaData), NewProp_SeekTime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_PlayOnOpen_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_PlayOnOpen = { "PlayOnOpen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManaPlayerOptions, PlayOnOpen), Z_Construct_UEnum_CriWareRuntime_EManaPlayerOptionBooleanOverride, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayOnOpen_MetaData), NewProp_PlayOnOpen_MetaData) }; // 2246815507
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_Loop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_Loop = { "Loop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManaPlayerOptions, Loop), Z_Construct_UEnum_CriWareRuntime_EManaPlayerOptionBooleanOverride, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Loop_MetaData), NewProp_Loop_MetaData) }; // 2246815507
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_PlaybackTimer_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_PlaybackTimer = { "PlaybackTimer", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManaPlayerOptions, PlaybackTimer), Z_Construct_UEnum_CriWareRuntime_EManaPlaybackTimer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaybackTimer_MetaData), NewProp_PlaybackTimer_MetaData) }; // 1950816337
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_MaxFrameDrop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_MaxFrameDrop = { "MaxFrameDrop", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManaPlayerOptions, MaxFrameDrop), Z_Construct_UEnum_CriWareRuntime_EManaMaxFrameDrop, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxFrameDrop_MetaData), NewProp_MaxFrameDrop_MetaData) }; // 1699464272
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_EndFrameAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_EndFrameAction = { "EndFrameAction", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManaPlayerOptions, EndFrameAction), Z_Construct_UEnum_CriWareRuntime_EManaFrameAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndFrameAction_MetaData), NewProp_EndFrameAction_MetaData) }; // 1114415206
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_TimeSyncedSource = { "TimeSyncedSource", nullptr, (EPropertyFlags)0x001204000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FManaPlayerOptions, TimeSyncedSource), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeSyncedSource_MetaData), NewProp_TimeSyncedSource_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_Tracks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_SeekTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_PlayOnOpen_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_PlayOnOpen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_Loop_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_Loop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_PlaybackTimer_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_PlaybackTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_MaxFrameDrop_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_MaxFrameDrop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_EndFrameAction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_EndFrameAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_TimeSyncedSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	nullptr,
	&NewStructOps,
	"ManaPlayerOptions",
	Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::PropPointers),
	sizeof(FManaPlayerOptions),
	alignof(FManaPlayerOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FManaPlayerOptions()
{
	if (!Z_Registration_Info_UScriptStruct_ManaPlayerOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManaPlayerOptions.InnerSingleton, Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ManaPlayerOptions.InnerSingleton;
}
// End ScriptStruct FManaPlayerOptions

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayerOptions_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FManaPlayerOptions::StaticStruct, Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewStructOps, TEXT("ManaPlayerOptions"), &Z_Registration_Info_UScriptStruct_ManaPlayerOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManaPlayerOptions), 2109526587U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayerOptions_h_2901188895(TEXT("/Script/CriWareRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayerOptions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayerOptions_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
