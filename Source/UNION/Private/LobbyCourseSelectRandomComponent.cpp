#include "LobbyCourseSelectRandomComponent.h"
#include "EMenuSequenceSubState.h"

ULobbyCourseSelectRandomComponent::ULobbyCourseSelectRandomComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("LobbyCourseSelectRandom");
    this->DefaultMenuState = EMenuSequenceSubState::SelectCourseRandom;
    this->IsFirstUpdate = false;
}


