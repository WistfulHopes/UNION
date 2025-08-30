#include "AppControllerInputManager.h"

UAppControllerInputManager::UAppControllerInputManager() {
}

void UAppControllerInputManager::SetTickable(bool bTickable) {
}

void UAppControllerInputManager::RemovePlayer(APlayerController* PlayerController, bool bDestroyPawn) {
}

bool UAppControllerInputManager::IsMenuMouseInputMode(int32 PlayerControllerIndex) {
    return false;
}

AAppPlayerController* UAppControllerInputManager::GetPlayerController(int32 PlayerControllerIndex) {
    return NULL;
}

AMenuPlayerController* UAppControllerInputManager::GetMenuPlayerController(int32 PlayerControllerIndex) {
    return NULL;
}


