// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/CriWarePluginSettings.h"
#include "CriWareRuntime/Public/AtomAsrRackConfig.h"
#include "CriWareRuntime/Public/AtomAsrRackConfigUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCriWarePluginSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriWarePluginSettings();
CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriWarePluginSettings_NoRegister();
CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType();
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAsrRackConfig();
CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAsrRackConfigUI();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Class UCriWarePluginSettings
void UCriWarePluginSettings::StaticRegisterNativesUCriWarePluginSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCriWarePluginSettings);
UClass* Z_Construct_UClass_UCriWarePluginSettings_NoRegister()
{
	return UCriWarePluginSettings::StaticClass();
}
struct Z_Construct_UClass_UCriWarePluginSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CriWarePluginSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNoExistCriWareIni_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEditableCriWareAdxLipSyncSetting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NonAssetContentDir_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentDir_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumBinders_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxBinds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumLoaders_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxFiles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputsLogFileSystem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PS4_FileAccessThreadAffinityMask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PS4_DataDecompressionThreadAffinityMask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PS4_MemoryFileSystemThreadAffinityMask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PS4_FileAccessThreadPriority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PS4_DataDecompressionThreadPriority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PS4_MemoryFileSystemThreadPriority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutomaticallyCreateCueAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UsesInGamePreview_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputsLogAtom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AwbRootDirectory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AwbRoot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MonitorCommunicationBufferSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPitch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AsrOutputChannels_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxVirtualVoices_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumStandardMemoryVoices_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandardMemoryVoiceNumChannels_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandardMemoryVoiceSamplingRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumStandardStreamingVoices_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandardStreamingVoiceNumChannels_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandardStreamingVoiceSamplingRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoolAtomComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AtomConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcfFileName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AtomConfigDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AtomOutputPortDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFactor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundRendererTypeUI_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundRendererType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AsrRackConfigUI_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AsrRackConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hardware1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hardware2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hardware3_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hardware4_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EconomicTickMarginDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EconomicTickFrequency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CullingMarginDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableDirectDbasConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DbasIdentifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DbasMaxStreams_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DbasMaxBps_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DbasMaxManaStreams_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DbasMaxManaBps_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DbasNumSecurementBuffers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HcaMxVoiceSamplingRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumHcaMxMemoryVoices_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HcaMxMemoryVoiceNumChannels_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumHcaMxStreamingVoices_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HcaMxStreamingVoiceNumChannels_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WASAPI_IsExclusive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WASAPI_BitsPerSample_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WASAPI_SamplingRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WASAPI_NumChannels_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseUnrealSoundRenderer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseSonicSYNC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableDualSenseOnWindows_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PS4_ServerThreadAffinityMask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PS4_OutputThreadAffinityMask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PS4_ServerThreadPriority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PS4_OutputThreadPriority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PS4_UseAudio3d_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PS4_NumberOfAudio3dMemoryVoices_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PS4_SamplingRateOfAudio3dMemoryVoices_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PS4_NumberOfAudio3dStreamingVoices_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PS4_SamplingRateOfAudio3dStreamingVoices_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PS5_MaxChannelPorts_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PS5_MaxObjectPorts_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Switch_NumOpusMemoryVoices_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Switch_OpusMemoryVoiceNumChannels_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Switch_OpusMemoryVoiceSamplingRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Switch_NumOpusStreamingVoices_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Switch_OpusStreamingVoiceNumChannels_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Switch_OpusStreamingVoiceSamplingRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitializeMana_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableDecodeSkip_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDecoderHandles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxManaBPS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxManaStreams_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseH264Decoder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseDecoderOutputBuffers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceSoftwareDecodingOnXboxOne_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceSoftwareDecodingOnXboxSeries_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceDisableManaStreamerManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitializeAdxLipSync_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumAnalyzerHandles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseManaStartupMovies_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWaitForMoviesToComplete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMoviesAreSkippable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartupMovies_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWarePluginSettings" },
		{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNoExistCriWareIni_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoExistCriWareIni;
	static void NewProp_bEditableCriWareAdxLipSyncSetting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEditableCriWareAdxLipSyncSetting;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NonAssetContentDir;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ContentDir;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumBinders;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxBinds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumLoaders;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxFiles;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPath;
	static void NewProp_OutputsLogFileSystem_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OutputsLogFileSystem;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PS4_FileAccessThreadAffinityMask;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PS4_DataDecompressionThreadAffinityMask;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PS4_MemoryFileSystemThreadAffinityMask;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PS4_FileAccessThreadPriority;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PS4_DataDecompressionThreadPriority;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PS4_MemoryFileSystemThreadPriority;
	static void NewProp_AutomaticallyCreateCueAsset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AutomaticallyCreateCueAsset;
	static void NewProp_UsesInGamePreview_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UsesInGamePreview;
	static void NewProp_OutputsLogAtom_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OutputsLogAtom;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AwbRootDirectory;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AwbRoot;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MonitorCommunicationBufferSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPitch;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AsrOutputChannels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxVirtualVoices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumStandardMemoryVoices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StandardMemoryVoiceNumChannels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StandardMemoryVoiceSamplingRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumStandardStreamingVoices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StandardStreamingVoiceNumChannels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StandardStreamingVoiceSamplingRate;
	static void NewProp_PoolAtomComponent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PoolAtomComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AtomConfig;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AcfFileName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AtomConfigDataTable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AtomOutputPortDataTable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceFactor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SoundRendererTypeUI_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SoundRendererTypeUI;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SoundRendererType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AsrRackConfigUI_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AsrRackConfigUI;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AsrRackConfig_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AsrRackConfig;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Hardware1;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Hardware2;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Hardware3;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Hardware4;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EconomicTickMarginDistance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EconomicTickFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CullingMarginDistance;
	static void NewProp_EnableDirectDbasConfig_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableDirectDbasConfig;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DbasIdentifier;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DbasMaxStreams;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DbasMaxBps;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DbasMaxManaStreams;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DbasMaxManaBps;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DbasNumSecurementBuffers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HcaMxVoiceSamplingRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumHcaMxMemoryVoices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HcaMxMemoryVoiceNumChannels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumHcaMxStreamingVoices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HcaMxStreamingVoiceNumChannels;
	static void NewProp_WASAPI_IsExclusive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WASAPI_IsExclusive;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WASAPI_BitsPerSample;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WASAPI_SamplingRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WASAPI_NumChannels;
	static void NewProp_UseUnrealSoundRenderer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseUnrealSoundRenderer;
	static void NewProp_UseSonicSYNC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseSonicSYNC;
	static void NewProp_EnableDualSenseOnWindows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableDualSenseOnWindows;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PS4_ServerThreadAffinityMask;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PS4_OutputThreadAffinityMask;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PS4_ServerThreadPriority;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PS4_OutputThreadPriority;
	static void NewProp_PS4_UseAudio3d_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PS4_UseAudio3d;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PS4_NumberOfAudio3dMemoryVoices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PS4_SamplingRateOfAudio3dMemoryVoices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PS4_NumberOfAudio3dStreamingVoices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PS4_SamplingRateOfAudio3dStreamingVoices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PS5_MaxChannelPorts;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PS5_MaxObjectPorts;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Switch_NumOpusMemoryVoices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Switch_OpusMemoryVoiceNumChannels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Switch_OpusMemoryVoiceSamplingRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Switch_NumOpusStreamingVoices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Switch_OpusStreamingVoiceNumChannels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Switch_OpusStreamingVoiceSamplingRate;
	static void NewProp_InitializeMana_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InitializeMana;
	static void NewProp_EnableDecodeSkip_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableDecodeSkip;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxDecoderHandles;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxManaBPS;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxManaStreams;
	static void NewProp_UseH264Decoder_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseH264Decoder;
	static void NewProp_UseDecoderOutputBuffers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseDecoderOutputBuffers;
	static void NewProp_ForceSoftwareDecodingOnXboxOne_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ForceSoftwareDecodingOnXboxOne;
	static void NewProp_ForceSoftwareDecodingOnXboxSeries_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ForceSoftwareDecodingOnXboxSeries;
	static void NewProp_ForceDisableManaStreamerManager_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ForceDisableManaStreamerManager;
	static void NewProp_InitializeAdxLipSync_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InitializeAdxLipSync;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumAnalyzerHandles;
	static void NewProp_bUseManaStartupMovies_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseManaStartupMovies;
	static void NewProp_bWaitForMoviesToComplete_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWaitForMoviesToComplete;
	static void NewProp_bMoviesAreSkippable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMoviesAreSkippable;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StartupMovies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StartupMovies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCriWarePluginSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_bNoExistCriWareIni_SetBit(void* Obj)
{
	((UCriWarePluginSettings*)Obj)->bNoExistCriWareIni = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_bNoExistCriWareIni = { "bNoExistCriWareIni", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCriWarePluginSettings), &Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_bNoExistCriWareIni_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNoExistCriWareIni_MetaData), NewProp_bNoExistCriWareIni_MetaData) };
void Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_bEditableCriWareAdxLipSyncSetting_SetBit(void* Obj)
{
	((UCriWarePluginSettings*)Obj)->bEditableCriWareAdxLipSyncSetting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_bEditableCriWareAdxLipSyncSetting = { "bEditableCriWareAdxLipSyncSetting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCriWarePluginSettings), &Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_bEditableCriWareAdxLipSyncSetting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEditableCriWareAdxLipSyncSetting_MetaData), NewProp_bEditableCriWareAdxLipSyncSetting_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NonAssetContentDir = { "NonAssetContentDir", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, NonAssetContentDir), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NonAssetContentDir_MetaData), NewProp_NonAssetContentDir_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_ContentDir = { "ContentDir", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, ContentDir), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentDir_MetaData), NewProp_ContentDir_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NumBinders = { "NumBinders", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, NumBinders), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumBinders_MetaData), NewProp_NumBinders_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MaxBinds = { "MaxBinds", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, MaxBinds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxBinds_MetaData), NewProp_MaxBinds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NumLoaders = { "NumLoaders", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, NumLoaders), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumLoaders_MetaData), NewProp_NumLoaders_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MaxFiles = { "MaxFiles", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, MaxFiles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxFiles_MetaData), NewProp_MaxFiles_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MaxPath = { "MaxPath", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, MaxPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPath_MetaData), NewProp_MaxPath_MetaData) };
void Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_OutputsLogFileSystem_SetBit(void* Obj)
{
	((UCriWarePluginSettings*)Obj)->OutputsLogFileSystem = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_OutputsLogFileSystem = { "OutputsLogFileSystem", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCriWarePluginSettings), &Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_OutputsLogFileSystem_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputsLogFileSystem_MetaData), NewProp_OutputsLogFileSystem_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PS4_FileAccessThreadAffinityMask = { "PS4_FileAccessThreadAffinityMask", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, PS4_FileAccessThreadAffinityMask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PS4_FileAccessThreadAffinityMask_MetaData), NewProp_PS4_FileAccessThreadAffinityMask_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PS4_DataDecompressionThreadAffinityMask = { "PS4_DataDecompressionThreadAffinityMask", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, PS4_DataDecompressionThreadAffinityMask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PS4_DataDecompressionThreadAffinityMask_MetaData), NewProp_PS4_DataDecompressionThreadAffinityMask_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PS4_MemoryFileSystemThreadAffinityMask = { "PS4_MemoryFileSystemThreadAffinityMask", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, PS4_MemoryFileSystemThreadAffinityMask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PS4_MemoryFileSystemThreadAffinityMask_MetaData), NewProp_PS4_MemoryFileSystemThreadAffinityMask_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PS4_FileAccessThreadPriority = { "PS4_FileAccessThreadPriority", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, PS4_FileAccessThreadPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PS4_FileAccessThreadPriority_MetaData), NewProp_PS4_FileAccessThreadPriority_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PS4_DataDecompressionThreadPriority = { "PS4_DataDecompressionThreadPriority", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, PS4_DataDecompressionThreadPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PS4_DataDecompressionThreadPriority_MetaData), NewProp_PS4_DataDecompressionThreadPriority_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PS4_MemoryFileSystemThreadPriority = { "PS4_MemoryFileSystemThreadPriority", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, PS4_MemoryFileSystemThreadPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PS4_MemoryFileSystemThreadPriority_MetaData), NewProp_PS4_MemoryFileSystemThreadPriority_MetaData) };
void Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AutomaticallyCreateCueAsset_SetBit(void* Obj)
{
	((UCriWarePluginSettings*)Obj)->AutomaticallyCreateCueAsset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AutomaticallyCreateCueAsset = { "AutomaticallyCreateCueAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCriWarePluginSettings), &Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AutomaticallyCreateCueAsset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutomaticallyCreateCueAsset_MetaData), NewProp_AutomaticallyCreateCueAsset_MetaData) };
void Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_UsesInGamePreview_SetBit(void* Obj)
{
	((UCriWarePluginSettings*)Obj)->UsesInGamePreview = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_UsesInGamePreview = { "UsesInGamePreview", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCriWarePluginSettings), &Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_UsesInGamePreview_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UsesInGamePreview_MetaData), NewProp_UsesInGamePreview_MetaData) };
void Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_OutputsLogAtom_SetBit(void* Obj)
{
	((UCriWarePluginSettings*)Obj)->OutputsLogAtom = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_OutputsLogAtom = { "OutputsLogAtom", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCriWarePluginSettings), &Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_OutputsLogAtom_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputsLogAtom_MetaData), NewProp_OutputsLogAtom_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AwbRootDirectory = { "AwbRootDirectory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, AwbRootDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AwbRootDirectory_MetaData), NewProp_AwbRootDirectory_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AwbRoot = { "AwbRoot", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, AwbRoot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AwbRoot_MetaData), NewProp_AwbRoot_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MonitorCommunicationBufferSize = { "MonitorCommunicationBufferSize", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, MonitorCommunicationBufferSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MonitorCommunicationBufferSize_MetaData), NewProp_MonitorCommunicationBufferSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MaxPitch = { "MaxPitch", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, MaxPitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPitch_MetaData), NewProp_MaxPitch_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AsrOutputChannels = { "AsrOutputChannels", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, AsrOutputChannels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AsrOutputChannels_MetaData), NewProp_AsrOutputChannels_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MaxVirtualVoices = { "MaxVirtualVoices", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, MaxVirtualVoices), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxVirtualVoices_MetaData), NewProp_MaxVirtualVoices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NumStandardMemoryVoices = { "NumStandardMemoryVoices", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, NumStandardMemoryVoices), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumStandardMemoryVoices_MetaData), NewProp_NumStandardMemoryVoices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_StandardMemoryVoiceNumChannels = { "StandardMemoryVoiceNumChannels", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, StandardMemoryVoiceNumChannels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandardMemoryVoiceNumChannels_MetaData), NewProp_StandardMemoryVoiceNumChannels_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_StandardMemoryVoiceSamplingRate = { "StandardMemoryVoiceSamplingRate", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, StandardMemoryVoiceSamplingRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandardMemoryVoiceSamplingRate_MetaData), NewProp_StandardMemoryVoiceSamplingRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NumStandardStreamingVoices = { "NumStandardStreamingVoices", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, NumStandardStreamingVoices), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumStandardStreamingVoices_MetaData), NewProp_NumStandardStreamingVoices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_StandardStreamingVoiceNumChannels = { "StandardStreamingVoiceNumChannels", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, StandardStreamingVoiceNumChannels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandardStreamingVoiceNumChannels_MetaData), NewProp_StandardStreamingVoiceNumChannels_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_StandardStreamingVoiceSamplingRate = { "StandardStreamingVoiceSamplingRate", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, StandardStreamingVoiceSamplingRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandardStreamingVoiceSamplingRate_MetaData), NewProp_StandardStreamingVoiceSamplingRate_MetaData) };
void Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PoolAtomComponent_SetBit(void* Obj)
{
	((UCriWarePluginSettings*)Obj)->PoolAtomComponent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PoolAtomComponent = { "PoolAtomComponent", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCriWarePluginSettings), &Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PoolAtomComponent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoolAtomComponent_MetaData), NewProp_PoolAtomComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AtomConfig = { "AtomConfig", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, AtomConfig), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AtomConfig_MetaData), NewProp_AtomConfig_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AcfFileName = { "AcfFileName", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, AcfFileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcfFileName_MetaData), NewProp_AcfFileName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AtomConfigDataTable = { "AtomConfigDataTable", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, AtomConfigDataTable), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AtomConfigDataTable_MetaData), NewProp_AtomConfigDataTable_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AtomOutputPortDataTable = { "AtomOutputPortDataTable", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, AtomOutputPortDataTable), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AtomOutputPortDataTable_MetaData), NewProp_AtomOutputPortDataTable_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_DistanceFactor = { "DistanceFactor", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, DistanceFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceFactor_MetaData), NewProp_DistanceFactor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_SoundRendererTypeUI_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_SoundRendererTypeUI = { "SoundRendererTypeUI", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, SoundRendererTypeUI), Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundRendererTypeUI_MetaData), NewProp_SoundRendererTypeUI_MetaData) }; // 3809552003
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_SoundRendererType = { "SoundRendererType", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, SoundRendererType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundRendererType_MetaData), NewProp_SoundRendererType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AsrRackConfigUI_Inner = { "AsrRackConfigUI", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAtomAsrRackConfigUI, METADATA_PARAMS(0, nullptr) }; // 1111570832
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AsrRackConfigUI = { "AsrRackConfigUI", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, AsrRackConfigUI), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AsrRackConfigUI_MetaData), NewProp_AsrRackConfigUI_MetaData) }; // 1111570832
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AsrRackConfig_Inner = { "AsrRackConfig", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAtomAsrRackConfig, METADATA_PARAMS(0, nullptr) }; // 509267893
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AsrRackConfig = { "AsrRackConfig", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, AsrRackConfig), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AsrRackConfig_MetaData), NewProp_AsrRackConfig_MetaData) }; // 509267893
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_Hardware1 = { "Hardware1", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, Hardware1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hardware1_MetaData), NewProp_Hardware1_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_Hardware2 = { "Hardware2", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, Hardware2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hardware2_MetaData), NewProp_Hardware2_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_Hardware3 = { "Hardware3", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, Hardware3), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hardware3_MetaData), NewProp_Hardware3_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_Hardware4 = { "Hardware4", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, Hardware4), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hardware4_MetaData), NewProp_Hardware4_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_EconomicTickMarginDistance = { "EconomicTickMarginDistance", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, EconomicTickMarginDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EconomicTickMarginDistance_MetaData), NewProp_EconomicTickMarginDistance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_EconomicTickFrequency = { "EconomicTickFrequency", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, EconomicTickFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EconomicTickFrequency_MetaData), NewProp_EconomicTickFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_CullingMarginDistance = { "CullingMarginDistance", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, CullingMarginDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CullingMarginDistance_MetaData), NewProp_CullingMarginDistance_MetaData) };
void Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_EnableDirectDbasConfig_SetBit(void* Obj)
{
	((UCriWarePluginSettings*)Obj)->EnableDirectDbasConfig = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_EnableDirectDbasConfig = { "EnableDirectDbasConfig", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCriWarePluginSettings), &Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_EnableDirectDbasConfig_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableDirectDbasConfig_MetaData), NewProp_EnableDirectDbasConfig_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_DbasIdentifier = { "DbasIdentifier", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, DbasIdentifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DbasIdentifier_MetaData), NewProp_DbasIdentifier_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_DbasMaxStreams = { "DbasMaxStreams", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, DbasMaxStreams), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DbasMaxStreams_MetaData), NewProp_DbasMaxStreams_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_DbasMaxBps = { "DbasMaxBps", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, DbasMaxBps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DbasMaxBps_MetaData), NewProp_DbasMaxBps_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_DbasMaxManaStreams = { "DbasMaxManaStreams", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, DbasMaxManaStreams), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DbasMaxManaStreams_MetaData), NewProp_DbasMaxManaStreams_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_DbasMaxManaBps = { "DbasMaxManaBps", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, DbasMaxManaBps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DbasMaxManaBps_MetaData), NewProp_DbasMaxManaBps_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_DbasNumSecurementBuffers = { "DbasNumSecurementBuffers", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, DbasNumSecurementBuffers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DbasNumSecurementBuffers_MetaData), NewProp_DbasNumSecurementBuffers_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_HcaMxVoiceSamplingRate = { "HcaMxVoiceSamplingRate", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, HcaMxVoiceSamplingRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HcaMxVoiceSamplingRate_MetaData), NewProp_HcaMxVoiceSamplingRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NumHcaMxMemoryVoices = { "NumHcaMxMemoryVoices", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, NumHcaMxMemoryVoices), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumHcaMxMemoryVoices_MetaData), NewProp_NumHcaMxMemoryVoices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_HcaMxMemoryVoiceNumChannels = { "HcaMxMemoryVoiceNumChannels", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, HcaMxMemoryVoiceNumChannels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HcaMxMemoryVoiceNumChannels_MetaData), NewProp_HcaMxMemoryVoiceNumChannels_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NumHcaMxStreamingVoices = { "NumHcaMxStreamingVoices", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, NumHcaMxStreamingVoices), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumHcaMxStreamingVoices_MetaData), NewProp_NumHcaMxStreamingVoices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_HcaMxStreamingVoiceNumChannels = { "HcaMxStreamingVoiceNumChannels", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, HcaMxStreamingVoiceNumChannels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HcaMxStreamingVoiceNumChannels_MetaData), NewProp_HcaMxStreamingVoiceNumChannels_MetaData) };
void Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_WASAPI_IsExclusive_SetBit(void* Obj)
{
	((UCriWarePluginSettings*)Obj)->WASAPI_IsExclusive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_WASAPI_IsExclusive = { "WASAPI_IsExclusive", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCriWarePluginSettings), &Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_WASAPI_IsExclusive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WASAPI_IsExclusive_MetaData), NewProp_WASAPI_IsExclusive_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_WASAPI_BitsPerSample = { "WASAPI_BitsPerSample", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, WASAPI_BitsPerSample), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WASAPI_BitsPerSample_MetaData), NewProp_WASAPI_BitsPerSample_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_WASAPI_SamplingRate = { "WASAPI_SamplingRate", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, WASAPI_SamplingRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WASAPI_SamplingRate_MetaData), NewProp_WASAPI_SamplingRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_WASAPI_NumChannels = { "WASAPI_NumChannels", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, WASAPI_NumChannels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WASAPI_NumChannels_MetaData), NewProp_WASAPI_NumChannels_MetaData) };
void Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_UseUnrealSoundRenderer_SetBit(void* Obj)
{
	((UCriWarePluginSettings*)Obj)->UseUnrealSoundRenderer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_UseUnrealSoundRenderer = { "UseUnrealSoundRenderer", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCriWarePluginSettings), &Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_UseUnrealSoundRenderer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseUnrealSoundRenderer_MetaData), NewProp_UseUnrealSoundRenderer_MetaData) };
void Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_UseSonicSYNC_SetBit(void* Obj)
{
	((UCriWarePluginSettings*)Obj)->UseSonicSYNC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_UseSonicSYNC = { "UseSonicSYNC", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCriWarePluginSettings), &Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_UseSonicSYNC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseSonicSYNC_MetaData), NewProp_UseSonicSYNC_MetaData) };
void Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_EnableDualSenseOnWindows_SetBit(void* Obj)
{
	((UCriWarePluginSettings*)Obj)->EnableDualSenseOnWindows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_EnableDualSenseOnWindows = { "EnableDualSenseOnWindows", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCriWarePluginSettings), &Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_EnableDualSenseOnWindows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableDualSenseOnWindows_MetaData), NewProp_EnableDualSenseOnWindows_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PS4_ServerThreadAffinityMask = { "PS4_ServerThreadAffinityMask", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, PS4_ServerThreadAffinityMask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PS4_ServerThreadAffinityMask_MetaData), NewProp_PS4_ServerThreadAffinityMask_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PS4_OutputThreadAffinityMask = { "PS4_OutputThreadAffinityMask", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, PS4_OutputThreadAffinityMask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PS4_OutputThreadAffinityMask_MetaData), NewProp_PS4_OutputThreadAffinityMask_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PS4_ServerThreadPriority = { "PS4_ServerThreadPriority", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, PS4_ServerThreadPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PS4_ServerThreadPriority_MetaData), NewProp_PS4_ServerThreadPriority_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PS4_OutputThreadPriority = { "PS4_OutputThreadPriority", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, PS4_OutputThreadPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PS4_OutputThreadPriority_MetaData), NewProp_PS4_OutputThreadPriority_MetaData) };
void Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PS4_UseAudio3d_SetBit(void* Obj)
{
	((UCriWarePluginSettings*)Obj)->PS4_UseAudio3d = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PS4_UseAudio3d = { "PS4_UseAudio3d", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCriWarePluginSettings), &Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PS4_UseAudio3d_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PS4_UseAudio3d_MetaData), NewProp_PS4_UseAudio3d_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PS4_NumberOfAudio3dMemoryVoices = { "PS4_NumberOfAudio3dMemoryVoices", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, PS4_NumberOfAudio3dMemoryVoices), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PS4_NumberOfAudio3dMemoryVoices_MetaData), NewProp_PS4_NumberOfAudio3dMemoryVoices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PS4_SamplingRateOfAudio3dMemoryVoices = { "PS4_SamplingRateOfAudio3dMemoryVoices", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, PS4_SamplingRateOfAudio3dMemoryVoices), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PS4_SamplingRateOfAudio3dMemoryVoices_MetaData), NewProp_PS4_SamplingRateOfAudio3dMemoryVoices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PS4_NumberOfAudio3dStreamingVoices = { "PS4_NumberOfAudio3dStreamingVoices", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, PS4_NumberOfAudio3dStreamingVoices), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PS4_NumberOfAudio3dStreamingVoices_MetaData), NewProp_PS4_NumberOfAudio3dStreamingVoices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PS4_SamplingRateOfAudio3dStreamingVoices = { "PS4_SamplingRateOfAudio3dStreamingVoices", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, PS4_SamplingRateOfAudio3dStreamingVoices), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PS4_SamplingRateOfAudio3dStreamingVoices_MetaData), NewProp_PS4_SamplingRateOfAudio3dStreamingVoices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PS5_MaxChannelPorts = { "PS5_MaxChannelPorts", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, PS5_MaxChannelPorts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PS5_MaxChannelPorts_MetaData), NewProp_PS5_MaxChannelPorts_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PS5_MaxObjectPorts = { "PS5_MaxObjectPorts", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, PS5_MaxObjectPorts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PS5_MaxObjectPorts_MetaData), NewProp_PS5_MaxObjectPorts_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_Switch_NumOpusMemoryVoices = { "Switch_NumOpusMemoryVoices", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, Switch_NumOpusMemoryVoices), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Switch_NumOpusMemoryVoices_MetaData), NewProp_Switch_NumOpusMemoryVoices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_Switch_OpusMemoryVoiceNumChannels = { "Switch_OpusMemoryVoiceNumChannels", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, Switch_OpusMemoryVoiceNumChannels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Switch_OpusMemoryVoiceNumChannels_MetaData), NewProp_Switch_OpusMemoryVoiceNumChannels_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_Switch_OpusMemoryVoiceSamplingRate = { "Switch_OpusMemoryVoiceSamplingRate", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, Switch_OpusMemoryVoiceSamplingRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Switch_OpusMemoryVoiceSamplingRate_MetaData), NewProp_Switch_OpusMemoryVoiceSamplingRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_Switch_NumOpusStreamingVoices = { "Switch_NumOpusStreamingVoices", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, Switch_NumOpusStreamingVoices), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Switch_NumOpusStreamingVoices_MetaData), NewProp_Switch_NumOpusStreamingVoices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_Switch_OpusStreamingVoiceNumChannels = { "Switch_OpusStreamingVoiceNumChannels", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, Switch_OpusStreamingVoiceNumChannels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Switch_OpusStreamingVoiceNumChannels_MetaData), NewProp_Switch_OpusStreamingVoiceNumChannels_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_Switch_OpusStreamingVoiceSamplingRate = { "Switch_OpusStreamingVoiceSamplingRate", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, Switch_OpusStreamingVoiceSamplingRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Switch_OpusStreamingVoiceSamplingRate_MetaData), NewProp_Switch_OpusStreamingVoiceSamplingRate_MetaData) };
void Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_InitializeMana_SetBit(void* Obj)
{
	((UCriWarePluginSettings*)Obj)->InitializeMana = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_InitializeMana = { "InitializeMana", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCriWarePluginSettings), &Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_InitializeMana_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitializeMana_MetaData), NewProp_InitializeMana_MetaData) };
void Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_EnableDecodeSkip_SetBit(void* Obj)
{
	((UCriWarePluginSettings*)Obj)->EnableDecodeSkip = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_EnableDecodeSkip = { "EnableDecodeSkip", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCriWarePluginSettings), &Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_EnableDecodeSkip_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableDecodeSkip_MetaData), NewProp_EnableDecodeSkip_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MaxDecoderHandles = { "MaxDecoderHandles", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, MaxDecoderHandles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDecoderHandles_MetaData), NewProp_MaxDecoderHandles_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MaxManaBPS = { "MaxManaBPS", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, MaxManaBPS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxManaBPS_MetaData), NewProp_MaxManaBPS_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MaxManaStreams = { "MaxManaStreams", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, MaxManaStreams), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxManaStreams_MetaData), NewProp_MaxManaStreams_MetaData) };
void Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_UseH264Decoder_SetBit(void* Obj)
{
	((UCriWarePluginSettings*)Obj)->UseH264Decoder = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_UseH264Decoder = { "UseH264Decoder", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCriWarePluginSettings), &Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_UseH264Decoder_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseH264Decoder_MetaData), NewProp_UseH264Decoder_MetaData) };
void Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_UseDecoderOutputBuffers_SetBit(void* Obj)
{
	((UCriWarePluginSettings*)Obj)->UseDecoderOutputBuffers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_UseDecoderOutputBuffers = { "UseDecoderOutputBuffers", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCriWarePluginSettings), &Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_UseDecoderOutputBuffers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseDecoderOutputBuffers_MetaData), NewProp_UseDecoderOutputBuffers_MetaData) };
void Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_ForceSoftwareDecodingOnXboxOne_SetBit(void* Obj)
{
	((UCriWarePluginSettings*)Obj)->ForceSoftwareDecodingOnXboxOne = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_ForceSoftwareDecodingOnXboxOne = { "ForceSoftwareDecodingOnXboxOne", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCriWarePluginSettings), &Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_ForceSoftwareDecodingOnXboxOne_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceSoftwareDecodingOnXboxOne_MetaData), NewProp_ForceSoftwareDecodingOnXboxOne_MetaData) };
void Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_ForceSoftwareDecodingOnXboxSeries_SetBit(void* Obj)
{
	((UCriWarePluginSettings*)Obj)->ForceSoftwareDecodingOnXboxSeries = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_ForceSoftwareDecodingOnXboxSeries = { "ForceSoftwareDecodingOnXboxSeries", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCriWarePluginSettings), &Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_ForceSoftwareDecodingOnXboxSeries_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceSoftwareDecodingOnXboxSeries_MetaData), NewProp_ForceSoftwareDecodingOnXboxSeries_MetaData) };
void Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_ForceDisableManaStreamerManager_SetBit(void* Obj)
{
	((UCriWarePluginSettings*)Obj)->ForceDisableManaStreamerManager = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_ForceDisableManaStreamerManager = { "ForceDisableManaStreamerManager", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCriWarePluginSettings), &Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_ForceDisableManaStreamerManager_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceDisableManaStreamerManager_MetaData), NewProp_ForceDisableManaStreamerManager_MetaData) };
void Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_InitializeAdxLipSync_SetBit(void* Obj)
{
	((UCriWarePluginSettings*)Obj)->InitializeAdxLipSync = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_InitializeAdxLipSync = { "InitializeAdxLipSync", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCriWarePluginSettings), &Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_InitializeAdxLipSync_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitializeAdxLipSync_MetaData), NewProp_InitializeAdxLipSync_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MaxNumAnalyzerHandles = { "MaxNumAnalyzerHandles", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, MaxNumAnalyzerHandles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNumAnalyzerHandles_MetaData), NewProp_MaxNumAnalyzerHandles_MetaData) };
void Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_bUseManaStartupMovies_SetBit(void* Obj)
{
	((UCriWarePluginSettings*)Obj)->bUseManaStartupMovies = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_bUseManaStartupMovies = { "bUseManaStartupMovies", nullptr, (EPropertyFlags)0x0010040000044005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCriWarePluginSettings), &Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_bUseManaStartupMovies_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseManaStartupMovies_MetaData), NewProp_bUseManaStartupMovies_MetaData) };
void Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_bWaitForMoviesToComplete_SetBit(void* Obj)
{
	((UCriWarePluginSettings*)Obj)->bWaitForMoviesToComplete = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_bWaitForMoviesToComplete = { "bWaitForMoviesToComplete", nullptr, (EPropertyFlags)0x0010040000044005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCriWarePluginSettings), &Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_bWaitForMoviesToComplete_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWaitForMoviesToComplete_MetaData), NewProp_bWaitForMoviesToComplete_MetaData) };
void Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_bMoviesAreSkippable_SetBit(void* Obj)
{
	((UCriWarePluginSettings*)Obj)->bMoviesAreSkippable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_bMoviesAreSkippable = { "bMoviesAreSkippable", nullptr, (EPropertyFlags)0x0010040000044005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCriWarePluginSettings), &Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_bMoviesAreSkippable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMoviesAreSkippable_MetaData), NewProp_bMoviesAreSkippable_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_StartupMovies_Inner = { "StartupMovies", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_StartupMovies = { "StartupMovies", nullptr, (EPropertyFlags)0x0010040000044005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCriWarePluginSettings, StartupMovies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartupMovies_MetaData), NewProp_StartupMovies_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCriWarePluginSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_bNoExistCriWareIni,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_bEditableCriWareAdxLipSyncSetting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NonAssetContentDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_ContentDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NumBinders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MaxBinds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NumLoaders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MaxFiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MaxPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_OutputsLogFileSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PS4_FileAccessThreadAffinityMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PS4_DataDecompressionThreadAffinityMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PS4_MemoryFileSystemThreadAffinityMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PS4_FileAccessThreadPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PS4_DataDecompressionThreadPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PS4_MemoryFileSystemThreadPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AutomaticallyCreateCueAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_UsesInGamePreview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_OutputsLogAtom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AwbRootDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AwbRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MonitorCommunicationBufferSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MaxPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AsrOutputChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MaxVirtualVoices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NumStandardMemoryVoices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_StandardMemoryVoiceNumChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_StandardMemoryVoiceSamplingRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NumStandardStreamingVoices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_StandardStreamingVoiceNumChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_StandardStreamingVoiceSamplingRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PoolAtomComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AtomConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AcfFileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AtomConfigDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AtomOutputPortDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_DistanceFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_SoundRendererTypeUI_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_SoundRendererTypeUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_SoundRendererType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AsrRackConfigUI_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AsrRackConfigUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AsrRackConfig_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AsrRackConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_Hardware1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_Hardware2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_Hardware3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_Hardware4,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_EconomicTickMarginDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_EconomicTickFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_CullingMarginDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_EnableDirectDbasConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_DbasIdentifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_DbasMaxStreams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_DbasMaxBps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_DbasMaxManaStreams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_DbasMaxManaBps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_DbasNumSecurementBuffers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_HcaMxVoiceSamplingRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NumHcaMxMemoryVoices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_HcaMxMemoryVoiceNumChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NumHcaMxStreamingVoices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_HcaMxStreamingVoiceNumChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_WASAPI_IsExclusive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_WASAPI_BitsPerSample,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_WASAPI_SamplingRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_WASAPI_NumChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_UseUnrealSoundRenderer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_UseSonicSYNC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_EnableDualSenseOnWindows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PS4_ServerThreadAffinityMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PS4_OutputThreadAffinityMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PS4_ServerThreadPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PS4_OutputThreadPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PS4_UseAudio3d,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PS4_NumberOfAudio3dMemoryVoices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PS4_SamplingRateOfAudio3dMemoryVoices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PS4_NumberOfAudio3dStreamingVoices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PS4_SamplingRateOfAudio3dStreamingVoices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PS5_MaxChannelPorts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PS5_MaxObjectPorts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_Switch_NumOpusMemoryVoices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_Switch_OpusMemoryVoiceNumChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_Switch_OpusMemoryVoiceSamplingRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_Switch_NumOpusStreamingVoices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_Switch_OpusStreamingVoiceNumChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_Switch_OpusStreamingVoiceSamplingRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_InitializeMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_EnableDecodeSkip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MaxDecoderHandles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MaxManaBPS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MaxManaStreams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_UseH264Decoder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_UseDecoderOutputBuffers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_ForceSoftwareDecodingOnXboxOne,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_ForceSoftwareDecodingOnXboxSeries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_ForceDisableManaStreamerManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_InitializeAdxLipSync,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MaxNumAnalyzerHandles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_bUseManaStartupMovies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_bWaitForMoviesToComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_bMoviesAreSkippable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_StartupMovies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_StartupMovies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCriWarePluginSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCriWarePluginSettings_Statics::ClassParams = {
	&UCriWarePluginSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCriWarePluginSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UCriWarePluginSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCriWarePluginSettings()
{
	if (!Z_Registration_Info_UClass_UCriWarePluginSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCriWarePluginSettings.OuterSingleton, Z_Construct_UClass_UCriWarePluginSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCriWarePluginSettings.OuterSingleton;
}
template<> CRIWARERUNTIME_API UClass* StaticClass<UCriWarePluginSettings>()
{
	return UCriWarePluginSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCriWarePluginSettings);
UCriWarePluginSettings::~UCriWarePluginSettings() {}
// End Class UCriWarePluginSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWarePluginSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCriWarePluginSettings, UCriWarePluginSettings::StaticClass, TEXT("UCriWarePluginSettings"), &Z_Registration_Info_UClass_UCriWarePluginSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCriWarePluginSettings), 1274531864U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWarePluginSettings_h_2400680695(TEXT("/Script/CriWareRuntime"),
	Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWarePluginSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWarePluginSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
