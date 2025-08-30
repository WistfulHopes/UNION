#include "RaceSequenceStateBase.h"

URaceSequenceStateBase::URaceSequenceStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultMenuState = ERaceSequenceState::Idle;
    this->OwnerRaceSequence = NULL;
}

bool URaceSequenceStateBase::StartTimeoutTimer(float TimeoutTime) {
    return false;
}

bool URaceSequenceStateBase::SetNextRaceSequenceState(ERaceSequenceState InState) {
    return false;
}

void URaceSequenceStateBase::OnTimeout_Implementation() {
}

ARaceSequence* URaceSequenceStateBase::GetOwnerRaceSequence() const {
    return NULL;
}

void URaceSequenceStateBase::ClearTimeoutTimer() {
}


