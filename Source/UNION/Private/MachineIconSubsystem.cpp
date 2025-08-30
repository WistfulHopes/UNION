#include "MachineIconSubsystem.h"

UMachineIconSubsystem::UMachineIconSubsystem() {
    this->CaptureLevelScriptActor = NULL;
    this->SideCenterPartsMesh = NULL;
}

void UMachineIconSubsystem::StopCapture() {
}

void UMachineIconSubsystem::StartCapture() {
}

void UMachineIconSubsystem::SetSizeY(int32 InSizeY) {
}

void UMachineIconSubsystem::SetSizeX(int32 InSizeX) {
}

void UMachineIconSubsystem::SetSaveToLocalStorage(bool bInSave) {
}

void UMachineIconSubsystem::SetMachineIconCaptureNeededIds(EMachineId InMachineID) {
}

void UMachineIconSubsystem::SetCaptureDataTable(const UDataTable* InCaptureDataTable) {
}

void UMachineIconSubsystem::SetAutoCaptureEnabled(bool bInIsEnabled) {
}

void UMachineIconSubsystem::OnSideCenterPartsLoaded() {
}

void UMachineIconSubsystem::OnPrimaryAssetLoaded() {
}

void UMachineIconSubsystem::LocalStorageSubsystem_OnComplete(ELocalStorageStatus InStatus) {
}

void UMachineIconSubsystem::GetTextureMap(TMap<EMachineId, UTexture2D*>& OutTextureMap) const {
}

void UMachineIconSubsystem::CaptureLevelScriptActor_OnCaptureCompleted(UTextureRenderTarget2D* InRenderTextureColor, UTextureRenderTarget2D* InRenderTextureAlpha) {
}

void UMachineIconSubsystem::CaptureFromNeededIds() {
}

void UMachineIconSubsystem::Capture(EMachineId InMachineID) {
}

void UMachineIconSubsystem::CallbackLevelLoaded() {
}


