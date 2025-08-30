#include "RaceResultSequenceStateRaceStats.h"
#include "ERaceResultSequenceState.h"

URaceResultSequenceStateRaceStats::URaceResultSequenceStateRaceStats(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("RaceStats");
    this->DefaultMenuState = ERaceResultSequenceState::RaceStats;
}


