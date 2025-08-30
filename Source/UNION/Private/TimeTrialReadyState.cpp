#include "TimeTrialReadyState.h"

UTimeTrialReadyState::UTimeTrialReadyState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("Ready");
    this->DefaultMenuState = EMenuSequenceSubState::Ready;
    this->BackMenuState = EMenuSequenceSubState::SelectGhost;
}

void UTimeTrialReadyState::SetBackMenuState(const EMenuSequenceSubState InState) {
}

EMenuSequenceSubState UTimeTrialReadyState::GetBackMenuState() const {
    return EMenuSequenceSubState::None;
}


