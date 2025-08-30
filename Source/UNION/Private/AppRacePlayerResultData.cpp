#include "AppRacePlayerResultData.h"

FAppRacePlayerResultData::FAppRacePlayerResultData() {
    this->PlayerControllerIndex = 0;
    this->RacerIndex = 0;
    this->DriverId = EDriverId::Sonic;
    this->Record = 0;
    this->RacerRank = 0;
    this->RacerRankPrev = 0;
    this->TotalRankIndex = 0;
    this->TotalRankIndexPrev = 0;
    this->TotalRank = 0;
    this->TotalRankPrev = 0;
    this->EarnPoint = 0;
    this->TotalPoint = 0;
    this->TotalPointPrev = 0;
    this->IsRingGateSelectRacer = false;
    this->IsRivalRacer = false;
    this->IsCom = false;
}

