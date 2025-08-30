#include "MachinePartsUIData.h"

FMachinePartsUIData::FMachinePartsUIData() {
    this->MachineId = EMachineId::SPD_01;
    this->IconTexture = NULL;
    this->bIsNew = false;
    this->LockType = ELockType::None;
    this->Price = 0;
    this->IsDLC = false;
    this->DLCType = EDLCType::None;
    this->ReleaseSeason = 0;
    this->SortID = 0;
}

