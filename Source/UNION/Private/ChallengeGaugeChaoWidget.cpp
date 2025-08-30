#include "ChallengeGaugeChaoWidget.h"

UChallengeGaugeChaoWidget::UChallengeGaugeChaoWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->_WaitCycleTime = 10.00f;
    this->_RestCycleTime = 10.00f;
    this->_PositionXMax = 2180.00f;
    this->In = NULL;
    this->Out = NULL;
    this->Move_Loop = NULL;
    this->Wait_Loop = NULL;
    this->Wait_To_Rest = NULL;
    this->Rest_Loop = NULL;
    this->Rest_To_Wait = NULL;
    this->Get_S_In = NULL;
    this->Get_S_Loop = NULL;
    this->Get_L_In = NULL;
    this->Get_L_Loop = NULL;
    this->Change_In = NULL;
    this->Change_Out = NULL;
}

void UChallengeGaugeChaoWidget::OnAnimationFinished_Get_S() {
}

void UChallengeGaugeChaoWidget::OnAnimationFinished_Get_L() {
}


