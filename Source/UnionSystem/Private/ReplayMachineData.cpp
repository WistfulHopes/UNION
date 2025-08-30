#include "ReplayMachineData.h"

FReplayMachineData::FReplayMachineData() {
    this->bIsUsed = false;
    this->FrontPartsId = EMachineId::SPD_01;
    this->RearPartsId = EMachineId::SPD_01;
    this->TirePartsId = EMachineId::SPD_01;
    this->ColorMode = EMachineColorMode::Default;
    this->ColorPresetId = EMachineColorPresetId::ColorPreset01;
    this->HornType = EMachineHornType::HORNTYPE_01;
    this->AuraId = EMachineAuraId::MACHINE_AURA_NONE;
    this->BodyColorArea1 = 0;
    this->BodyColorArea2 = 0;
    this->BodyColorArea3 = 0;
    this->BodySurfaceArea1 = 0;
    this->BodySurfaceArea2 = 0;
    this->BodySurfaceArea3 = 0;
    this->CockpitColorArea1 = 0;
    this->CockpitColorArea2 = 0;
    this->CockpitColorArea3 = 0;
    this->CockpitSurfaceArea1 = 0;
    this->CockpitSurfaceArea2 = 0;
    this->CockpitSurfaceArea3 = 0;
    this->TireColorArea1 = 0;
    this->TireColorArea2 = 0;
    this->TireColorArea3 = 0;
    this->TireSurfaceArea1 = 0;
    this->TireSurfaceArea2 = 0;
    this->TireSurfaceArea3 = 0;
    this->BodyGlowColor = 0;
    this->TireGlowColor = 0;
}

