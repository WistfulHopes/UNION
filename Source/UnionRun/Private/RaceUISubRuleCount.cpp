#include "RaceUISubRuleCount.h"

URaceUISubRuleCount::URaceUISubRuleCount() : UUserWidget(FObjectInitializer::Get()) {
    this->NowCount = -1;
    this->TxtCount = NULL;
}



FMenuGroupRaceBonusData URaceUISubRuleCount::GetGroupRaceBonusData() {
    return FMenuGroupRaceBonusData{};
}

int32 URaceUISubRuleCount::GetCount(int32 RacerIndex) {
    return 0;
}


