#include "PartyRaceMenuSequence.h"

APartyRaceMenuSequence::APartyRaceMenuSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SelectPresetScene = NULL;
    this->PartyRacePresetSelect = NULL;
}

void APartyRaceMenuSequence::OnInitStateIdle_Implementation() {
}

void APartyRaceMenuSequence::OnInitStateExit_Implementation() {
}


