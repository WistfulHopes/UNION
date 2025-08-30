#include "LobbyMatchingUIState.h"

ULobbyMatchingUIState::ULobbyMatchingUIState() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->HeaderPlayerjoinText = NULL;
    this->HeaderCharaIconPanelOverlay = NULL;
    this->HeaderGameModeIcon = NULL;
    this->bIsPlayRemind = false;
}

void ULobbyMatchingUIState::SetOnlineGameModeIcon_Implementation(bool bIsMulti, EOnlineGameMode InOnlineGameMode) {
}

void ULobbyMatchingUIState::SetLoginStatus(int32 InIndex, bool bIsOnline) {
}

void ULobbyMatchingUIState::SetIsReadyStatus(int32 InIndex, bool bIsReady) {
}

void ULobbyMatchingUIState::SetDriverIcon(int32 InIndex, EDriverId InDriverId, TSoftObjectPtr<UTexture2D> InTexture) {
}

void ULobbyMatchingUIState::PlayLoopRemindAnim_Implementation(bool bPlayLoopRemind) {
}

void ULobbyMatchingUIState::PlayInOutAnimation_Implementation(bool bIsInAnim) {
}


