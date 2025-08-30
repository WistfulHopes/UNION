#include "CourseSelectRivalWidget.h"

UCourseSelectRivalWidget::UCourseSelectRivalWidget() {
    this->_RootCanvasPanel = NULL;
    this->_CharaIconImage = NULL;
    this->_CharaIconSwitcher = NULL;
    this->RivalNext_In = NULL;
    this->RivalNext_Loop = NULL;
    this->RivalNext_Out = NULL;
}


void UCourseSelectRivalWidget::UpdateDisplay(EDriverId RivalDriverId, int32 RivalWinCompleteThreshold, int32 RivalWinCompleteCount) {
}

void UCourseSelectRivalWidget::SetInSEEnabled(bool Enabled) {
}

void UCourseSelectRivalWidget::Out() {
}

void UCourseSelectRivalWidget::In() {
}

FText UCourseSelectRivalWidget::GetTxtRivalCompleteNum() {
    return FText::GetEmpty();
}


