#include "RaceCeremonySequenceStateBase.h"

URaceCeremonySequenceStateBase::URaceCeremonySequenceStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultMenuState = ERaceCeremonySequenceState::Idle;
    this->OwnerRaceCeremonySequence = NULL;
}

void URaceCeremonySequenceStateBase::SetNextRaceCeremonySequenceState(ERaceCeremonySequenceState InState) {
}

ARaceCeremonySequence* URaceCeremonySequenceStateBase::GetOwnerRaceCeremonySequence() const {
    return NULL;
}


