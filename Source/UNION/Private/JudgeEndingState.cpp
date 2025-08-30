#include "JudgeEndingState.h"
#include "ERaceSequenceState.h"

UJudgeEndingState::UJudgeEndingState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("JudgeEnding");
    this->DefaultMenuState = ERaceSequenceState::JudgeEnding;
}


