#include "GadgetCustomizeWindow.h"

UGadgetCustomizeWindow::UGadgetCustomizeWindow() : UUserWidget(FObjectInitializer::Get()) {
    this->bMultiPlayerControl = false;
    this->bFestaSpecialRule = false;
}

void UGadgetCustomizeWindow::SetupPlayerCharaNames() {
}



void UGadgetCustomizeWindow::SetMultiPlayerControl(const bool InMultiPlayControl) {
}

bool UGadgetCustomizeWindow::IsMultiPlayerControl() const {
    return false;
}









