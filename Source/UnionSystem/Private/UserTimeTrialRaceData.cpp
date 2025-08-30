#include "UserTimeTrialRaceData.h"

FUserTimeTrialRaceData::FUserTimeTrialRaceData() {
    this->TotalLapTime = 0;
    this->FirstLapTime = 0;
    this->SecondLapTime = 0;
    this->ThirdLapTime = 0;
    this->DirverId = EDriverId::Sonic;
    this->FrontPartsId = EMachineId::SPD_01;
    this->RearPartsId = EMachineId::SPD_01;
    this->TirePartsId = EMachineId::SPD_01;
    this->bIsValidData = false;
    this->bIsGhostDataUploaded = false;
    this->ClearRankId = ETimeTrialClearRankId::None;
    this->bDammy = false;
    this->GhostHash[0] = 0;
    this->GhostHash[1] = 0;
    this->GhostHash[2] = 0;
    this->GhostHash[3] = 0;
    this->GhostHash[4] = 0;
    this->GhostHash[5] = 0;
    this->GhostHash[6] = 0;
    this->GhostHash[7] = 0;
    this->GhostHash[8] = 0;
    this->GhostHash[9] = 0;
    this->GhostHash[10] = 0;
    this->GhostHash[11] = 0;
    this->GhostHash[12] = 0;
    this->GhostHash[13] = 0;
    this->GhostHash[14] = 0;
    this->GhostHash[15] = 0;
    this->RomVersion = 0;
    this->GhostVersion = 0;
}

