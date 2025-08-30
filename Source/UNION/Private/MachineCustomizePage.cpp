#include "MachineCustomizePage.h"

UMachineCustomizePage::UMachineCustomizePage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}



void UMachineCustomizePage::Unbind() {
}

void UMachineCustomizePage::TabChange(EMachineCustomizeTabID InTabID) {
}

void UMachineCustomizePage::SetIsDirty(bool bInIsDirty) {
}

void UMachineCustomizePage::MoveCameraID(EGarageCameraMovementTransformDataId InId) {
}

void UMachineCustomizePage::MoveCameraCarStatusType(ECarStatusType InCarStatusType, EMachinePartsType InPartsType) {
}

bool UMachineCustomizePage::IsDirty() const {
    return false;
}

UMachineCustomTop* UMachineCustomizePage::GetTop() const {
    return NULL;
}

UMachineCustomTab* UMachineCustomizePage::GetTab() const {
    return NULL;
}


void UMachineCustomizePage::ChangeState(EMachineCustomizeSequenceState InNext) {
}

void UMachineCustomizePage::Cancel() {
}



void UMachineCustomizePage::Bind() {
}


