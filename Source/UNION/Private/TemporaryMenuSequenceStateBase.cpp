#include "TemporaryMenuSequenceStateBase.h"

UTemporaryMenuSequenceStateBase::UTemporaryMenuSequenceStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultMenuState = EMenuSequenceMainState::Idle;
    this->OwnerMenuSequence = NULL;
}

void UTemporaryMenuSequenceStateBase::SetNextMenuSequenceState(EMenuSequenceMainState InState) {
}

ATemporaryMenuSequence* UTemporaryMenuSequenceStateBase::GetOwnerMenuSequence() const {
    return NULL;
}


