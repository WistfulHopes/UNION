#include "CourseSelectRivalChoiceButton.h"

UCourseSelectRivalChoiceButton::UCourseSelectRivalChoiceButton() {
    this->_CharaImage = NULL;
    this->_CharaNameTextBlock = NULL;
    this->_Ready = false;
}

void UCourseSelectRivalChoiceButton::StartLoad(EDriverId RivalDriverId) {
}


bool UCourseSelectRivalChoiceButton::IsReady() const {
    return false;
}

EDriverId UCourseSelectRivalChoiceButton::GetDriverID() const {
    return EDriverId::Sonic;
}







