#include "OnlineRacerParam.h"

FOnlineRacerParam::FOnlineRacerParam() {
    this->Version = 0;
    this->DriverId = EDriverId::Sonic;
    this->MachineId = EMachineId::SPD_01;
    this->FrontMachineId = EMachineId::SPD_01;
    this->RearMachineId = EMachineId::SPD_01;
    this->TireMachineId = EMachineId::SPD_01;
    this->ComControlType = 0;
    this->ComLevel = 0;
    this->GroupId = 0;
    this->GadgetPlateId = 0;
}

