#include "RaceSequenceStateFeaturedRacer.h"
#include "ERaceSequenceState.h"

URaceSequenceStateFeaturedRacer::URaceSequenceStateFeaturedRacer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("FeaturedRacer");
    this->DefaultMenuState = ERaceSequenceState::FeaturedRacer;
    this->RaceBeforeSharedData = NULL;
}


