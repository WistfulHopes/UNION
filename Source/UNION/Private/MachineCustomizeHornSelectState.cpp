#include "MachineCustomizeHornSelectState.h"

UMachineCustomizeHornSelectState::UMachineCustomizeHornSelectState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DialogButtonTextYes = FText::FromString(TEXT("Yes"));
    this->DialogButtonTextNo = FText::FromString(TEXT("No"));
    this->DialogButtonTextOK = FText::FromString(TEXT("OK"));
}




UMachineCustomizeCustomList* UMachineCustomizeHornSelectState::GetCustomList() const {
    return NULL;
}

void UMachineCustomizeHornSelectState::EventUnfocus(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void UMachineCustomizeHornSelectState::EventShowNewButton(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void UMachineCustomizeHornSelectState::EventFocus(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void UMachineCustomizeHornSelectState::EventDecision(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void UMachineCustomizeHornSelectState::EventCancel(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void UMachineCustomizeHornSelectState::DialogCallback(EDialogResult InResult) {
}



