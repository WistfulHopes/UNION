#include "CourseSelectRivalCutinWidget.h"

UCourseSelectRivalCutinWidget::UCourseSelectRivalCutinWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->_RivalDriverIdNormal = EDriverId::Sonic;
    this->_RivalDriverIdHighLevel = EDriverId::Sonic;
    this->_MaxRivalLevel = 7;
    this->_RivalLevelNormal = 1;
    this->_RivalLevelPower = 1;
    this->_BlankIconHideCount = 2;
    this->bPlayRivalChoice = false;
    this->_CharaImage = NULL;
    this->_CharaShadowImage = NULL;
    this->_CharaNameTextBlock = NULL;
    this->RivalCutin_InOut = NULL;
}

void UCourseSelectRivalCutinWidget::StartLoad() {
}

void UCourseSelectRivalCutinWidget::PlayVoice(EDriverId DriverId) {
}

void UCourseSelectRivalCutinWidget::Play() {
}

bool UCourseSelectRivalCutinWidget::IsReady() const {
    return false;
}


