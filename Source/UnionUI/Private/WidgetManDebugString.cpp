#include "WidgetManDebugString.h"

UWidgetManDebugString::UWidgetManDebugString() {
    this->PositionX = 32.00f;
    this->PositionY = 32.00f;
    this->FontSize = 14;
    this->ShowHideFlag = true;
    this->ShadowOffsetX = 2.00f;
    this->ShadowOffsetY = 2.00f;
}

void UWidgetManDebugString::SetShowHide(bool Show) {
}

void UWidgetManDebugString::SetShadowColorAndOffset(FLinearColor NewColor, float NewOffsetX, float NewOffsetY) {
}

void UWidgetManDebugString::SetPosition(float NewX, float NewY) {
}

void UWidgetManDebugString::SetFontSize(int32 NewFontSize) {
}

void UWidgetManDebugString::SetColor(FLinearColor NewColor) {
}

void UWidgetManDebugString::GetDebugString(FString& String) {
}

void UWidgetManDebugString::Draw_Internal(FPaintContext& PaintContext) {
}

void UWidgetManDebugString::ClearDebugString() {
}

void UWidgetManDebugString::AppendDebugString(const FString& InString) {
}


