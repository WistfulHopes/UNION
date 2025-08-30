#include "RaceSequenceStateDrive.h"
#include "ERaceSequenceState.h"

URaceSequenceStateDrive::URaceSequenceStateDrive(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("Drive");
    this->DefaultMenuState = ERaceSequenceState::Drive;
}


