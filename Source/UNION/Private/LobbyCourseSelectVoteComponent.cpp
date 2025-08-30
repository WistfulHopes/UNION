#include "LobbyCourseSelectVoteComponent.h"
#include "EMenuSequenceSubState.h"

ULobbyCourseSelectVoteComponent::ULobbyCourseSelectVoteComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("LobbyCourseSelectVote");
    this->DefaultMenuState = EMenuSequenceSubState::SelectCourseVote;
}

void ULobbyCourseSelectVoteComponent::OnUnFocusSelectCourse(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ULobbyCourseSelectVoteComponent::OnFocusSelectCourse(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ULobbyCourseSelectVoteComponent::OnDecisionSelectCourse(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ULobbyCourseSelectVoteComponent::OnCancelSelectCourse(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}


