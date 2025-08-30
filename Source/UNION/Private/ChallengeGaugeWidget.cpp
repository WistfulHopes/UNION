#include "ChallengeGaugeWidget.h"

UChallengeGaugeWidget::UChallengeGaugeWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->SeChaoMove = NULL;
    this->SeBgChange = NULL;
    this->SeBgChangeSpecial = NULL;
    this->_ChaoMoveVelocity = 200.00f;
    this->_BGWidget = NULL;
    this->_CompleteWidget = NULL;
    this->_ChaoWidget = NULL;
    this->PopupWindow = NULL;
    this->Loop_Gauge = NULL;
    this->Change_To_Complete = NULL;
    this->Loop_Complete = NULL;
}

void UChallengeGaugeWidget::OnSpecialUnlockPopupClosed(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex) {
}


