#include "RaceSequenceStateResult.h"
#include "ERaceSequenceState.h"

URaceSequenceStateResult::URaceSequenceStateResult(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("Result");
    this->DefaultMenuState = ERaceSequenceState::Result;
}

void URaceSequenceStateResult::UpdateResultData() {
}

void URaceSequenceStateResult::UpdateRecentPlayerData() {
}

void URaceSequenceStateResult::SetResultDataByRacers(UUnionRacers* InRacers) {
}

void URaceSequenceStateResult::SetPartyRaceRivalWinLoseResult() {
}

void URaceSequenceStateResult::SetGrandPrixCompleteResult(const int32 LocalPlayerControllerId) {
}

void URaceSequenceStateResult::SaveResultRewardAndPoint() {
}

bool URaceSequenceStateResult::IsRewardUpdateNeeded() {
    return false;
}


