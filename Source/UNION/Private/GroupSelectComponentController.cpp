#include "GroupSelectComponentController.h"

UGroupSelectComponentController::UGroupSelectComponentController() {
    this->PlayerInfoComponent = NULL;
    this->bCanMoveAnimFire = true;
    this->bIsWait = false;
    this->bIsOnlineRandomMove = false;
    this->IsHost = false;
    this->Default_Loop = NULL;
    this->Default_to_Right = NULL;
    this->Default_to_Left = NULL;
    this->GroupIndex = -1;
    this->CurrentState = EGroupSelectComponentPlaceState::Center;
    this->TargetAnimation = NULL;
    this->bTargetAnimForward = true;
    this->TargetState = EGroupSelectComponentPlaceState::Center;
}

void UGroupSelectComponentController::SetPlayerNameString(const FString& InPlayerNameString) {
}

void UGroupSelectComponentController::SetPlatformIconIndex(int32 InPlatformIconIndex) {
}

void UGroupSelectComponentController::SetLocalPlayerInfo(bool bInLocalPlayer, int32 InLocalPlayerIndex) {
}

void UGroupSelectComponentController::SetIsWait(bool IsWait) {
}

void UGroupSelectComponentController::SetIsOnlineRandomMove(bool IsRandom) {
}


void UGroupSelectComponentController::SetGroupIndex(int32 InGroupIndex) {
}

void UGroupSelectComponentController::SetEndFlag(bool _bIsEnd) {
}

void UGroupSelectComponentController::SetCharacter(EDriverId InDriverId) {
}


bool UGroupSelectComponentController::GetIsWait() {
    return false;
}

bool UGroupSelectComponentController::GetEndFlag() {
    return false;
}

bool UGroupSelectComponentController::CalcMovable(EUnionUIControlDir ToDirection) {
    return false;
}


