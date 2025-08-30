#include "OnlineReadySceneBase.h"

UOnlineReadySceneBase::UOnlineReadySceneBase() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->SubMenu = NULL;
    this->BaseOverLay = NULL;
    this->Arrow = NULL;
    this->ReadyButton = NULL;
    this->ReadyMainTextWidget = NULL;
    this->ReadySubTextWidget = NULL;
    this->ReadySubIconWidget = NULL;
    this->ReadySubInfoReady = NULL;
    this->ReadyMainText = NULL;
    this->ReadyUIBaseSwitch = NULL;
    this->FixQue = NULL;
}

void UOnlineReadySceneBase::SwitchReadyButtonInteractable_Implementation(bool bInteractable) {
}

void UOnlineReadySceneBase::StartSearch_Implementation() {
}

void UOnlineReadySceneBase::SetVisibleSubButtons(ESlateVisibility InVisibility) {
}

void UOnlineReadySceneBase::SetVisibleSearching(ESlateVisibility InVisibility) {
}

void UOnlineReadySceneBase::SetVisibleReadyTexts(ESlateVisibility InVisibility) {
}

void UOnlineReadySceneBase::SetVisibleReadys(ESlateVisibility InVisibility) {
}

void UOnlineReadySceneBase::SetupGameMode_Implementation() {
}

void UOnlineReadySceneBase::SetUpDecideReady_Implementation(bool bIsAloneLobby) {
}

void UOnlineReadySceneBase::SetSelectReadyButton(bool bIsSelect) {
}

void UOnlineReadySceneBase::SetMainText(FText InMainText) {
}

void UOnlineReadySceneBase::SetGotoMatchingLobby() {
}

void UOnlineReadySceneBase::ReadyCancel() {
}

void UOnlineReadySceneBase::PlayLoopReadyDecideAnim_Implementation(bool bIsDecide) {
}

void UOnlineReadySceneBase::PlayInReadyAnim_Implementation() {
}

void UOnlineReadySceneBase::PlayDecideAnim_Implementation() {
}

void UOnlineReadySceneBase::InitializeGameMode_Implementation(const bool FocusMainButton, bool InitSubMenu) {
}

void UOnlineReadySceneBase::ChangeStateWaitingOtherPlayer() {
}

void UOnlineReadySceneBase::ChangeStateReady() {
}


