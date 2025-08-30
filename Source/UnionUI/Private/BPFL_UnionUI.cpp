#include "BPFL_UnionUI.h"

UBPFL_UnionUI::UBPFL_UnionUI() {
}

void UBPFL_UnionUI::GetWidgetRenderTransform(const UWidget* InWidget, FWidgetTransform& OutRenderTransform) {
}

int32 UBPFL_UnionUI::GetUserIndexByMouseEvent(const FPointerEvent& InInputEvent) {
    return 0;
}

int32 UBPFL_UnionUI::GetUserIndexByInputEvent(const FInputEvent& InInputEvent) {
    return 0;
}

int32 UBPFL_UnionUI::GetUserIndexByFocusEvent(const FFocusEvent& InFocusEvent) {
    return 0;
}

FText UBPFL_UnionUI::GetTextAddCommasToValue(const int32& InValue) {
    return FText::GetEmpty();
}

FText UBPFL_UnionUI::GetTerminologyTextByText(const FText InTex) {
    return FText::GetEmpty();
}

FText UBPFL_UnionUI::GetTerminologyText(const FName InTableId, const FString& InKey) {
    return FText::GetEmpty();
}

void UBPFL_UnionUI::GetKeyboardControlDir(const FKeyEvent& InKeyEvent, EUnionUIControlDir& OutControlDir) {
}

void UBPFL_UnionUI::GetJoyStickControlDir(const FKeyEvent& InKeyEvent, EUnionUIControlDir& OutControlDir) {
}

void UBPFL_UnionUI::GetDPadControlDir(const FKeyEvent& InKeyEvent, EUnionUIControlDir& OutControlDir) {
}

void UBPFL_UnionUI::GetArrowKeyControlDir(const FKeyEvent& InKeyEvent, EUnionUIControlDir& OutControlDir) {
}

ECommonMenuButtonType UBPFL_UnionUI::ConvertMenuButtonType(const FString& InString, bool& OutIsValid) {
    return ECommonMenuButtonType::None;
}


