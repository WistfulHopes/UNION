#include "RaceSequenceStateSendRaceStart.h"
#include "ERaceSequenceState.h"

URaceSequenceStateSendRaceStart::URaceSequenceStateSendRaceStart(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("SendRaceStart");
    this->DefaultMenuState = ERaceSequenceState::SendRaceStart;
    this->MySequenceStateTimeoutTime = 45.00f;
}

void URaceSequenceStateSendRaceStart::StopExecuteCRM() {
}

void URaceSequenceStateSendRaceStart::NextState() {
}

bool URaceSequenceStateSendRaceStart::CheckSkipCurrentState() {
    return false;
}


