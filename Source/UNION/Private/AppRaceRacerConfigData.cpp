#include "AppRaceRacerConfigData.h"

FAppRaceRacerConfigData::FAppRaceRacerConfigData() {
    this->GroupIndex = 0;
    this->DriverId = EDriverId::Sonic;
    this->DriverType = EDriverType::Speed;
    this->MachineBehaviorID = 0;
    this->Rom1stMachineId = 0;
    this->MachineId = 0;
    this->PlatformType = ECrossplayPlatform::Xbox;
    this->HonorTitleId = 0;
    this->ComLv = 0;
    this->ComControlType = 0;
    this->Rate = 0;
}

