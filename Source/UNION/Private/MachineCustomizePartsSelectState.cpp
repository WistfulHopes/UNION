#include "MachineCustomizePartsSelectState.h"

UMachineCustomizePartsSelectState::UMachineCustomizePartsSelectState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CustomizeUpdateDelay = 0.50f;
}



void UMachineCustomizePartsSelectState::PartsSelected(EMachinePartsType InPartsType, EMachineId InPartsId) {
}

void UMachineCustomizePartsSelectState::PartsFocused(EMachinePartsType InPartsType, EMachineId InPartsId) {
}

void UMachineCustomizePartsSelectState::PartsDialogShow() {
}

void UMachineCustomizePartsSelectState::PartsDialogHide(EDialogResult InResult) {
}






UMachinePartsSelectWindow* UMachineCustomizePartsSelectState::GetPartsSelectWindow() const {
    return NULL;
}


