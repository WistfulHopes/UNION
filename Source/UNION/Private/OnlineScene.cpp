#include "OnlineScene.h"

UOnlineScene::UOnlineScene() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->SubMenu = NULL;
    this->MainState = EOnlineSequenceState::Idle;
    this->GameModeButtonsPanel = NULL;
}

void UOnlineScene::SetVisibleSubButtons(ESlateVisibility InVisibility) {
}

void UOnlineScene::SetVisibleModeButtons(ESlateVisibility InVisibility) {
}

void UOnlineScene::SetupOnline_Implementation() {
}

void UOnlineScene::SetupGameMode_Implementation() {
}

void UOnlineScene::SetNotOpenTipsWindow(bool InEnable) {
}

void UOnlineScene::ResetBackFlagEvent() {
}

bool UOnlineScene::IstNotOpenTipsWindow() {
    return false;
}

void UOnlineScene::InitializeOnline_Implementation() {
}

void UOnlineScene::InitializeGameMode_Implementation(const TArray<EOnlineGameMode>& BeltButtonTypeArr, const bool FocusMainButton) {
}


