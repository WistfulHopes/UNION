#include "MenuRacerLobby.h"

AMenuRacerLobby::AMenuRacerLobby(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SelectEffectSystem = NULL;
    this->SelectEffectComponent = NULL;
}



void AMenuRacerLobby::SetForcedLod_Implementation(int32 NewForcedLodModel) {
}

void AMenuRacerLobby::SetEnableSelectEffect(bool InEnable) {
}

void AMenuRacerLobby::SetAll_Implementation(EDriverId InDriverId, FUserMachineCustomizeData InCustomizeData, bool bIsSpawnCrown) {
}



void AMenuRacerLobby::ChangeMachineColor_Implementation(int32 InGroupIndex, bool InEnableEffect) {
}


