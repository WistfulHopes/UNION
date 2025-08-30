#include "OptionCellTypeGauge.h"

UOptionCellTypeGauge::UOptionCellTypeGauge() {
    this->TXT_SettingName = NULL;
    this->Left_Arrow = NULL;
    this->Right_Arrow = NULL;
    this->PRM_Cursor = NULL;
}

UWidget* UOptionCellTypeGauge::OnRightNavigation(EUINavigation InNavigation) {
    return NULL;
}

UWidget* UOptionCellTypeGauge::OnLeftNavigation(EUINavigation InNavigation) {
    return NULL;
}

void UOptionCellTypeGauge::ChangeGageValue(int32 InValue) {
}



