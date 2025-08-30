#include "MultiplePanelLoopScrollControl.h"

UMultiplePanelLoopScrollControl::UMultiplePanelLoopScrollControl() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->CenterElementIndex = 0;
    this->ElementArr.AddDefaulted(1);
}

void UMultiplePanelLoopScrollControl::SetupCenterElement() {
}

void UMultiplePanelLoopScrollControl::Setup(UUnionUILoopScrollBox* InUnionUILoopScrollBox, UWidgetAnimation* InScrollAnimation) {
}

void UMultiplePanelLoopScrollControl::SetControllableFlag(bool InControllable) {
}

void UMultiplePanelLoopScrollControl::PlayScrollAnimation(bool bIsMoveRight, bool bInImmediateReflection) {
}

void UMultiplePanelLoopScrollControl::OnFinishedScrollAnimation() {
}

bool UMultiplePanelLoopScrollControl::GetControllableFlag() const {
    return false;
}

UObject* UMultiplePanelLoopScrollControl::GetCenterElement() {
    return NULL;
}


