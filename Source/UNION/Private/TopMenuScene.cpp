#include "TopMenuScene.h"

UTopMenuScene::UTopMenuScene() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->GameModeMenu = NULL;
    this->SubMenu = NULL;
    this->BtnPlay_In = NULL;
    this->BtnPlay_Loop = NULL;
    this->BtnPlay_Out = NULL;
    this->BtnPlay_to_BtnMode = NULL;
    this->BtnMode_Loop = NULL;
    this->BtnMode_Change_Out = NULL;
    this->BtnMode_Change_In = NULL;
    this->BtnMode_to_BtnPlay = NULL;
    this->BtnMode_Out = NULL;
    this->DebugUnLockWireless = false;
    this->TopMenuState = ETopMenuSequenceState::TopMenuTop;
    this->PlayModeButtonsPanel = NULL;
    this->PlayerNumButtonsPanel = NULL;
    this->GameModeButtonsPanel = NULL;
}

void UTopMenuScene::SetupPlayMode_Implementation(const TArray<ETopMenuPlayMode>& TopMenuPlayModeArr) {
}

void UTopMenuScene::SetupPlayerNum_Implementation() {
}

void UTopMenuScene::SetupGameMode_Implementation() {
}

void UTopMenuScene::SetTopMenuSequenceState_Implementation(ETopMenuSequenceState State) {
}







void UTopMenuScene::InitializeTopMenu_Implementation(ETopMenuSequenceState InitState) {
}

void UTopMenuScene::InitializePlayMode_Implementation(ETopMenuSequenceState PrevState) {
}

void UTopMenuScene::InitializePlayerNum_Implementation() {
}

void UTopMenuScene::InitializeModeMenu_Implementation(const ETopMenuPlayMode PlayMode, const TArray<ETopMenuGameMode>& BeltButtonTypeArr) {
}

void UTopMenuScene::InitializeGameMode_Implementation(const ETopMenuPlayMode PlayMode, const TArray<ETopMenuGameMode>& BeltButtonTypeArr, ETopMenuSequenceState PrevState) {
}

ECommonMenuButtonType UTopMenuScene::CalcTopMenuSequenceSubMenuToCommonMenuButtonType(ETopMenuSequenceState PrevSequence) {
    return ECommonMenuButtonType::None;
}

bool UTopMenuScene::CalcTopMenuSequenceSubMenu(ETopMenuSequenceState PrevSequence) {
    return false;
}


