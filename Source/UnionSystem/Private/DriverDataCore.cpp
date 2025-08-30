#include "DriverDataCore.h"

FDriverDataCore::FDriverDataCore() {
    this->IsEnabled = false;
    this->IsDefaultSelect = false;
    this->UseCom = false;
    this->IsDLC = false;
    this->DLCType = EDLCType::None;
    this->ReleaseSeason = 0;
    this->DriverId = EDriverId::Sonic;
    this->OriginalDriverId = EDriverId::Sonic;
    this->DriverSize = EDriverSize::S;
    this->DriverType = EDriverType::Speed;
    this->DefaultMachineId = EMachineId::SPD_01;
    this->CharaSelectIndex = 0;
    this->Price = 0;
    this->SortID = 0;
    this->HudOffsetY = 0.00f;
}

