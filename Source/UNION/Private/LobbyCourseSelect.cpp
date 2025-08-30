#include "LobbyCourseSelect.h"
#include "EMenuSequenceSubState.h"

ULobbyCourseSelect::ULobbyCourseSelect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("LobbyCourseSelectOnline");
    this->DefaultMenuState = EMenuSequenceSubState::SelectCourseOnline;
    this->ChildCourseSelectSequence = NULL;
}

void ULobbyCourseSelect::Setup(const FLobbyCourseSelectData& LobbyCourseSelectData, TArray<EStageId>& StageIds) {
}

void ULobbyCourseSelect::DecideCalllback(EStageId& StageId) {
}


