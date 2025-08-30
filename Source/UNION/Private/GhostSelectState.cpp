#include "GhostSelectState.h"
#include "EMenuSequenceSubState.h"

UGhostSelectState::UGhostSelectState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("SelectGhost");
    this->DefaultMenuState = EMenuSequenceSubState::SelectGhost;
    this->bIsGhostMachineDisable = false;
    this->bIsLineGuideDisable = false;
    this->bIsGhostOnline = false;
    this->bIsViewGhostReplay = false;
    this->CurrentGhostSelectModeId = EGhostSelectModeId::NotMyBest;
}


