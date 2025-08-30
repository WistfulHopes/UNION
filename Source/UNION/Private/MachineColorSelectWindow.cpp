#include "MachineColorSelectWindow.h"

UMachineColorSelectWindow::UMachineColorSelectWindow() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->WBP_MachineCustom_Sub_PresetPaint = NULL;
    this->WBP_MachineSelect_Sub_Btn_OK = NULL;
    this->WBP_MachineSelect_Sub_Ready = NULL;
    this->DecisionSoundCue = NULL;
    this->CancelSoundCue = NULL;
    this->PlayerIndex = 0;
    this->bIsReady = false;
}



void UMachineColorSelectWindow::GetUnready() {
}

void UMachineColorSelectWindow::GetReady() {
}

void UMachineColorSelectWindow::DecisionButton_OnItemFocus(UUnionUIButtonBase* Button) {
}

void UMachineColorSelectWindow::DecisionButton_OnDecision(UUnionUIButtonBase* Button) {
}

void UMachineColorSelectWindow::DecisionButton_OnCancel(UUnionUIButtonBase* Button) {
}


