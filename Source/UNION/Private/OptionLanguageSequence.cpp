#include "OptionLanguageSequence.h"

UOptionLanguageSequence::UOptionLanguageSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ReloadPopup = NULL;
}


void UOptionLanguageSequence::OnReloadPopupDecision(UUnionUIButtonBase* Button, int32 panelIdx, int32 buttonIdx) {
}

void UOptionLanguageSequence::OnIndicatorMoveEvent(uint8 kind, uint8 Val) {
}

void UOptionLanguageSequence::OnIndicatorDecisionEvent(uint8 kind, uint8 Val) {
}

void UOptionLanguageSequence::CreateReloadWindow() {
}


