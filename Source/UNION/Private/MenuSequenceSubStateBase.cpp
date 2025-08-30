#include "MenuSequenceSubStateBase.h"

UMenuSequenceSubStateBase::UMenuSequenceSubStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultMenuState = EMenuSequenceSubState::None;
    this->OwnerSequence = NULL;
}

void UMenuSequenceSubStateBase::SetNextMenuSequenceSubState_Implementation(EMenuSequenceSubState InState) {
}

void UMenuSequenceSubStateBase::SetNextMenuSequenceState(EMenuSequenceMainState InState) {
}

AActor* UMenuSequenceSubStateBase::GetOwnerSequence() const {
    return NULL;
}


