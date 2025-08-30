#include "RaceSequenceStateReady.h"
#include "ERaceSequenceState.h"

URaceSequenceStateReady::URaceSequenceStateReady(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("Ready");
    this->DefaultMenuState = ERaceSequenceState::Ready;
    this->RaceStartTimeSec = 4;
}

bool URaceSequenceStateReady::StartRace(int32 InRaceStartTimeSec) {
    return false;
}

void URaceSequenceStateReady::SetClockStartWait(bool bInEnable) {
}

bool URaceSequenceStateReady::ReadyRace() {
    return false;
}


