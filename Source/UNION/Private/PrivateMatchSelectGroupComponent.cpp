#include "PrivateMatchSelectGroupComponent.h"

UPrivateMatchSelectGroupComponent::UPrivateMatchSelectGroupComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GroupSettingSyncCycle = 0.50f;
    this->ChildGroupSettingSequence = NULL;
    this->bIsLobbyHost = false;
    this->OwnLobbyIndex = 0;
    this->LobbyMemberCount = 0;
    this->bIsCompleted = false;
    this->bIsInitializedParams = false;
}

void UPrivateMatchSelectGroupComponent::UpdateGroupSetting(TArray<int32> GroupIndexArray) {
}

void UPrivateMatchSelectGroupComponent::SetRacerDriverId(int32 InIndex, EDriverId InDriverId) {
}

void UPrivateMatchSelectGroupComponent::SetOwnPlayerIndex(int32 OwnPlayerIndex) {
}

void UPrivateMatchSelectGroupComponent::InitParams(bool bIsHost, int32 MemberCount) {
}

void UPrivateMatchSelectGroupComponent::GroupSettingComplete() {
}

bool UPrivateMatchSelectGroupComponent::GetIsInitializedParamaters() {
    return false;
}

TArray<int32> UPrivateMatchSelectGroupComponent::GetGroupIndexArray() {
    return TArray<int32>();
}

void UPrivateMatchSelectGroupComponent::ForceFixGroupSettings() {
}

void UPrivateMatchSelectGroupComponent::CallSyncGroupSetting() {
}

void UPrivateMatchSelectGroupComponent::CallOnExitStateEvent() {
}

void UPrivateMatchSelectGroupComponent::CallFixedHostGroupSetting() {
}


