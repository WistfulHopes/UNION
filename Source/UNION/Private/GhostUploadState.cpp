#include "GhostUploadState.h"
#include "EMenuSequenceSubState.h"

UGhostUploadState::UGhostUploadState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("GhostUpload");
    this->DefaultMenuState = EMenuSequenceSubState::GhostUpload;
    this->m_SelectedStageId = EStageId::UnKnown;
    this->m_SelectedSpeedClassId = ESpeedClassId::SonicSpeed;
    this->m_bIsStartConfimationState = false;
}

void UGhostUploadState::RequestStartGhostLoad(EStageId SelectedStageId, ESpeedClassId SpeedClassId) {
}



