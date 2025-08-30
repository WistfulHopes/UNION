#include "TopMenuGameModeMenu.h"

UTopMenuGameModeMenu::UTopMenuGameModeMenu() : UUserWidget(FObjectInitializer::Get()) {
    this->BackFocusButton = NULL;
}

void UTopMenuGameModeMenu::SetupGameModeMenu_Implementation() {
}

void UTopMenuGameModeMenu::InitializeGameModeMenu_Implementation(const TArray<ETopMenuGameMode>& BeltButtonTypeArr, UCommonMenuSubMenu* SubMenu) {
}


