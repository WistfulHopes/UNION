#include "HintPopupWindow.h"

UHintPopupWindow::UHintPopupWindow() {
    this->ImageWidget = NULL;
    this->bInputEnable = false;
    this->bDecisionClose = false;
    this->bUpdateByDeviceImmediately = false;
}

void UHintPopupWindow::StartImageWidgetLoop2Animation() {
}

void UHintPopupWindow::StartImageWidgetLoop1Animation() {
}

void UHintPopupWindow::StartImageWidgetAnimation() {
}

void UHintPopupWindow::SetupImageWidget(UUserWidget* InImageWidget, float InAnimationInterval) {
}




void UHintPopupWindow::SetImageWidgetTexture(int32 InImageIndex, UTexture2D* InTexture) {
}

void UHintPopupWindow::SetImageWidgetImageObjectVisible(int32 InImageIndex, bool bInVisible) {
}









FText UHintPopupWindow::GetRaceButtonText(int32 InPlayerIndex, uint8 InputType, const FText& InText) {
    return FText::GetEmpty();
}


void UHintPopupWindow::EndImageWidgetAnimation() {
}




