#include "MachineColorPresetUIData.h"

FMachineColorPresetUIData::FMachineColorPresetUIData() {
    this->ID = EMachineColorPresetId::ColorPreset01;
    this->PresetType = EMachineColorPresetType::Character;
    this->IconTexture = NULL;
    this->bIsHiddenUntilUnlock = false;
    this->bIsNew = false;
}

