#include "HintTipsInformationWindow.h"

UHintTipsInformationWindow::UHintTipsInformationWindow() : UUserWidget(FObjectInitializer::Get()) {
    this->HintDataTable = NULL;
    this->WBP_HintWindow = NULL;
    this->WBP_HInt_Sub_List = NULL;
}

void UHintTipsInformationWindow::TabChangeTipsScreen(bool isInformation) {
}

void UHintTipsInformationWindow::SetupHintData(bool isInformation) {
}




void UHintTipsInformationWindow::ChangeTips(EHintId NextTipsId) {
}


