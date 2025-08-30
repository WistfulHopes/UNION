#include "UnionUIButtonBase.h"

UUnionUIButtonBase::UUnionUIButtonBase() {
    this->ButtonFocusType = EButtonFocusType::CanFocus;
    this->bSoundEnable = true;
    this->bFocusSound = true;
    this->CurrentFocusSoundSetting = EUnionUIButtonSoundSetting::Disable;
    this->NowUIButtonState = EUnionUIButtonEventState::UnFocus;
    this->PanelIndex = 0;
    this->ButtonIndex = 0;
    this->NowButtonAnimState = EUnionUIButtonAnimState::None;
    this->LastPlayButtonAnim = NULL;
    this->FocusAnimRef = NULL;
    this->UnFocusAnimRef = NULL;
    this->bConsumePointerInput = false;
    this->bMouseUnFocus = false;
}

void UUnionUIButtonBase::SetFocusSoundEnable(bool bEnable) {
}

void UUnionUIButtonBase::SetButtonIndex(int32 NewButtonIndex) {
}

void UUnionUIButtonBase::OnUnFocusAnimStart_Implementation() {
}

void UUnionUIButtonBase::OnUnFocusAnimFinished_Implementation() {
}



void UUnionUIButtonBase::OnFocusAnimStart_Implementation() {
}

void UUnionUIButtonBase::OnFocusAnimFinished_Implementation() {
}

void UUnionUIButtonBase::FireUnfocusEvent() {
}

void UUnionUIButtonBase::FireFocusEvent() {
}

void UUnionUIButtonBase::CallOnOnCancel(UUnionUIButtonBase* InButton) {
}

void UUnionUIButtonBase::CallOnDecision(UUnionUIButtonBase* InButton) {
}


