#include "SquadState.h"
#include "EMenuSequenceSubState.h"

USquadState::USquadState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("Squad");
    this->DefaultMenuState = EMenuSequenceSubState::Squad;
}


