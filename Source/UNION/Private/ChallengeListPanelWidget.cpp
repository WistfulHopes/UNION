#include "ChallengeListPanelWidget.h"

UChallengeListPanelWidget::UChallengeListPanelWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->_PlateSwitcher = NULL;
    this->_ContentPanel = NULL;
    this->_TitleTextBlock = NULL;
    this->_ConditionTextScroll = NULL;
    this->_ProgressTextBlock = NULL;
    this->_CompleteIconImage = NULL;
    this->_LockPanel = NULL;
    this->_SECueChallengeChange = NULL;
}

UWidget* UChallengeListPanelWidget::OnPanelNavigation(EUINavigation InNavigation) {
    return NULL;
}

UWidget* UChallengeListPanelWidget::OnButtonNavigation(EUINavigation InNavigation) {
    return NULL;
}

void UChallengeListPanelWidget::OnButtonDecided(UUnionUIButtonBase* Button) {
}


