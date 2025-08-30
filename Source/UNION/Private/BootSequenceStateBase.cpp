#include "BootSequenceStateBase.h"

UBootSequenceStateBase::UBootSequenceStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultMenuState = EBootSequenceState::Idle;
    this->OwnerBootSequence = NULL;
}

void UBootSequenceStateBase::SetNextBootSequenceState(EBootSequenceState InState) {
}

ABootSequence* UBootSequenceStateBase::GetOwnerBootSequence() const {
    return NULL;
}


