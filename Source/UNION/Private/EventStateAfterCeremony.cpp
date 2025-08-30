#include "EventStateAfterCeremony.h"
#include "ERaceCeremonySequenceState.h"

UEventStateAfterCeremony::UEventStateAfterCeremony(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("AfterCeremonyEvent");
    this->DefaultMenuState = ERaceCeremonySequenceState::AfterCeremonyEvent;
}

void UEventStateAfterCeremony::SetRaceSequence(ARaceSequence* Sequence) {
}


