#include "RaceSequenceStateGoal.h"
#include "ERaceSequenceState.h"

URaceSequenceStateGoal::URaceSequenceStateGoal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("Goal");
    this->DefaultMenuState = ERaceSequenceState::Goal;
}


