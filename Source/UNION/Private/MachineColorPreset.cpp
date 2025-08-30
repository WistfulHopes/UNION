#include "MachineColorPreset.h"

FMachineColorPreset::FMachineColorPreset() {
    this->MachineColorPresetId = EMachineColorPresetId::ColorPreset01;
    this->Type = EMachineColorPresetType::Character;
    this->MachineId = EMachineId::SPD_01;
    this->IsEnabled = false;
    this->bIsHiddenUntilUnlock = false;
    this->bIsDLC = false;
    this->DriverId = EDriverId::Sonic;
}

