#include "UnionUIButtonBaseCore.h"

UUnionUIButtonBaseCore::UUnionUIButtonBaseCore() {
    this->bChangeableButtonState = true;
    this->bAnalogEvent = false;
    this->bEnableMouseInteraction = false;
    this->MouseInteractionButton = NULL;
    this->CurrentButtonAnimPlayer = NULL;
}

void UUnionUIButtonBaseCore::StartDelayEnable(float Duration) {
}

void UUnionUIButtonBaseCore::SetNavigationExplicitWidget(EUINavigation Direction, UWidget* FocusToWidget) {
}

void UUnionUIButtonBaseCore::SetMouseInteractionButton(UButton* InMouseInteractionButton) {
}

void UUnionUIButtonBaseCore::SetInteractableState(bool Interactable) {
}

void UUnionUIButtonBaseCore::SetChangeableButtonState(bool InChangeableButtonState) {
}

void UUnionUIButtonBaseCore::PlayButtonAnimationWithFinished(UWidgetAnimation* Animation, UWidgetAnimation* LoopAnimation, const FButtonAnimFinishedEvent& OnFninished) {
}

void UUnionUIButtonBaseCore::PlayButtonAnimation(UWidgetAnimation* Animation, UWidgetAnimation* LoopAnimation) {
}

void UUnionUIButtonBaseCore::OnUnhoverdMouseInteractionButton() {
}

void UUnionUIButtonBaseCore::OnPressedMouseInteractionButton() {
}

void UUnionUIButtonBaseCore::OnHoverdMouseInteractionButton() {
}

void UUnionUIButtonBaseCore::OnClickedMouseInteractionButton() {
}

bool UUnionUIButtonBaseCore::GetNavigationExplicitWidget(EUINavigation Direction, UWidget*& FocusToWidget) {
    return false;
}

UButton* UUnionUIButtonBaseCore::GetMouseInteractionButton() {
    return NULL;
}

bool UUnionUIButtonBaseCore::GetChangeableButtonState() const {
    return false;
}


