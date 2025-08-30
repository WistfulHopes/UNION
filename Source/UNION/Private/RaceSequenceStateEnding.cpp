#include "RaceSequenceStateEnding.h"
#include "ERaceSequenceState.h"

URaceSequenceStateEnding::URaceSequenceStateEnding(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("Ending");
    this->DefaultMenuState = ERaceSequenceState::Ending;
}


