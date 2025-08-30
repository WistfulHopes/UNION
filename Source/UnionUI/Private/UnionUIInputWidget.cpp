#include "UnionUIInputWidget.h"

UUnionUIInputWidget::UUnionUIInputWidget() {
}

void UUnionUIInputWidget::VisibilityChange(ESlateVisibility InVisibility) {
}

void UUnionUIInputWidget::UnregisterMainMenu(int32 InPlayerIndex) {
}

void UUnionUIInputWidget::SetAutoRegisterMainMenuEnabled(bool Enabled) {
}

void UUnionUIInputWidget::RegisterMainMenu(int32 InPlayerIndex) {
}

EMainMenuRegistPriority UUnionUIInputWidget::GetRegistPriority_Implementation() const {
    return EMainMenuRegistPriority::AppUI;
}

int32 UUnionUIInputWidget::GetFocusPlayerIndex() const {
    return 0;
}

APlayerController* UUnionUIInputWidget::GetFocusPlayerController() const {
    return NULL;
}


