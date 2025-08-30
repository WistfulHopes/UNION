#include "FriendListConfirmWidget.h"

UFriendListConfirmWidget::UFriendListConfirmWidget() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->ButtonType = EFriendListConfirmWindowButtonType::Button2;
    this->InitialButtonIndex = 0;
    this->SelectButtonIndex = 0;
    this->PFProfileButtonIndex = -1;
}



void UFriendListConfirmWidget::SetupByData(const FFriendListConfirmWidgetData& InData) {
}





void UFriendListConfirmWidget::SetInitialButtonIndex(int32 InButtonIndex) {
}




