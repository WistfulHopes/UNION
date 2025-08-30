#include "PartyRaceMenuSelectClassState.h"
#include "EMenuSequenceSubState.h"

UPartyRaceMenuSelectClassState::UPartyRaceMenuSelectClassState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("SelectClass");
    this->DefaultMenuState = EMenuSequenceSubState::SelectClass;
}


