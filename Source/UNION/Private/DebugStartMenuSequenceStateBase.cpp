#include "DebugStartMenuSequenceStateBase.h"

UDebugStartMenuSequenceStateBase::UDebugStartMenuSequenceStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultMenuState = EDebugStartMenuSequenceState::Idle;
    this->OwnerDebugStartMenuSequence = NULL;
}

void UDebugStartMenuSequenceStateBase::SetNextDebugStartMenuSequenceState(EDebugStartMenuSequenceState InState) {
}

ADebugStartMenuSequence* UDebugStartMenuSequenceStateBase::GetOwnerDebugStartMenuSequence() const {
    return NULL;
}


