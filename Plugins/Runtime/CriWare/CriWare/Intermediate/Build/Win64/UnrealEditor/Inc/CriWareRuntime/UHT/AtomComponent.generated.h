// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AtomComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class AAtomAreaSoundVolume;
class AAtomAudioVolume;
class UAtom3dRegion;
class UAtomComponent;
class UAtomSoundObject;
class USoundAtomCue;
enum class EAtomAudioVolumeType : uint8;
enum class EAtomComponentStatus : uint8;
struct FAtomAppliedValueParam;
struct FAtomBeatSyncInfo;
struct FAtomSequenceInfo;
struct FSoundAttenuationSettings;
#ifdef CRIWARERUNTIME_AtomComponent_generated_h
#error "AtomComponent.generated.h already included, missing '#pragma once' in AtomComponent.h"
#endif
#define CRIWARERUNTIME_AtomComponent_generated_h

#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_33_DELEGATE \
static void FOnStatusChanged_DelegateWrapper(const FMulticastScriptDelegate& OnStatusChanged, EAtomComponentStatus Status, UAtomComponent* AtomComponent);


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_34_DELEGATE \
static void FOnAudioVolumeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAudioVolumeChanged, EAtomAudioVolumeType Type, AAtomAudioVolume* AtomAudioVolume, bool bIsCalledFromTick);


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_35_DELEGATE \
static void FOnAudioFinished_DelegateWrapper(const FMulticastScriptDelegate& OnAudioFinished);


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_36_DELEGATE \
static void FOnAtomSoundCueBlockIndexChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAtomSoundCueBlockIndexChanged, int32 BlockIndex);


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_37_DELEGATE \
static void FAtomSequenceCallbackDelegate_DelegateWrapper(const FMulticastScriptDelegate& AtomSequenceCallbackDelegate, UAtomComponent* AtomComponent, FAtomSequenceInfo const& SequenceInfo);


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_38_DELEGATE \
static void FAtomBeatSyncCallbackDelegate_DelegateWrapper(const FMulticastScriptDelegate& AtomBeatSyncCallbackDelegate, UAtomComponent* AtomComponent, FAtomBeatSyncInfo const& BeatSyncInfo);


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAdjustAttenuation); \
	DECLARE_FUNCTION(execAttachAreaSoundVolume); \
	DECLARE_FUNCTION(execBP_GetAttenuationSettingsToApply); \
	DECLARE_FUNCTION(execClearOutputPort); \
	DECLARE_FUNCTION(execClearPreferredOutputPort); \
	DECLARE_FUNCTION(execClearSelectorLabels); \
	DECLARE_FUNCTION(execDestroyComponentByID); \
	DECLARE_FUNCTION(execEnqueueSound); \
	DECLARE_FUNCTION(execFadeIn); \
	DECLARE_FUNCTION(execFadeOut); \
	DECLARE_FUNCTION(execGetAtomAppliedValueParam); \
	DECLARE_FUNCTION(execGetAtomComponentFromID); \
	DECLARE_FUNCTION(execGetAtomComponentID); \
	DECLARE_FUNCTION(execGetAudioVolumeValueMap); \
	DECLARE_FUNCTION(execGetCueName); \
	DECLARE_FUNCTION(execGetCullDistance); \
	DECLARE_FUNCTION(execGetCullDistanceMargin); \
	DECLARE_FUNCTION(execGetCurrentBelongingAudioVolume); \
	DECLARE_FUNCTION(execGetCurrentBlockIndex); \
	DECLARE_FUNCTION(execGetCurrentCullingBoundaryDistance); \
	DECLARE_FUNCTION(execGetCurrentCullingMarginDistance); \
	DECLARE_FUNCTION(execGetCurrentEconomicTickBoundaryDistance); \
	DECLARE_FUNCTION(execGetCurrentEconomicTickFrequency); \
	DECLARE_FUNCTION(execGetCurrentEconomicTickMarginDistance); \
	DECLARE_FUNCTION(execGetCurrentMaxAttenuationDistance); \
	DECLARE_FUNCTION(execGetDefaultAttenuationEnable); \
	DECLARE_FUNCTION(execGetEconomicTickDistance); \
	DECLARE_FUNCTION(execGetEconomicTickDistanceMargin); \
	DECLARE_FUNCTION(execGetEconomicTickFrequency); \
	DECLARE_FUNCTION(execGetMaxAttenuationDistance); \
	DECLARE_FUNCTION(execGetNumPlayedSamples); \
	DECLARE_FUNCTION(execGetNumQueuedSounds); \
	DECLARE_FUNCTION(execGetSequencePosition); \
	DECLARE_FUNCTION(execGetStatus); \
	DECLARE_FUNCTION(execGetTime); \
	DECLARE_FUNCTION(execGetVelocity); \
	DECLARE_FUNCTION(execGetVolume); \
	DECLARE_FUNCTION(execHasBeenEconomicTick); \
	DECLARE_FUNCTION(execIsLoop); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execIsReducingTickFrequency); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execRemoveOutputPort); \
	DECLARE_FUNCTION(execRemovePreferredOutputPort); \
	DECLARE_FUNCTION(execSetAisacByName); \
	DECLARE_FUNCTION(execSetAsrRackID); \
	DECLARE_FUNCTION(execSetAsrRackIdArray); \
	DECLARE_FUNCTION(execSetBusSendLevel); \
	DECLARE_FUNCTION(execSetBusSendLevelByName); \
	DECLARE_FUNCTION(execSetBusSendLevelOffset); \
	DECLARE_FUNCTION(execSetBusSendLevelOffsetByName); \
	DECLARE_FUNCTION(execSetDefaultAttenuationEnable); \
	DECLARE_FUNCTION(execSetNextBlockIndex); \
	DECLARE_FUNCTION(execSetOutputPort); \
	DECLARE_FUNCTION(execSetPitch); \
	DECLARE_FUNCTION(execSetPitchMultiplier); \
	DECLARE_FUNCTION(execSetPreferredOutputPort); \
	DECLARE_FUNCTION(execSetRegion); \
	DECLARE_FUNCTION(execSetSelectorLabel); \
	DECLARE_FUNCTION(execSetSound); \
	DECLARE_FUNCTION(execSetSoundObject); \
	DECLARE_FUNCTION(execSetVolume); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execStopWithoutReleaseTime);


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomComponent(); \
	friend struct Z_Construct_UClass_UAtomComponent_Statics; \
public: \
	DECLARE_CLASS(UAtomComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAtomComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UAtomComponent*>(this); }


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAtomComponent(UAtomComponent&&); \
	UAtomComponent(const UAtomComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomComponent) \
	NO_API virtual ~UAtomComponent();


#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_29_PROLOG
#define FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_31_INCLASS_NO_PURE_DECLS \
	FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class UAtomComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNION_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
