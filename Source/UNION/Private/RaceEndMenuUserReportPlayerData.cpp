#include "RaceEndMenuUserReportPlayerData.h"

FRaceEndMenuUserReportPlayerData::FRaceEndMenuUserReportPlayerData() {
    this->Rank = 0;
    this->DriverId = EDriverId::Sonic;
    this->IsLocalPlayer = false;
    this->IsCom = false;
    this->IsRival = false;
    this->Platform = ECrossplayPlatform::Xbox;
    this->RacerIndex = 0;
}

