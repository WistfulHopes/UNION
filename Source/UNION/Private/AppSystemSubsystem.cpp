#include "AppSystemSubsystem.h"

UAppSystemSubsystem::UAppSystemSubsystem() {
    this->GarbageCollectionInvoker = NULL;
    this->ResidentAssetLoader = NULL;
    this->SaveErrorPopup = NULL;
    this->LastFocusedWidget = NULL;
}

void UAppSystemSubsystem::SetBootSequenceModeShipping(const bool Mode) {
}

void UAppSystemSubsystem::OnSaveErrorPopupRemovedFunc(UUnionUIPopupWindowBase* RemovedPopup) {
}

void UAppSystemSubsystem::OnSaveErrorPopupGenerateFunc() {
}

void UAppSystemSubsystem::OnSaveErrorPopupDecisionFunc(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex) {
}

bool UAppSystemSubsystem::IsCreatedVehicles() const {
    return false;
}

UResidentAssetLoader* UAppSystemSubsystem::GetResidentAssetLoader() const {
    return NULL;
}

FRaceLifeTimeData UAppSystemSubsystem::GetRaceLifeTimeData() {
    return FRaceLifeTimeData{};
}

ULapTimer* UAppSystemSubsystem::GetOrCreateLapTimer(const FString& Key) {
    return NULL;
}

bool UAppSystemSubsystem::GetBootSequenceModeShipping() {
    return false;
}


