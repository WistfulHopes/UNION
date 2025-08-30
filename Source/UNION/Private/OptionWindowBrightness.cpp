#include "OptionWindowBrightness.h"

UOptionWindowBrightness::UOptionWindowBrightness() {
    this->bIsFocusable = true;
    this->Left_Arrow = NULL;
    this->Right_Arrow = NULL;
    this->Left = NULL;
    this->Right = NULL;
    this->PRM_Cursor = NULL;
    this->BrightnessImageMin = -0.50f;
    this->BrightnessImageMax = 0.50f;
}

void UOptionWindowBrightness::ChangeGageValue(int32 InValue) {
}



