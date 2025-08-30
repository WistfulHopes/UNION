#include "PopupWindowTutorial.h"

UPopupWindowTutorial::UPopupWindowTutorial() {
    this->IsSetText = false;
    this->DispTextIndex = 0;
}

void UPopupWindowTutorial::ResetDispText() {
}

bool UPopupWindowTutorial::IsTextDisp(float MovieTime, bool IsRepeat) {
    return false;
}


