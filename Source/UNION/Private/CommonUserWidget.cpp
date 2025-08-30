#include "CommonUserWidget.h"

UCommonUserWidget::UCommonUserWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->CurrentAnimPlayer = NULL;
}

void UCommonUserWidget::StopAnimationEx() {
}

void UCommonUserWidget::PlayAnimationExBPWithFinished(UWidgetAnimation* Animation, UWidgetAnimation* LoopAnimation, const FCommonUserWidgetAnimFinishedDynamicEvent& OnFinished) {
}

void UCommonUserWidget::PlayAnimationExBP(UWidgetAnimation* Animation, UWidgetAnimation* LoopAnimation) {
}


