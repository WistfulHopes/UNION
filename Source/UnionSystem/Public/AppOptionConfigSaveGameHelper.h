#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ECaptionVisible.h"
#include "EForceFeedbackLevel.h"
#include "EKeyConfigOperationType.h"
#include "ELanguage.h"
#include "UserAssistData.h"
#include "AppOptionConfigSaveGameHelper.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UAppOptionConfigSaveGameHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAppOptionConfigSaveGameHelper();

    UFUNCTION(BlueprintCallable)
    static bool UpdateGraphicSettingsAtFirstTime();
    
    UFUNCTION(BlueprintCallable)
    static void SetVoiceLangToSave(ELanguage NewLanguage);
    
    UFUNCTION(BlueprintCallable)
    static void SetTextLangToSave(ELanguage NewLanguage);
    
    UFUNCTION(BlueprintCallable)
    static void SetInverseAcceptAndCancel(int32 InPlayerIndex, bool InInverse);
    
    UFUNCTION(BlueprintCallable)
    static void SetForceFeedbackLevel(int32 PlayerIndex, EForceFeedbackLevel VibrationLevel);
    
    UFUNCTION(BlueprintCallable)
    static void SetControllerOperationType(int32 InPlayerIndex, EKeyConfigOperationType InOperationType);
    
    UFUNCTION(BlueprintCallable)
    static void SetControllerGyroAssistEnabled(int32 InPlayerIndex, bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetAllPlayerForceFeedbackLevelFromSave();
    
    UFUNCTION(BlueprintCallable)
    static void ResetControllerSettingsForLocalMultiPlayer();
    
    UFUNCTION(BlueprintCallable)
    static bool IsRunningOnSteamDeck();
    
    UFUNCTION(BlueprintCallable)
    static bool IsInverseFlyModeUpDown(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInverseAcceptAndCancel(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDiffUserAssistDataWithSaveData(const TArray<FUserAssistData>& InAssistData);
    
    UFUNCTION(BlueprintCallable)
    static bool IsControllerOperationTypeCustom(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool IsControllerGyroAssistEnabled(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    static void InitVoiceLangIfInvalid();
    
    UFUNCTION(BlueprintCallable)
    static void InitTextLangIfInvalid();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELanguage GetVoiceLangFromSave();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELanguage GetTextLangFromSave();
    
    UFUNCTION(BlueprintCallable)
    static EForceFeedbackLevel GetForceFeedbackLevel(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    static EKeyConfigOperationType GetControllerOperationType(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ECaptionVisible GetCaptionVisibility();
    
    UFUNCTION(BlueprintCallable)
    static void CalcGetUserAssistData(TArray<FUserAssistData>& OutAssistData);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyVSync(bool ApplyImmediately);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyUseDisplay(bool ApplyImmediately);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyShadowQuality();
    
    UFUNCTION(BlueprintCallable)
    static void ApplyScreenBrightness();
    
    UFUNCTION(BlueprintCallable)
    static void ApplyResolutionSize(bool ApplyImmediately);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyRenderingScale();
    
    UFUNCTION(BlueprintCallable)
    static void ApplyReflectionQuality();
    
    UFUNCTION(BlueprintCallable)
    static void ApplyModelQuality();
    
    UFUNCTION(BlueprintCallable)
    static void ApplyGraphicsSettings();
    
    UFUNCTION(BlueprintCallable)
    static void ApplyGraphicQuality();
    
    UFUNCTION(BlueprintCallable)
    static void ApplyGraphicMode();
    
    UFUNCTION(BlueprintCallable)
    static void ApplyFullscreenMode(bool ApplyImmediately);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyFrameRateLimit();
    
    UFUNCTION(BlueprintCallable)
    static void ApplyBlur();
    
    UFUNCTION(BlueprintCallable)
    static void ApplyAudioSettings();
    
    UFUNCTION(BlueprintCallable)
    static void ApplyAntiAliasMethod();
    
    UFUNCTION(BlueprintCallable)
    static void ApplyAmbientOcclusion();
    
    UFUNCTION(BlueprintCallable)
    static bool AllowCrossPlayOnlyAppSetting();
    
    UFUNCTION(BlueprintCallable)
    static bool AllowCrossPlay();
    
};

