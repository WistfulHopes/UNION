#include "OptionControlSequence.h"

UOptionControlSequence::UOptionControlSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SelectPlayerIndex = EOptionLocalPlayerNumber::Player_1;
}

void UOptionControlSequence::OpenKeyConfigWindow() {
}

void UOptionControlSequence::OnMoveKeyConfigListItem(EKeyConfigRace Val) {
}

void UOptionControlSequence::OnIndicatorMoveEvent(uint8 kind, uint8 Val) {
}

void UOptionControlSequence::OnIndicatorDecisionEvent(uint8 kind, uint8 Val) {
}

void UOptionControlSequence::OnGageDecisionEvent(uint8 kind, float Val) {
}

void UOptionControlSequence::OnExitKeyConfig(bool Val) {
}

void UOptionControlSequence::OnChangeCellItem(const FText Text) {
}


