#include "CommonMenuRuleTimeTableScene.h"

UCommonMenuRuleTimeTableScene::UCommonMenuRuleTimeTableScene() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->Time.AddDefaulted(2);
    this->GroupRaceRule.AddDefaulted(2);
    this->IsEnd.AddDefaulted(2);
    this->IsSpRule.AddDefaulted(2);
    this->TimeTableOverlay = NULL;
}




void UCommonMenuRuleTimeTableScene::SetTimeTable_Implementation(int32 InTimetableIndex, FDateTime InTime, EGroupRaceRule InGroupRaceRule, bool InIsEnd, bool InIsSpRule) {
}

void UCommonMenuRuleTimeTableScene::OnInitialize_Implementation() {
}

int32 UCommonMenuRuleTimeTableScene::GetMaxIndex() {
    return 0;
}



