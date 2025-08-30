#include "WidgetManBaseWidget.h"

UWidgetManBaseWidget::UWidgetManBaseWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bHasScriptImplementedTick = false;
    this->ShowDebugInfo = true;
}

void UWidgetManBaseWidget::RemoveChild(UUserWidget* Widget, bool& IsSucceeded) {
}

void UWidgetManBaseWidget::DetachDebugStringObject(UWidgetManDebugString* DebugStringObject) {
}

void UWidgetManBaseWidget::ClearDebugString() {
}

void UWidgetManBaseWidget::AttachDebugStringObject(UWidgetManDebugString* DebugStringObject) {
}

void UWidgetManBaseWidget::AppendDebugString(const FString& String__const) {
}

void UWidgetManBaseWidget::AddChild(UUserWidget* ChildWidget, UCanvasPanelSlot* ChildSlot, int32 ZOrder) {
}


