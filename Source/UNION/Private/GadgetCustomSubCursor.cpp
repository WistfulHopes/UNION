#include "GadgetCustomSubCursor.h"

UGadgetCustomSubCursor::UGadgetCustomSubCursor() {
    this->ControlPlayerIndex = 0;
    this->bCanFocus = true;
    this->bCanMove = true;
    this->CursorImageRef = NULL;
}

void UGadgetCustomSubCursor::SetIsCanMove_Implementation(const bool InIsCanMove) {
}

void UGadgetCustomSubCursor::SetControlPlayerIndex(const int32 InPlayerIndex, const bool InChangeCursorImage) {
}


void UGadgetCustomSubCursor::NativeOnInitialized() {
}

void UGadgetCustomSubCursor::NativeConstruct() {
}



