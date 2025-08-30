#include "EventStateAfterEnding.h"
#include "ERaceEndingSequenceState.h"

UEventStateAfterEnding::UEventStateAfterEnding(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("AfterEndingEvent");
    this->DefaultMenuState = ERaceEndingSequenceState::AfterEndingEvent;
}


