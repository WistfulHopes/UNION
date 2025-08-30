#include "MachineCustomizeAuraSelectState.h"

UMachineCustomizeAuraSelectState::UMachineCustomizeAuraSelectState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DialogButtonTextYes = FText::FromString(TEXT("Yes"));
    this->DialogButtonTextNo = FText::FromString(TEXT("No"));
    this->DialogButtonTextOK = FText::FromString(TEXT("OK"));
}



void UMachineCustomizeAuraSelectState::MatchingTimeOut() {
}

UMachineCustomizeCustomList* UMachineCustomizeAuraSelectState::GetCustomList() const {
    return NULL;
}

void UMachineCustomizeAuraSelectState::EventUnfocus(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void UMachineCustomizeAuraSelectState::EventShowNewButton(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void UMachineCustomizeAuraSelectState::EventFocus(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void UMachineCustomizeAuraSelectState::EventDecision(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void UMachineCustomizeAuraSelectState::EventCancel(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void UMachineCustomizeAuraSelectState::DialogCallback(EDialogResult InResult) {
}



