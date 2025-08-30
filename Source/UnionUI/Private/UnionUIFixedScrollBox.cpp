#include "UnionUIFixedScrollBox.h"

UUnionUIFixedScrollBox::UUnionUIFixedScrollBox() {
    this->ScrollTime = 0.10f;
    this->ScrollEasingFunc = EEasingFunc::Linear;
    this->FocusSwitchTiming = 0.50f;
    this->ScrollUpdateInterval = 0.02f;
    this->ScrollAmount = 0.00f;
    this->DisplayItemNum = 0;
}

void UUnionUIFixedScrollBox::ScrollInternal() {
}


