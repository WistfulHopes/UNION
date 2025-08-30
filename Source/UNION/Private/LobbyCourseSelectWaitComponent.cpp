#include "LobbyCourseSelectWaitComponent.h"
#include "EMenuSequenceSubState.h"

ULobbyCourseSelectWaitComponent::ULobbyCourseSelectWaitComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("LobbyCourseSelectWait");
    this->DefaultMenuState = EMenuSequenceSubState::SelectCourseWait;
}


