#include "LobbyCourseSelectSceneBase.h"

ULobbyCourseSelectSceneBase::ULobbyCourseSelectSceneBase() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->Window_In = NULL;
    this->Window_Loop = NULL;
    this->Window_Out = NULL;
    this->MainButtonsPanel = NULL;
    this->DecideCourseIndex = 0;
}

void ULobbyCourseSelectSceneBase::SetFocusableButton_Implementation(bool InFocusable) {
}

void ULobbyCourseSelectSceneBase::SetDecideCourseIndex(int32 InDecideCourseIndex) {
}




void ULobbyCourseSelectSceneBase::OnInitialize_Implementation(const TArray<EStageId>& InCourseId, int32 InDecideCourseIndex) {
}

UUnionUIButtonsPanel* ULobbyCourseSelectSceneBase::GetMainButtonsPanel() {
    return NULL;
}


