#include "LobbyCourseSelectGuestComponent.h"
#include "EMenuSequenceSubState.h"

ULobbyCourseSelectGuestComponent::ULobbyCourseSelectGuestComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("LobbyCourseSelectGuest");
    this->DefaultMenuState = EMenuSequenceSubState::SelectCourseGuest;
    this->IsFirstUpdate = false;
}

void ULobbyCourseSelectGuestComponent::OnCancelSelectCourse(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}


