#include "MachineCustomTabButton.h"

UMachineCustomTabButton::UMachineCustomTabButton() : UUserWidget(FObjectInitializer::Get()) {
    this->PAT_TabPict = NULL;
    this->TXT_CategoryName = NULL;
    this->DSP_NewIconWave = NULL;
    this->IconIndex = 0;
}

void UMachineCustomTabButton::SetText(FText InText) {
}

void UMachineCustomTabButton::SetNewIconVisible(bool InVisible) {
}

void UMachineCustomTabButton::SetIconIndex(int32 InIconIndex) {
}



EMachineCustomizeTabID UMachineCustomTabButton::GetTabID() const {
    return EMachineCustomizeTabID::PartsSelect;
}


