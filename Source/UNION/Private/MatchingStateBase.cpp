#include "MatchingStateBase.h"

UMatchingStateBase::UMatchingStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StartState = EMenuSequenceSubState::Matching;
}


