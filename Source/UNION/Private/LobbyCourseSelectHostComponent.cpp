#include "LobbyCourseSelectHostComponent.h"
#include "EMenuSequenceSubState.h"

ULobbyCourseSelectHostComponent::ULobbyCourseSelectHostComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("LobbyCourseSelectHost");
    this->DefaultMenuState = EMenuSequenceSubState::SelectCourseHost;
    this->CourseSelectWidgetBase = NULL;
    this->DecisionSoundCue = NULL;
}

void ULobbyCourseSelectHostComponent::DecideStageCallback(EStageId StageId) {
}


