#include "RaceUISubTeamHUD.h"

URaceUISubTeamHUD::URaceUISubTeamHUD() : UUserWidget(FObjectInitializer::Get()) {
    this->ControlPlayerRacerIndex = 0;
    this->PlayerTeamIndex = 0;
    this->PlayerRacerIndex = -1;
    this->RuleCountUI = NULL;
    this->TeamRankSwithcer = NULL;
    this->UITeamGroupAll = NULL;
    this->IsSetGroupUI = false;
}

void URaceUISubTeamHUD::UpdateCharaRank(bool IsForce) {
}


int32 URaceUISubTeamHUD::GetTeamRankRough() {
    return 0;
}





