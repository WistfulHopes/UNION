#include "UnionMatchmakingSettings.h"

UUnionMatchmakingSettings::UUnionMatchmakingSettings() {
    this->bUseFlexMatch = true;
    this->matchVersion = TEXT("AA");
    this->MinLobbyPlayerNumArray.AddDefaulted(1);
    this->MinMatchmakingTimeArray.AddDefaulted(3);
    this->DefaultFilterLobbyRank = 10;
    this->DefaultExtraProgressTime = 10.00f;
    this->ExtendFilterLobbyRank = 5;
    this->ExtendExtraProgressTime = 5.00f;
    this->DefaultFilterLobbyRankForUser = 10;
    this->DefaultExtraProgressTimeForUser = 10.00f;
    this->ExtendFilterLobbyRankForUser = 5;
    this->ExtendExtraProgressTimeForUser = 5.00f;
    this->EnteringRemainLobbyTimeCount = 20;
}

void UUnionMatchmakingSettings::SetUseFlexMatch(bool bNewValue) {
}


