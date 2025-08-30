#include "FestaRewardWindow.h"

UFestaRewardWindow::UFestaRewardWindow() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->IsEventInfoDisplay = false;
    this->bEnableWindowInput = false;
}



void UFestaRewardWindow::SetEventInfoDisplayData_Implementation(const TArray<FFestaPointRewardUIData>& InRewardUIDataArray) {
}

void UFestaRewardWindow::SetDecisionClose(bool bInDecisionClose) {
}




bool UFestaRewardWindow::GetDecisionClose() {
    return false;
}



