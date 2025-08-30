#include "TimeTrialGhostConfirmationState.h"

UTimeTrialGhostConfirmationState::UTimeTrialGhostConfirmationState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("GhostConfirmation");
    this->DefaultMenuState = EMenuSequenceSubState::GhostConfirmation;
    this->m_SelectedStageId = EStageId::UnKnown;
    this->m_SelectedSpeedClassId = ESpeedClassId::SonicSpeed;
    this->m_bIsStartConfimationState = false;
}

void UTimeTrialGhostConfirmationState::SetBackMenuState(const EMenuSequenceSubState InState) {
}

void UTimeTrialGhostConfirmationState::RequestStartCheckGhostHash(EStageId SelectedStageId, ESpeedClassId SpeedClassId) {
}

void UTimeTrialGhostConfirmationState::RequestPFProfileDisplay(const FString& InPlatformUserId) {
}

void UTimeTrialGhostConfirmationState::OnShowPfProfileErrorWindowEnd_Implementation() {
}



EMenuSequenceSubState UTimeTrialGhostConfirmationState::GetBackMenuState() const {
    return EMenuSequenceSubState::None;
}


