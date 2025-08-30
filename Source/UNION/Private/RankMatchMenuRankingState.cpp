#include "RankMatchMenuRankingState.h"
#include "EMenuSequenceSubState.h"

URankMatchMenuRankingState::URankMatchMenuRankingState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("Ranking");
    this->DefaultMenuState = EMenuSequenceSubState::Ranking;
}


