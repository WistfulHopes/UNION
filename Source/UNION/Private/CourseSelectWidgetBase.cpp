#include "CourseSelectWidgetBase.h"

UCourseSelectWidgetBase::UCourseSelectWidgetBase() : UUserWidget(FObjectInitializer::Get()) {
    this->CenterIndex = 0;
    this->CategoryNum = 15;
    this->CenterPivotIndex = 5;
    this->bGrandPrixOnly = false;
    this->CurrentSelectedGrandPrixId = EGrandPrixId::FirstGP;
    this->CurrentSelectedStageId = EStageId::MainBegin;
    this->bLastRight = true;
    this->CourseSelectSubCategoryIcon.AddDefaulted(11);
    this->GrandPrixIds.AddDefaulted(15);
    this->CourseMaterialNomal.AddDefaulted(3);
    this->CourseMaterialAnotherWorld = NULL;
    this->LastRightLeftAnimation = NULL;
    this->CourseSelect_ShortBox_Loop = NULL;
    this->CourseSelect_Loop = NULL;
    this->CourseSelect_Right = NULL;
    this->CourseSelect_Left = NULL;
    this->CourseSelect_LongBox_Loop = NULL;
    this->CourseSelect_ShortBox_to_LongBox = NULL;
    this->CourseSelect_In = NULL;
}


bool UCourseSelectWidgetBase::StartRotate(bool bRight) {
    return false;
}


void UCourseSelectWidgetBase::OnFinishedRotate() {
}

void UCourseSelectWidgetBase::LotteryMCEvent() {
}




