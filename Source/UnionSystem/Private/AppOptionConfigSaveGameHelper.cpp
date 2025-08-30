#include "AppOptionConfigSaveGameHelper.h"

UAppOptionConfigSaveGameHelper::UAppOptionConfigSaveGameHelper() {
}

bool UAppOptionConfigSaveGameHelper::UpdateGraphicSettingsAtFirstTime() {
    return false;
}

void UAppOptionConfigSaveGameHelper::SetVoiceLangToSave(ELanguage NewLanguage) {
}

void UAppOptionConfigSaveGameHelper::SetTextLangToSave(ELanguage NewLanguage) {
}

void UAppOptionConfigSaveGameHelper::SetInverseAcceptAndCancel(int32 InPlayerIndex, bool InInverse) {
}

void UAppOptionConfigSaveGameHelper::SetForceFeedbackLevel(int32 PlayerIndex, EForceFeedbackLevel VibrationLevel) {
}

void UAppOptionConfigSaveGameHelper::SetControllerOperationType(int32 InPlayerIndex, EKeyConfigOperationType InOperationType) {
}

void UAppOptionConfigSaveGameHelper::SetControllerGyroAssistEnabled(int32 InPlayerIndex, bool InEnable) {
}

void UAppOptionConfigSaveGameHelper::SetAllPlayerForceFeedbackLevelFromSave() {
}

void UAppOptionConfigSaveGameHelper::ResetControllerSettingsForLocalMultiPlayer() {
}

bool UAppOptionConfigSaveGameHelper::IsRunningOnSteamDeck() {
    return false;
}

bool UAppOptionConfigSaveGameHelper::IsInverseFlyModeUpDown(int32 InPlayerIndex) {
    return false;
}

bool UAppOptionConfigSaveGameHelper::IsInverseAcceptAndCancel(int32 InPlayerIndex) {
    return false;
}

bool UAppOptionConfigSaveGameHelper::IsDiffUserAssistDataWithSaveData(const TArray<FUserAssistData>& InAssistData) {
    return false;
}

bool UAppOptionConfigSaveGameHelper::IsControllerOperationTypeCustom(int32 InPlayerIndex) {
    return false;
}

bool UAppOptionConfigSaveGameHelper::IsControllerGyroAssistEnabled(int32 InPlayerIndex) {
    return false;
}

void UAppOptionConfigSaveGameHelper::InitVoiceLangIfInvalid() {
}

void UAppOptionConfigSaveGameHelper::InitTextLangIfInvalid() {
}

ELanguage UAppOptionConfigSaveGameHelper::GetVoiceLangFromSave() {
    return ELanguage::Ja;
}

ELanguage UAppOptionConfigSaveGameHelper::GetTextLangFromSave() {
    return ELanguage::Ja;
}

EForceFeedbackLevel UAppOptionConfigSaveGameHelper::GetForceFeedbackLevel(int32 PlayerIndex) {
    return EForceFeedbackLevel::Off;
}

EKeyConfigOperationType UAppOptionConfigSaveGameHelper::GetControllerOperationType(int32 InPlayerIndex) {
    return EKeyConfigOperationType::TypeA;
}

ECaptionVisible UAppOptionConfigSaveGameHelper::GetCaptionVisibility() {
    return ECaptionVisible::Visible;
}

void UAppOptionConfigSaveGameHelper::CalcGetUserAssistData(TArray<FUserAssistData>& OutAssistData) {
}

void UAppOptionConfigSaveGameHelper::ApplyVSync(bool ApplyImmediately) {
}

void UAppOptionConfigSaveGameHelper::ApplyUseDisplay(bool ApplyImmediately) {
}

void UAppOptionConfigSaveGameHelper::ApplyShadowQuality() {
}

void UAppOptionConfigSaveGameHelper::ApplyScreenBrightness() {
}

void UAppOptionConfigSaveGameHelper::ApplyResolutionSize(bool ApplyImmediately) {
}

void UAppOptionConfigSaveGameHelper::ApplyRenderingScale() {
}

void UAppOptionConfigSaveGameHelper::ApplyReflectionQuality() {
}

void UAppOptionConfigSaveGameHelper::ApplyModelQuality() {
}

void UAppOptionConfigSaveGameHelper::ApplyGraphicsSettings() {
}

void UAppOptionConfigSaveGameHelper::ApplyGraphicQuality() {
}

void UAppOptionConfigSaveGameHelper::ApplyGraphicMode() {
}

void UAppOptionConfigSaveGameHelper::ApplyFullscreenMode(bool ApplyImmediately) {
}

void UAppOptionConfigSaveGameHelper::ApplyFrameRateLimit() {
}

void UAppOptionConfigSaveGameHelper::ApplyBlur() {
}

void UAppOptionConfigSaveGameHelper::ApplyAudioSettings() {
}

void UAppOptionConfigSaveGameHelper::ApplyAntiAliasMethod() {
}

void UAppOptionConfigSaveGameHelper::ApplyAmbientOcclusion() {
}

bool UAppOptionConfigSaveGameHelper::AllowCrossPlayOnlyAppSetting() {
    return false;
}

bool UAppOptionConfigSaveGameHelper::AllowCrossPlay() {
    return false;
}


