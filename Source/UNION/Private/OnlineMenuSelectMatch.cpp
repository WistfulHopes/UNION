#include "OnlineMenuSelectMatch.h"
#include "EMenuSequenceSubState.h"

UOnlineMenuSelectMatch::UOnlineMenuSelectMatch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("SelectOnlineMatch");
    this->DefaultMenuState = EMenuSequenceSubState::SelectOnlineMatch;
}


