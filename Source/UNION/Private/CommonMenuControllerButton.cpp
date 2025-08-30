#include "CommonMenuControllerButton.h"

UCommonMenuControllerButton::UCommonMenuControllerButton() {
    this->bIsRaceKey = false;
    this->bIsGamePadKey = false;
    this->PlayerIndex = 0;
    this->PAT_ControllerBtn = NULL;
    this->CurrentIndex = 0;
}

void UCommonMenuControllerButton::ToMouseRowsColumns() {
}

void UCommonMenuControllerButton::ToMenuKeyboardRowsColumns() {
}

void UCommonMenuControllerButton::ToMenuKeyboardDisplay() {
}

void UCommonMenuControllerButton::ToMenuGamepadRowsColumns() {
}

void UCommonMenuControllerButton::SetControllerTexture(UTexture* InTexture) {
}

void UCommonMenuControllerButton::SetControllerButtonMaterialParam(int32 InIndex) {
}

void UCommonMenuControllerButton::RefreshButton() {
}

void UCommonMenuControllerButton::ChangeKeyboardLayoutIF_Implementation(uint8 InNewKeyboardLayout, uint8 InNewKeytopPattern) {
}

void UCommonMenuControllerButton::ChangeInputTypeIF_Implementation(EAppControllerInputType InNewControllerInputType) {
}


