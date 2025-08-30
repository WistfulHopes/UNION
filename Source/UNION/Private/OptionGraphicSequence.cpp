#include "OptionGraphicSequence.h"

UOptionGraphicSequence::UOptionGraphicSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PopupShowTime = 10.00f;
    this->ApplyParamPopup = NULL;
}

void UOptionGraphicSequence::OpenBrightnessWindow() {
}

void UOptionGraphicSequence::OnPopupDecision(UUnionUIButtonBase* Button, int32 panelIdx, int32 buttonIdx) {
}

void UOptionGraphicSequence::OnMoveBrightness(float Val) {
}

void UOptionGraphicSequence::OnIndicatorDecisionEvent(uint8 kind, uint8 Val) {
}

void UOptionGraphicSequence::OnDecisionBrightness(float Val) {
}

void UOptionGraphicSequence::OnClosePopupDecision(bool isApply) {
}

void UOptionGraphicSequence::CreateConfirmWindow(FOnCellIndicatorPopupDecision Callback) {
}


