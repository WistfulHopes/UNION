#include "RaceResultSequenceStateBase.h"

URaceResultSequenceStateBase::URaceResultSequenceStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultMenuState = ERaceResultSequenceState::Idle;
    this->OwnerRaceResultSequence = NULL;
}

void URaceResultSequenceStateBase::SetNextRaceResultSequenceState(ERaceResultSequenceState InState) {
}

ARaceResultSequence* URaceResultSequenceStateBase::GetOwnerRaceResultSequence() const {
    return NULL;
}


