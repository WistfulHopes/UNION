#include "RaceSequenceStateEntryRacer.h"
#include "ERaceSequenceState.h"

URaceSequenceStateEntryRacer::URaceSequenceStateEntryRacer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("EntryRacer");
    this->DefaultMenuState = ERaceSequenceState::EntryRacer;
    this->RaceBeforeSharedData = NULL;
}

bool URaceSequenceStateEntryRacer::CanProceedSequence() const {
    return false;
}


