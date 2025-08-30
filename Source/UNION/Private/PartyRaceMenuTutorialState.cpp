#include "PartyRaceMenuTutorialState.h"
#include "EMenuSequenceSubState.h"

UPartyRaceMenuTutorialState::UPartyRaceMenuTutorialState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("EventScene");
    this->DefaultMenuState = EMenuSequenceSubState::EventScene;
}


