#include "MenuRacerBase.h"

AMenuRacerBase::AMenuRacerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Type = EMenuRacerType::Preview;
    this->DriverId = EDriverId::Sonic;
    this->HornComponentClass = NULL;
    this->HornComponent = NULL;
    this->bEnabledSound = true;
    this->EngineSoundFront = NULL;
    this->EngineSoundRear = NULL;
}



void AMenuRacerBase::SetLocalPlayerIndex(int32 InLocalPlayerIndex) {
}

void AMenuRacerBase::SetDriverInterface_Implementation(EDriverId InDriverId, bool bInForcedSetting) {
}

void AMenuRacerBase::PlayDriverAnimation_Implementation(int32 StateId, int32 Index) {
}


void AMenuRacerBase::LoadSyncEngineSoundRear(EMachineId InMachineID) {
}

void AMenuRacerBase::LoadSyncEngineSoundFront(EMachineId InMachineID) {
}

int32 AMenuRacerBase::GetStickerSize() const {
    return 0;
}

int32 AMenuRacerBase::GetLocalPlayerIndex() const {
    return 0;
}

void AMenuRacerBase::CreateAuraEffectID(EMachineAuraId InAuraID) {
}

void AMenuRacerBase::CreateAuraEffect() {
}


