#include "RaceErrorHandlingSequenceStateBase.h"

URaceErrorHandlingSequenceStateBase::URaceErrorHandlingSequenceStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultSequenceState = ERaceErrorHandlingState::Idle;
}


