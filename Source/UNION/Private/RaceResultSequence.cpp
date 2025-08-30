#include "RaceResultSequence.h"

ARaceResultSequence::ARaceResultSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Racers = NULL;
    this->RaceHUD = NULL;
}

void ARaceResultSequence::UnloadAnotherStageLevels() {
}

void ARaceResultSequence::SetResultHUD(UUnionRaceUIResultScene* InResultHUD) {
}

void ARaceResultSequence::SetResultByRacers(UUnionRacers* InRacers) {
}

void ARaceResultSequence::SetRacers(UUnionRacers* InRacers) {
}

void ARaceResultSequence::SetRaceHUD(UUnionRaceUI* inRaceHud) {
}

void ARaceResultSequence::OnSetHonorList(const FHonorCommendationDataSetList& list) {
}

void ARaceResultSequence::OnInitStateIdle_Implementation() {
}

void ARaceResultSequence::OnInitStateExit_Implementation() {
}

void ARaceResultSequence::GetRewardRedStarRingTypeList(TArray<ERewardRedStarRingType>& OutRewardRedStarRingTypes, TArray<FHonorCommendationData>& OutRSRHonorList) {
}

int32 ARaceResultSequence::GetResultPlayerRank() {
    return 0;
}

int32 ARaceResultSequence::GetResultOtherPlayerRank(int32 Index) {
    return 0;
}

FAppRaceResultData ARaceResultSequence::GetRaceResultData() {
    return FAppRaceResultData{};
}


