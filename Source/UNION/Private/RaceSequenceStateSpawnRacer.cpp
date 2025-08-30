#include "RaceSequenceStateSpawnRacer.h"
#include "ERaceSequenceState.h"

URaceSequenceStateSpawnRacer::URaceSequenceStateSpawnRacer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("SpawnRacer");
    this->DefaultMenuState = ERaceSequenceState::SpawnRacer;
}


