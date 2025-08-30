#include "MachineOptionWindow.h"

UMachineOptionWindow::UMachineOptionWindow() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->WBP_Window_Sub_Option_HandleAssist = NULL;
    this->WBP_Window_Sub_Option_AutoAccel = NULL;
    this->WBP_Window_Sub_Option_AerialTrickAssist = NULL;
    this->ButtonPanel = NULL;
}




void UMachineOptionWindow::PlayAnimLoop() {
}





void UMachineOptionWindow::OnCallbackChangeAssistHandle(UUnionUIButtonBase* InButton) {
}

void UMachineOptionWindow::OnCallbackChangeAssistAutoAccel(UUnionUIButtonBase* InButton) {
}

void UMachineOptionWindow::OnCallbackChangeAssistAerialTrick(UUnionUIButtonBase* InButton) {
}

UUnionUIButtonBase* UMachineOptionWindow::GetHandleAssist() const {
    return NULL;
}

UUnionUIButtonBase* UMachineOptionWindow::GetAutoAccel() const {
    return NULL;
}

UUnionUIButtonBase* UMachineOptionWindow::GetAerialTrickAssist() const {
    return NULL;
}

void UMachineOptionWindow::FinishedAnim() {
}


