// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/OnWavePlaybackPercentDelegate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnWavePlaybackPercentDelegate() {}

// Begin Cross Module References
CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

// Begin Delegate FOnWavePlaybackPercent
struct Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics
{
	struct _Script_CriWareRuntime_eventOnWavePlaybackPercent_Parms
	{
		const USoundAtomCue* PlayingAtomCue;
		int32 WaveId;
		float PlaybackPercent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnWavePlaybackPercentDelegate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayingAtomCue_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackPercent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayingAtomCue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WaveId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaybackPercent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::NewProp_PlayingAtomCue = { "PlayingAtomCue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CriWareRuntime_eventOnWavePlaybackPercent_Parms, PlayingAtomCue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayingAtomCue_MetaData), NewProp_PlayingAtomCue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::NewProp_WaveId = { "WaveId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CriWareRuntime_eventOnWavePlaybackPercent_Parms, WaveId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::NewProp_PlaybackPercent = { "PlaybackPercent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CriWareRuntime_eventOnWavePlaybackPercent_Parms, PlaybackPercent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaybackPercent_MetaData), NewProp_PlaybackPercent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::NewProp_PlayingAtomCue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::NewProp_WaveId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::NewProp_PlaybackPercent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime, nullptr, "OnWavePlaybackPercent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::_Script_CriWareRuntime_eventOnWavePlaybackPercent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::_Script_CriWareRuntime_eventOnWavePlaybackPercent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnWavePlaybackPercent_DelegateWrapper(const FMulticastScriptDelegate& OnWavePlaybackPercent, const USoundAtomCue* PlayingAtomCue, int32 WaveId, const float PlaybackPercent)
{
	struct _Script_CriWareRuntime_eventOnWavePlaybackPercent_Parms
	{
		const USoundAtomCue* PlayingAtomCue;
		int32 WaveId;
		float PlaybackPercent;
	};
	_Script_CriWareRuntime_eventOnWavePlaybackPercent_Parms Parms;
	Parms.PlayingAtomCue=PlayingAtomCue;
	Parms.WaveId=WaveId;
	Parms.PlaybackPercent=PlaybackPercent;
	OnWavePlaybackPercent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnWavePlaybackPercent
PRAGMA_ENABLE_DEPRECATION_WARNINGS
