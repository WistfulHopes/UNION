#include "RaceSequenceStateEntryRival.h"
#include "ERaceSequenceState.h"

URaceSequenceStateEntryRival::URaceSequenceStateEntryRival(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("EntryRival");
    this->DefaultMenuState = ERaceSequenceState::EntryRival;
    this->RaceBeforeSharedData = NULL;
}


