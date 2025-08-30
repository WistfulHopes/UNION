#include "GroupSelect.h"

UGroupSelect::UGroupSelect() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->RacersPanel = NULL;
    this->IsGuest = false;
    this->bIsEnd = false;
    this->OnlinePlayerCount = 1;
    this->OwnLobbyIndex = 0;
}


void UGroupSelect::StartRandom(int32 StartPosition, int32 EndPosition, bool bIsLast) {
}

void UGroupSelect::SetOwnLobbyIndex(int32 InIndex) {
}

void UGroupSelect::SetOnlinePlayerCount(int32 PlayerCnt) {
}

void UGroupSelect::SetOnlineDriverIdArray(TArray<EDriverId> inArray) {
}

void UGroupSelect::SetIsGuest(bool Guest) {
}

void UGroupSelect::SetGroupIndexAll() {
}

void UGroupSelect::SetForceGroupSettingCompleted() {
}

void UGroupSelect::SetForceGroupSetting(const TArray<int32>& InGroupIndexArray) {
}

void UGroupSelect::SetEndControlComponents() {
}

void UGroupSelect::SetAllVisibleComponents() {
}

void UGroupSelect::ResolveIsGroupOverflow(int32 PlayerCnt) {
}

bool UGroupSelect::IsPlateMoving() {
    return false;
}

EDriverId UGroupSelect::GetOnlineDriverIdFromArray(int32 InIndex) {
    return EDriverId::Sonic;
}

int32 UGroupSelect::GetGroupIndex(int32 RacerIndex) const {
    return 0;
}

TArray<int32> UGroupSelect::GetAllRacerIndexInGroup(int32 GroupIndex, int32 PlayerCnt) {
    return TArray<int32>();
}

TArray<int32> UGroupSelect::GetAllGroupIndex() const {
    return TArray<int32>();
}


void UGroupSelect::ForceComponentsMoveEnd() {
}



