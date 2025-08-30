#include "MatchingSequenceStateBase.h"

UMatchingSequenceStateBase::UMatchingSequenceStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultMenuState = EMenuSequenceSubState::None;
}

void UMatchingSequenceStateBase::SetNextMatchingSequenceState(EOnlineSequenceState InState) {
}


