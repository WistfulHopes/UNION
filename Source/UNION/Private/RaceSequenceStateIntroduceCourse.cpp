#include "RaceSequenceStateIntroduceCourse.h"
#include "ERaceSequenceState.h"

URaceSequenceStateIntroduceCourse::URaceSequenceStateIntroduceCourse(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("IntroduceCourse");
    this->DefaultMenuState = ERaceSequenceState::IntroduceCourse;
    this->RaceBeforeSharedData = NULL;
}


