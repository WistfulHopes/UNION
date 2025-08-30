#include "PartyRaceMenuRivalTeamSelect.h"
#include "EMenuSequenceSubState.h"

UPartyRaceMenuRivalTeamSelect::UPartyRaceMenuRivalTeamSelect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("RivalTeamSelect");
    this->DefaultMenuState = EMenuSequenceSubState::RivalTeamSelect;
    this->RivalTeamSelectScene = NULL;
}


