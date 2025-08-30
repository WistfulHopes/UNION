#include "CommonMenuSubMenu.h"

UCommonMenuSubMenu::UCommonMenuSubMenu() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->RightFocusButton = NULL;
    this->LeftFocusButton = NULL;
}

void UCommonMenuSubMenu::SetupCommonMenuSubMenu_Implementation() {
}

void UCommonMenuSubMenu::SetNavigationLeftAndRight() {
}

void UCommonMenuSubMenu::SetLastFocusButtonFocusSoundEnable(bool bEnable) {
}

void UCommonMenuSubMenu::SetEnableSubMenu_Implementation(ECommonMenuButtonType InType, bool InEnable) {
}


void UCommonMenuSubMenu::InitializeCommonMenuSubMenu_Implementation(const TArray<ECommonMenuButtonType>& InButtonArr) {
}


