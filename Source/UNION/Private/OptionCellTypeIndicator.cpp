#include "OptionCellTypeIndicator.h"

UOptionCellTypeIndicator::UOptionCellTypeIndicator() {
    this->TXT_SettingName = NULL;
    this->Left_Arrow = NULL;
    this->Right_Arrow = NULL;
    this->HB_Bar = NULL;
    this->DSP_Indicator = NULL;
}

UWidget* UOptionCellTypeIndicator::OnRightNavigation(EUINavigation InNavigation) {
    return NULL;
}

void UOptionCellTypeIndicator::OnPopupDecision(bool isApply) {
}

UWidget* UOptionCellTypeIndicator::OnLeftNavigation(EUINavigation InNavigation) {
    return NULL;
}


void UOptionCellTypeIndicator::ChangeIndicatorValue(int32 InValue) {
}



