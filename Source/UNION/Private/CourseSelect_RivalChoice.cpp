#include "CourseSelect_RivalChoice.h"

UCourseSelect_RivalChoice::UCourseSelect_RivalChoice() : UUserWidget(FObjectInitializer::Get()) {
    this->ChoiceBtnCurrent = ERivalType::RivalNormal;
    this->_CutInCharaImage = NULL;
    this->_ChallengeTextBlock = NULL;
    this->_BonusTextBlock = NULL;
}

void UCourseSelect_RivalChoice::StartLoad(EDriverId InRivalDriverId) {
}

void UCourseSelect_RivalChoice::SetChoiceRivalData(EDriverId DriverId, ERivalType RivalType) {
}

void UCourseSelect_RivalChoice::PlayVoice(EDriverId DriverId) {
}

bool UCourseSelect_RivalChoice::IsReady() const {
    return false;
}

void UCourseSelect_RivalChoice::InitFooter() {
}

void UCourseSelect_RivalChoice::FinishedWidgetFooter() {
}

void UCourseSelect_RivalChoice::BeginChoiceFooter() {
}


