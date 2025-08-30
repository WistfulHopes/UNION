#include "UnionRaceUIGroupResultScene.h"

UUnionRaceUIGroupResultScene::UUnionRaceUIGroupResultScene() : UUserWidget(FObjectInitializer::Get()) {
    this->ResultAnimationMoving = false;
}







EGroupRaceRule UUnionRaceUIGroupResultScene::GetGroupRaceRule() {
    return EGroupRaceRule::None;
}

void UUnionRaceUIGroupResultScene::GetFestaResultInfo(const TArray<int32>& TeamPointList, FFestaResultInfo& OutInfo, int32 InPlayerRacerIndex, ERaceSettingGrouping RaceSettingGrouping) {
}

EGroupBonusType UUnionRaceUIGroupResultScene::GetFestaBonusType() {
    return EGroupBonusType::UnKnown;
}

int32 UUnionRaceUIGroupResultScene::GetFestaBonusByTeamIndex(int32 TeamIndex) {
    return 0;
}

int32 UUnionRaceUIGroupResultScene::GetFestaBonusByRacerIndex(int32 RacerIndex) {
    return 0;
}



