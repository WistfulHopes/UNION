#include "MachinePartsScrollBox.h"

UMachinePartsScrollBox::UMachinePartsScrollBox() : UUserWidget(FObjectInitializer::Get()) {
    this->ItemClass = NULL;
    this->InnerScrollBox = NULL;
    this->WBP_CMN_ScrollSnapPoint = NULL;
    this->ButtonsPanel = NULL;
}



void UMachinePartsScrollBox::ButtonsPanel_OnDirection(UUnionUIButtonBase* Button, int32 ButtonIndex, EUnionUIControlDir Dir) {
}

void UMachinePartsScrollBox::Button_OnFocus(UUnionUIButtonBase* Button) {
}

void UMachinePartsScrollBox::Button_OnDecision(UUnionUIButtonBase* Button) {
}

void UMachinePartsScrollBox::Button_OnCancel(UUnionUIButtonBase* Button) {
}


