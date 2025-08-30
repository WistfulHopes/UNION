#include "RewardGetWindow.h"

URewardGetWindow::URewardGetWindow() {
    this->bOverrideUpperText = false;
    this->DSP_TXT_ItemType = NULL;
    this->TXT_ItemName = NULL;
    this->WBP_CMN_ItemIcon = NULL;
}

void URewardGetWindow::SetUpperText(ERewardType InRewardType) {
}

void URewardGetWindow::SetupItemIconWidgetWithNum(ERewardType InRewardType, UTexture2D* Texture, int32 NumItem) {
}

void URewardGetWindow::SetupItemIconWidget(ERewardType InRewardType, UTexture2D* Texture) {
}

void URewardGetWindow::SetOverrideUpperText(const FText& InText) {
}

void URewardGetWindow::SetLowerText(const FText& Text) {
}

void URewardGetWindow::SetEnabledOverrideUpperText(const bool bEnabled) {
}

void URewardGetWindow::DoOverrideUpperText() {
}


