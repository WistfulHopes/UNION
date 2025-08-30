#include "RaceResultSequenceStateGhostSave.h"
#include "ERaceResultSequenceState.h"

URaceResultSequenceStateGhostSave::URaceResultSequenceStateGhostSave(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("GhostSave");
    this->DefaultMenuState = ERaceResultSequenceState::GhostSave;
}


