#include "FriendListNumberInputWidget.h"

UFriendListNumberInputWidget::UFriendListNumberInputWidget() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->InitialButtonIndex = -1;
    this->SelectButtonIndex = 0;
    this->InputFigureMax = 8;
}




void UFriendListNumberInputWidget::SetInputFigureMax(int32 InInputFigureMax) {
}

void UFriendListNumberInputWidget::SetInitialButtonIndex(int32 InButtonIndex) {
}


void UFriendListNumberInputWidget::ResetPlayerControllerPressedEvent() {
}


bool UFriendListNumberInputWidget::OnOpenSoftwareKeyboard(int32 MaxLength, const FString& DefaultText) {
    return false;
}

void UFriendListNumberInputWidget::OnFinishedSoftwareKeyboard(const FSoftwareKeyboardResult& Result) {
}

bool UFriendListNumberInputWidget::IsNumberText(const FString& InInputText) {
    return false;
}

void UFriendListNumberInputWidget::GetInputText(FText& OutInputText) {
}

int32 UFriendListNumberInputWidget::GetInputFigureMax() {
    return 0;
}


