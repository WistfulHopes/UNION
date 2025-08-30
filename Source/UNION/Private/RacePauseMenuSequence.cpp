#include "RacePauseMenuSequence.h"

ARacePauseMenuSequence::ARacePauseMenuSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PauseMenuContentTable = NULL;
}

void ARacePauseMenuSequence::StopVehicleAllSE() {
}

void ARacePauseMenuSequence::SetPauseMenuExitCode(ERacePauseMenuSequenceExitCode InValue) {
}

void ARacePauseMenuSequence::SetNextPauseMenuState(ERacePauseMenuSequenceState InState) {
}

void ARacePauseMenuSequence::OnUpdateStateSelect_Implementation(float InDeltaTime) {
}

void ARacePauseMenuSequence::OnInitStateSelect_Implementation() {
}

void ARacePauseMenuSequence::OnInitStateIdle_Implementation() {
}

void ARacePauseMenuSequence::OnInitStateExit_Implementation() {
}

void ARacePauseMenuSequence::OnExitStateSelect_Implementation() {
}

FText ARacePauseMenuSequence::GetPopupWarningMessage(ECommonRaceMenuContentId InSelectedContentId) const {
    return FText::GetEmpty();
}

int32 ARacePauseMenuSequence::GetOwnerPlayerControllerIndex() const {
    return 0;
}

UCommonRaceMenuContentsInfo* ARacePauseMenuSequence::GeneratePauseMenuContentsInfo() {
    return NULL;
}


