#include "WidgetManComponent.h"

UWidgetManComponent::UWidgetManComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CreateDebugInfo = true;
    this->ShowDebugInfo = true;
    this->BaseWidgetZOrder = 0;
    this->DebugStringObject = NULL;
    this->BaseWidget = NULL;
}

void UWidgetManComponent::SwapTopWidgetByIndex(int32 IndexFromTop, bool& IsSucceeded) {
}

void UWidgetManComponent::SwapTopWidget(UUserWidget* Widget, bool& IsSucceeded) {
}

int32 UWidgetManComponent::PushWidget(UUserWidget* Widget, UObject* Logic, EWidgetManZLayer ZLayer) {
    return 0;
}

void UWidgetManComponent::PushSubWidget(UUserWidget* SubWidget, UObject* Logic) {
}

void UWidgetManComponent::PopWidget(bool& IsSucceeded) {
}

void UWidgetManComponent::PopAllWidgets() {
}

void UWidgetManComponent::NotifyRegainPriority() {
}

void UWidgetManComponent::NotifyPushed(UUserWidget* Widget, UObject* Logic) {
}

void UWidgetManComponent::NotifyPoped(UUserWidget* Widget, UObject* Logic) {
}

void UWidgetManComponent::NotifyLostPriority() {
}

void UWidgetManComponent::GetTopWidgetCount(int32& WidgetCount) {
}

void UWidgetManComponent::GetTopWidget(int32 Index, bool& IsSucceeded, UUserWidget*& Widget, bool& IsSubWidget, UObject*& Logic) {
}

void UWidgetManComponent::FindWidget(UUserWidget* Widget, bool& IsFound, int32& IndexFromTop, int32& IndexInGroup) {
}

void UWidgetManComponent::EventEndStack() {
}

void UWidgetManComponent::EventEndDebug() {
}

void UWidgetManComponent::EventEndBaseWidget() {
}

void UWidgetManComponent::EventDrawDebug() {
}

void UWidgetManComponent::EventBeginStack() {
}

void UWidgetManComponent::EventBeginDebug() {
}

void UWidgetManComponent::EventBeginBaseWidget() {
}

void UWidgetManComponent::DetachDebugStringObject(UWidgetManDebugString* DebugStringObjectRef) {
}

void UWidgetManComponent::AttachDebugStringObject(UWidgetManDebugString* DebugStringObjectRef) {
}

void UWidgetManComponent::AddWidgetToTopAsGroup(UUserWidget* Widget, UObject* Logic, bool& IsSucceeded) {
}


