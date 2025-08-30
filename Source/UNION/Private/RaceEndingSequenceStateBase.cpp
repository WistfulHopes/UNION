#include "RaceEndingSequenceStateBase.h"

URaceEndingSequenceStateBase::URaceEndingSequenceStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultMenuState = ERaceEndingSequenceState::Idle;
    this->OwnerRaceEndingSequence = NULL;
}

void URaceEndingSequenceStateBase::SetNextRaceEndingSequenceState(ERaceEndingSequenceState InState) {
}

ARaceEndingSequence* URaceEndingSequenceStateBase::GetOwnerRaceEndingSequence() const {
    return NULL;
}


