#include "RaceResultSequenceStateRateRank.h"
#include "ERaceResultSequenceState.h"

URaceResultSequenceStateRateRank::URaceResultSequenceStateRateRank(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("RateRank");
    this->DefaultMenuState = ERaceResultSequenceState::RateRank;
}


