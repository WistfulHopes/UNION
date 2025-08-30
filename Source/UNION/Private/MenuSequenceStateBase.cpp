#include "MenuSequenceStateBase.h"

UMenuSequenceStateBase::UMenuSequenceStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultMenuState = EMenuSequenceMainState::Idle;
    this->UIScene = NULL;
    this->OwnerMenuSequence = NULL;
}

void UMenuSequenceStateBase::SetNextMenuSequenceState(EMenuSequenceMainState InState) {
}

AMenuSequence* UMenuSequenceStateBase::GetOwnerMenuSequence() const {
    return NULL;
}


