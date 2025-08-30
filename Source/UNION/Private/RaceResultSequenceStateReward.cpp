#include "RaceResultSequenceStateReward.h"
#include "ERaceResultSequenceState.h"

URaceResultSequenceStateReward::URaceResultSequenceStateReward(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("Reward");
    this->DefaultMenuState = ERaceResultSequenceState::Reward;
}


