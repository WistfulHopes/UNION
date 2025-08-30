#include "RaceResultSequenceStateCeremony.h"
#include "ERaceResultSequenceState.h"

URaceResultSequenceStateCeremony::URaceResultSequenceStateCeremony(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("Ceremony");
    this->DefaultMenuState = ERaceResultSequenceState::Ceremony;
}


