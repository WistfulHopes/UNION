#include "RaceSequenceStateSetupAssets.h"
#include "ERaceSequenceState.h"

URaceSequenceStateSetupAssets::URaceSequenceStateSetupAssets(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("SetupAssets");
    this->DefaultMenuState = ERaceSequenceState::SetupAssets;
}


