#include "WidgetManContainer.h"

UWidgetManContainer::UWidgetManContainer() {
    this->Logic = NULL;
    this->IsSubWidget = false;
    this->ContainerZOrder = 0;
}

void UWidgetManContainer::SetZOrder(int32 InZOrder) {
}

void UWidgetManContainer::OffsetZOrder(int32 Offset) {
}

void UWidgetManContainer::IsSubWidgetContainer(bool& bSubWidget) {
}

void UWidgetManContainer::Initialize(UUserWidget* Widget, const int32 ZOrder, UCanvasPanelSlot* Slot, UObject* LogicObjectRef, bool bSubWidget) {
}

void UWidgetManContainer::GetWidgetCount(int32& WidgetCount) {
}

void UWidgetManContainer::GetWidgetAt(int32 Index, bool& IsSucceeded, UUserWidget*& Widget, UObject*& LogicObject) {
}

void UWidgetManContainer::FindWidget(UUserWidget* Widget, bool& IsFound, int32& Index) {
}

void UWidgetManContainer::AddWidget(UUserWidget* Widget, UCanvasPanelSlot* Slot, UObject* LogicObjectRef, bool& bSucceeded) {
}


