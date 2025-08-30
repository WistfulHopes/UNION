#include "LobbyMatchingCharaIcon.h"

ULobbyMatchingCharaIcon::ULobbyMatchingCharaIcon() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->CharaIcon = NULL;
    this->WS_StatusIcon = NULL;
    this->PlayerIndex = 0;
}

void ULobbyMatchingCharaIcon::SetChangeStatusIcon(bool bIsReady) {
}

void ULobbyMatchingCharaIcon::SetChangeOnlineIcon(bool bIsOnline) {
}



