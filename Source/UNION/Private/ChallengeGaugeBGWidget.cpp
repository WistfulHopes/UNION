#include "ChallengeGaugeBGWidget.h"

UChallengeGaugeBGWidget::UChallengeGaugeBGWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Gauge_BG_Loop = NULL;
    this->Gauge_BG_Change_In = NULL;
    this->Gauge_BG_Change_Out = NULL;
}

void UChallengeGaugeBGWidget::OnAnimationFinished_ChangeOut() {
}

void UChallengeGaugeBGWidget::OnAnimationFinished_ChangeIn() {
}


