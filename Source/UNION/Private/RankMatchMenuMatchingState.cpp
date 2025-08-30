#include "RankMatchMenuMatchingState.h"
#include "EMenuSequenceSubState.h"

URankMatchMenuMatchingState::URankMatchMenuMatchingState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("MATCHING");
    this->DefaultMenuState = EMenuSequenceSubState::Matching;
}


