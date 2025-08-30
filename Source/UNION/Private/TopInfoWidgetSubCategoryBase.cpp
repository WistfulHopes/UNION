#include "TopInfoWidgetSubCategoryBase.h"

UTopInfoWidgetSubCategoryBase::UTopInfoWidgetSubCategoryBase() : UUserWidget(FObjectInitializer::Get()) {
    this->ButtonStandard = NULL;
}


void UTopInfoWidgetSubCategoryBase::UpdateButtonVisible(ETopInfoWidgetPageCategory PageCategory) {
}

void UTopInfoWidgetSubCategoryBase::SetupButtonStandard(UCommonMenuPopupSubBtnStandard* ButtonInstance) {
}


