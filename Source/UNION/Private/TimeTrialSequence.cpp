#include "TimeTrialSequence.h"

ATimeTrialSequence::ATimeTrialSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CourseSelectUI = NULL;
    this->bIsGhostMachineDisable = false;
    this->bIsLineGuideDisable = false;
}

void ATimeTrialSequence::SetTimeTrialRaceSetting(UTimeTrialSelectCourseState* InSelectCourseState, UGhostSelectState* InGhostSelectState) {
}

void ATimeTrialSequence::OnInitStateIdle_Implementation() {
}

void ATimeTrialSequence::OnInitStateExit_Implementation() {
}


