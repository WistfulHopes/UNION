#include "CommonSubMenuButton.h"

UCommonSubMenuButton::UCommonSubMenuButton() {
    this->TXT_MiniBtn = NULL;
    this->DSP_Set_Icon = NULL;
    this->DSP_Cursor_Texture = NULL;
    this->Btn_Active_Loop = NULL;
    this->Btn_Select_Loop = NULL;
    this->FocusSoundCue = NULL;
    this->DecisionSoundCue = NULL;
    this->CancelSoundCue = NULL;
    this->ShoulderSoundCue = NULL;
}

void UCommonSubMenuButton::SetText(const FText& InText) {
}

void UCommonSubMenuButton::SetSelectIconVisible(bool bInIsVisible) {
}

void UCommonSubMenuButton::SetCursorVisible(bool bInIsVisible) {
}

void UCommonSubMenuButton::SetActive(bool bInIsActive) {
}

bool UCommonSubMenuButton::IsSelectIconVisible() const {
    return false;
}

bool UCommonSubMenuButton::IsCursorVisible() const {
    return false;
}

bool UCommonSubMenuButton::IsActive() const {
    return false;
}

void UCommonSubMenuButton::GetText(FText& OutText) const {
}


