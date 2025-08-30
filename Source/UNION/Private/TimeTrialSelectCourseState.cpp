#include "TimeTrialSelectCourseState.h"
#include "EMenuSequenceSubState.h"

UTimeTrialSelectCourseState::UTimeTrialSelectCourseState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("SelectCource");
    this->DefaultMenuState = EMenuSequenceSubState::SelectCourse;
    this->SelectedStageIdSingle = EStageId::MainBegin;
    this->SelectedGrandprixId = EGrandPrixId::FirstGP;
    this->LastSelectDriverId = EDriverId::None;
    this->CourseSelectWidget = NULL;
    this->AlbumTexture = NULL;
}

void UTimeTrialSelectCourseState::SetNextMachineSelectState(EMachineSelectState InState) {
}


