#include "LobbyCourseSelectSequence.h"

ALobbyCourseSelectSequence::ALobbyCourseSelectSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PrevSquenceState = ELobbyCourseSelectState::Idle;
    this->SelectedMainState = ELobbyCourseSelectState::Idle;
    this->LobbyCourseSelectHostComponentClass = NULL;
    this->LobbyCourseSelectHostComponent = NULL;
    this->LobbyCourseSelectGuestComponentClass = NULL;
    this->LobbyCourseSelectGuestComponent = NULL;
    this->LobbyCourseSelectVoteComponentClass = NULL;
    this->LobbyCourseSelectVoteComponent = NULL;
    this->LobbyCourseSelectWaitComponentClass = NULL;
    this->LobbyCourseSelectWaitComponent = NULL;
    this->LobbyCourseSelectRandomComponentClass = NULL;
    this->LobbyCourseSelectRandomComponent = NULL;
}

void ALobbyCourseSelectSequence::Setup(const FLobbyCourseSelectData& LobbyCourseSelectData, TArray<EStageId>& StageIds) {
}

void ALobbyCourseSelectSequence::SetNextCourseSelectSequenceState_Implementation(ELobbyCourseSelectState InState, ELobbyCourseSelectState PrevState) {
}

void ALobbyCourseSelectSequence::OnInitIdleState_Implementation() {
}

void ALobbyCourseSelectSequence::OnInitExitState_Implementation() {
}

FLobbyCourseSelectData ALobbyCourseSelectSequence::GetLobbyCourseSelectData() const {
    return FLobbyCourseSelectData{};
}

void ALobbyCourseSelectSequence::DecideCalllback(EStageId& StageId) {
}

void ALobbyCourseSelectSequence::CourseDecideCallback() {
}


