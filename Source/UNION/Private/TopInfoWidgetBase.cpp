#include "TopInfoWidgetBase.h"

UTopInfoWidgetBase::UTopInfoWidgetBase() : UUserWidget(FObjectInitializer::Get()) {
    this->ValidPageCategory.AddDefaulted(7);
}

void UTopInfoWidgetBase::WatchedPage(bool IsCenterCategoryL, bool IsCenterCategoryR) {
}


void UTopInfoWidgetBase::StartRightKeyPress() {
}

void UTopInfoWidgetBase::StartLeftKeyPress() {
}

void UTopInfoWidgetBase::SetupEnablePageCategory(ETopInfoWidgetPageCategory ReturnPage) {
}

void UTopInfoWidgetBase::SetPagePrev() {
}

void UTopInfoWidgetBase::SetPageNext() {
}

void UTopInfoWidgetBase::ReleaseRightKey() {
}

void UTopInfoWidgetBase::ReleaseLeftKey() {
}

bool UTopInfoWidgetBase::IsRightKeyPressLoop() {
    return false;
}

bool UTopInfoWidgetBase::IsNewPrevPage() {
    return false;
}

bool UTopInfoWidgetBase::IsNewNextPage() {
    return false;
}

bool UTopInfoWidgetBase::IsNewCurrentPage() {
    return false;
}

bool UTopInfoWidgetBase::IsNewBeforePrevPage() {
    return false;
}

bool UTopInfoWidgetBase::IsNewAfterNextPage() {
    return false;
}

bool UTopInfoWidgetBase::IsLeftKeyPressLoop() {
    return false;
}

ETopInfoWidgetPageCategory UTopInfoWidgetBase::GetPrevPage() {
    return ETopInfoWidgetPageCategory::FestaInfo;
}

ETopInfoWidgetPageCategory UTopInfoWidgetBase::GetNextPage() {
    return ETopInfoWidgetPageCategory::FestaInfo;
}

ETopInfoWidgetPageCategory UTopInfoWidgetBase::GetCurrentPage() {
    return ETopInfoWidgetPageCategory::FestaInfo;
}

ETopInfoWidgetPageCategory UTopInfoWidgetBase::GetBeforePrevPage() {
    return ETopInfoWidgetPageCategory::FestaInfo;
}

ETopInfoWidgetPageCategory UTopInfoWidgetBase::GetAfterNextPage() {
    return ETopInfoWidgetPageCategory::FestaInfo;
}


