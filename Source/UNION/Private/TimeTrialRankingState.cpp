#include "TimeTrialRankingState.h"
#include "EMenuSequenceSubState.h"

UTimeTrialRankingState::UTimeTrialRankingState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("Ranking");
    this->DefaultMenuState = EMenuSequenceSubState::Ranking;
}


