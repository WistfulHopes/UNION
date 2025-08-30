#include "RaceSequenceStateCreateRace.h"
#include "ERaceSequenceState.h"

URaceSequenceStateCreateRace::URaceSequenceStateCreateRace(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("CreateRace");
    this->DefaultMenuState = ERaceSequenceState::CreateRace;
}

void URaceSequenceStateCreateRace::DebugPostCreateRace() {
}

void URaceSequenceStateCreateRace::CreateRace() {
}


