#include "ChallengeWidget.h"

UChallengeWidget::UChallengeWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->SeOk = NULL;
    this->SeBack = NULL;
    this->_ListTabWidget = NULL;
    this->_ListPanelWidget = NULL;
    this->_LeftListPanelWidget = NULL;
    this->_RightListPanelWidget = NULL;
    this->_GaugeWidget = NULL;
    this->_RewardGetWindowWidget = NULL;
    this->_ResultDonpaTicket = NULL;
    this->_SECueCategoryChange = NULL;
    this->Challenge_In = NULL;
    this->Challenge_Loop = NULL;
    this->Challenge_Out = NULL;
    this->Challenge_Left_To_Right = NULL;
    this->Challenge_Right_To_Left = NULL;
}

void UChallengeWidget::OnTipsWindowClosed() {
}

void UChallengeWidget::OnRewardGetWindowOpened() {
}

void UChallengeWidget::OnRewardGetWindowFinished() {
}

void UChallengeWidget::OnChangeControllerInputType(EAppControllerInputType BeforeType, EAppControllerInputType AfterType) {
}

void UChallengeWidget::InAndPlayGauge(float NewProgress) {
}



