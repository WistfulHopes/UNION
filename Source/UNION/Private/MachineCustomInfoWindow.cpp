#include "MachineCustomInfoWindow.h"

UMachineCustomInfoWindow::UMachineCustomInfoWindow() : UUserWidget(FObjectInitializer::Get()) {
    this->WBP_FooterShortCut = NULL;
    this->DefaultButtonIconIndex = 3;
    this->DefaultButtonIconType = EUIButtonIconType::EIT_BTN_CONT_CROSS;
    this->DefaultTextType = EFooterSubTextType::Parameter;
}

void UMachineCustomInfoWindow::SetShortcutVisible(bool IsVisible) {
}

void UMachineCustomInfoWindow::SetShortcutTextSubType(EFooterSubTextType InType) {
}

void UMachineCustomInfoWindow::SetShortcutIconType(int32 InButtonIconIndex, EUIButtonIconType InButtonIconType) {
}





