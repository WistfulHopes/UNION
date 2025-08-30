#include "CustomMatchLobbyControlComponent.h"

UCustomMatchLobbyControlComponent::UCustomMatchLobbyControlComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UCustomMatchLobbyControlComponent::SyncRuleSettingForPreset(const FCustomRaceSetting& RaceSetting, EPartyRacePreset PresetId) {
}

void UCustomMatchLobbyControlComponent::SyncRuleSettingForCustom(const FCustomRaceSetting& RaceSetting, const FItemSwitchSetting& ItemSetting, const TArray<EStageId>& CourseSetting) {
}

void UCustomMatchLobbyControlComponent::StartSyncGroupSetting() {
}

void UCustomMatchLobbyControlComponent::SetReadyLocalMember(bool NewIsReady) {
}

void UCustomMatchLobbyControlComponent::SetMemberGroup(const FString& MemberId, int32 GroupIndex) {
}

void UCustomMatchLobbyControlComponent::SetInRace(bool NewIsInRace) {
}

void UCustomMatchLobbyControlComponent::SetFinishNextRaceSetting(bool IsFinished) {
}

void UCustomMatchLobbyControlComponent::OnCompleteJoinBySearchLobbyId(bool bSuccessful, const FCreateOrConnectLobbyResult& Result) {
}

void UCustomMatchLobbyControlComponent::OnCompleteJoinByInviteInfo(bool bSuccessful, const FCreateOrConnectLobbyResult& Result) {
}


void UCustomMatchLobbyControlComponent::JoinBySearchLobbyId() {
}

void UCustomMatchLobbyControlComponent::JoinByInviteInfo() {
}

bool UCustomMatchLobbyControlComponent::IsRuleSettingUpdated() {
    return false;
}

bool UCustomMatchLobbyControlComponent::IsReadyAllMember() {
    return false;
}

bool UCustomMatchLobbyControlComponent::IsReady(const FUniqueNetIdRepl& MemberId) {
    return false;
}

bool UCustomMatchLobbyControlComponent::IsNotReadyAllMember() {
    return false;
}

bool UCustomMatchLobbyControlComponent::IsInRace() {
    return false;
}

bool UCustomMatchLobbyControlComponent::IsGroupSettingCompleted() {
    return false;
}

bool UCustomMatchLobbyControlComponent::IsFinishNextRaceSetting() {
    return false;
}

bool UCustomMatchLobbyControlComponent::GetRuleSetting(bool& UsingPreset, EPartyRacePreset& PresetId, FCustomRaceSetting& RaceSetting, FItemSwitchSetting& ItemSetting, FCourseSwitchSetting& CourseSetting, ERivalTeamId& RivalTeamId) {
    return false;
}

EFriendMatchLobbyJoinResult UCustomMatchLobbyControlComponent::GetJoinResult() {
    return EFriendMatchLobbyJoinResult::Success;
}

void UCustomMatchLobbyControlComponent::GetGroupSetting(TMap<FString, int32>& OutGroupSetting) {
}

void UCustomMatchLobbyControlComponent::EndSyncGroupSetting() {
}

void UCustomMatchLobbyControlComponent::CreateLobby(USquadContext* InSquadContext, int32 MaxMember) {
}

void UCustomMatchLobbyControlComponent::CheckHasPlanningToJoinLobby(bool& bHasAcceptInvite, bool& bHasSearchLobbyId, bool& bShouldQuitLobby) const {
}


