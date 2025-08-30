#include "OptionSequence.h"

AOptionSequence::AOptionSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UIScene = NULL;
    this->PrevSequenceState = EOptionSequenceMainState::Idle;
    this->SelectedMainState = EOptionSequenceMainState::Idle;
}

void AOptionSequence::SetNextOptionSequenceState_Implementation(EOptionSequenceMainState InState, EOptionSequenceMainState PrevState) {
}

void AOptionSequence::OnInitStateSelectMainOption_Implementation() {
}

void AOptionSequence::OnInitStateOptionTop_Implementation() {
}

void AOptionSequence::OnInitStateIdle_Implementation() {
}

void AOptionSequence::OnInitStateExit_Implementation() {
}


