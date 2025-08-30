#include "OnlineHeaderGameModeIconBase.h"

UOnlineHeaderGameModeIconBase::UOnlineHeaderGameModeIconBase() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->ModeIcon = NULL;
}

void UOnlineHeaderGameModeIconBase::SetOnlineModeIcon(EOnlineGameMode InGameMode) {
}

void UOnlineHeaderGameModeIconBase::PlayOnlineModeIconAnim_Implementation(bool bIsInAnim) {
}


