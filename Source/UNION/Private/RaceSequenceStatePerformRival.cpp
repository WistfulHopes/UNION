#include "RaceSequenceStatePerformRival.h"
#include "ERaceSequenceState.h"

URaceSequenceStatePerformRival::URaceSequenceStatePerformRival(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("PerformRival");
    this->DefaultMenuState = ERaceSequenceState::PerformRival;
    this->RaceBeforeSharedData = NULL;
}

UObject* URaceSequenceStatePerformRival::GetLoadedObject(const FSoftObjectPath& Path) {
    return NULL;
}


