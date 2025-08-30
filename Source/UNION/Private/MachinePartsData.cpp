#include "MachinePartsData.h"

FMachinePartsData::FMachinePartsData() {
    this->Version = 0;
    this->MachineId = EMachineId::SPD_01;
    this->MachineNo = 0;
    this->IsEnabled = false;
    this->InitialMachine = false;
    this->UseCom = false;
    this->IsDLC = false;
    this->DLCType = EDLCType::None;
    this->ReleaseSeason = 0;
    this->CarStatusType = ECarStatusType::CarStatusSpeed;
    this->MachinePartsSize = EMachinePartsSize::S;
    this->FrontPartsPrice = 0;
    this->RearPartsPrice = 0;
    this->TirePartsPrice = 0;
    this->SortID = 0;
    this->UseCommonSideParts = false;
    this->ColorPresetId = EMachineColorPresetId::ColorPreset01;
    this->MufflerNum = 0;
}

