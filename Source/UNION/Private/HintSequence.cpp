#include "HintSequence.h"
#include "EMenuSequenceSubState.h"

UHintSequence::UHintSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("Hint");
    this->DefaultMenuState = EMenuSequenceSubState::Hint;
    this->_HintWidget = NULL;
}


