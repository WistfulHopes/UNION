#include "DecisionWidget.h"

UDecisionWidget::UDecisionWidget() {
    this->TXT_OK = NULL;
    this->DSP_Player_Cursor = NULL;
    this->FocusSoundCue = NULL;
    this->CancelSoundCue = NULL;
}

void UDecisionWidget::SetText(const FText& InText) {
}

void UDecisionWidget::SetCursorVisible(bool IsVisible) {
}





int32 UDecisionWidget::GetPlayerIndex() const {
    return 0;
}


