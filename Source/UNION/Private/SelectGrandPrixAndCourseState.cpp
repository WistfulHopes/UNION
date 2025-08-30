#include "SelectGrandPrixAndCourseState.h"
#include "EMenuSequenceSubState.h"

USelectGrandPrixAndCourseState::USelectGrandPrixAndCourseState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultMenuState = EMenuSequenceSubState::SelectCourse;
    this->bSelectGrandPrixOnly = false;
    this->SelectedStageIdSingle = EStageId::MainBegin;
    this->PrevSelectedStageIdSingle = EStageId::Invalid;
    this->SelectedGrandprixId = EGrandPrixId::FirstGP;
    this->bRivalChanged = false;
    this->LastSelectDriverId = EDriverId::None;
    this->CourseSelectWidget = NULL;
    this->PopupWindow = NULL;
}

void USelectGrandPrixAndCourseState::TransitionToTimeTrial() {
}

void USelectGrandPrixAndCourseState::SetupRivalLevelDownPopup(bool& bSpawnPopup) {
}

void USelectGrandPrixAndCourseState::SetNextMachineSelectState(EMachineSelectState InState) {
}

void USelectGrandPrixAndCourseState::OnRivalLevelDownPopupClose(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex) {
}

void USelectGrandPrixAndCourseState::GetGrandPrixStatus(TArray<FGrandPrixStatus>& OutGrandPrixStatus) {
}


