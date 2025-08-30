#include "ReadySequence.h"

AReadySequence::AReadySequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AReadySequence::SetNextReadyState(EReadySequenceState InState) {
}

EReadySequenceState AReadySequence::GetCurrentReadyState() const {
    return EReadySequenceState::Init;
}


