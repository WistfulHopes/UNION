#include "RaceSequenceStateCeremony.h"
#include "ERaceSequenceState.h"

URaceSequenceStateCeremony::URaceSequenceStateCeremony(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("Ceremony");
    this->DefaultMenuState = ERaceSequenceState::Ceremony;
}


