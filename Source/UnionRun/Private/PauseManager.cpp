#include "PauseManager.h"

UPauseManager::UPauseManager() {
}

void UPauseManager::SetIsOnlineMode(bool NewIsOnlineMode) {
}

void UPauseManager::SetGamePaused(bool Paused, int32 RacerIndex) {
}

bool UPauseManager::IsOnlineMode() const {
    return false;
}

bool UPauseManager::IsGamePauseOwnerGoaled() const {
    return false;
}

bool UPauseManager::IsGamePaused() const {
    return false;
}

int32 UPauseManager::GetGamePauseOwnerRacerIndex() const {
    return 0;
}


