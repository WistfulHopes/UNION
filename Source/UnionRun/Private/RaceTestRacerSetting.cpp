#include "RaceTestRacerSetting.h"

FRaceTestRacerSetting::FRaceTestRacerSetting() {
    this->Driver = EDriverId::Sonic;
    this->machine = EMachineId::SPD_01;
    this->RunMode = ERaceTestRacerRunMode::DEFAULT;
    this->GroupSetting = 0;
}

