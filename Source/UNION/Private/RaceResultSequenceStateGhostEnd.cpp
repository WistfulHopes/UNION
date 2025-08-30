#include "RaceResultSequenceStateGhostEnd.h"
#include "ERaceResultSequenceState.h"

URaceResultSequenceStateGhostEnd::URaceResultSequenceStateGhostEnd(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("GhostEnd");
    this->DefaultMenuState = ERaceResultSequenceState::GhostEnd;
}


