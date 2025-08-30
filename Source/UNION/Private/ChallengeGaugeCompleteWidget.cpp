#include "ChallengeGaugeCompleteWidget.h"

UChallengeGaugeCompleteWidget::UChallengeGaugeCompleteWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Complete_In = NULL;
    this->Complete_Loop = NULL;
    this->Complete_Out = NULL;
}

void UChallengeGaugeCompleteWidget::OnAnimationFinished_Out() {
}

void UChallengeGaugeCompleteWidget::OnAnimationFinished_In() {
}


