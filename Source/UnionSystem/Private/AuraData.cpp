#include "AuraData.h"

FAuraData::FAuraData() {
    this->MachineAuraID = EMachineAuraId::MACHINE_AURA_NONE;
    this->Enable = false;
    this->EffectOptionParam = 0;
    this->Price = 0;
    this->bLock = false;
    this->SortID = 0;
}

