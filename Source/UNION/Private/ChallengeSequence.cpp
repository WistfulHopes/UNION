#include "ChallengeSequence.h"
#include "EMenuSequenceSubState.h"

UChallengeSequence::UChallengeSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("Challenge");
    this->DefaultMenuState = EMenuSequenceSubState::Challenge;
    this->_ChallengeWidget = NULL;
    this->_BGWidget = NULL;
}


