#include "CustomMatchLobbyContext.h"

UCustomMatchLobbyContext::UCustomMatchLobbyContext() {
    this->SquadContext = NULL;
}

void UCustomMatchLobbyContext::SyncRuleSettingForPreset(const FCustomRaceSetting& RaceSetting, EPartyRacePreset PresetId) {
}

void UCustomMatchLobbyContext::SyncRuleSettingForCustom(const FCustomRaceSetting& RaceSetting, const FItemSwitchSetting& ItemSetting, const TArray<EStageId>& CourseSetting) {
}

void UCustomMatchLobbyContext::SetupLobbyRaceAttributes() {
}

void UCustomMatchLobbyContext::SetupLobbyInitAttribute() {
}

void UCustomMatchLobbyContext::SetReturnLobbyAllMember(bool IsComplete) {
}

void UCustomMatchLobbyContext::SetMemberGroup(const FString& MemberId, int32 GroupIndex) {
}

void UCustomMatchLobbyContext::SetInRace(bool IsInRace) {
}

void UCustomMatchLobbyContext::SetGroupSettingComplete(bool IsComplete) {
}

void UCustomMatchLobbyContext::SetGroupSetting() {
}

void UCustomMatchLobbyContext::SetFinishNextRaceSetting(bool IsFinished) {
}

void UCustomMatchLobbyContext::SearchByHostUserId(const FString& HostUserId, FLobbySubsystemOnSearchLobbyComplete OnComplete) {
}

void UCustomMatchLobbyContext::OnLobbyTypeChanged(bool bSuccessful, const FLobbyOperationResult& Result) {
}

bool UCustomMatchLobbyContext::IsRuleSettingUpdated() {
    return false;
}

void UCustomMatchLobbyContext::GetTravelCourseSwitchSettingString(FString& OutSetting) {
}

bool UCustomMatchLobbyContext::GetRuleSetting(bool& UsingPreset, EPartyRacePreset& PresetId, FCustomRaceSetting& RaceSetting, FItemSwitchSetting& ItemSetting, FCourseSwitchSetting& CourseSetting, ERivalTeamId& RivalTeamId) {
    return false;
}

void UCustomMatchLobbyContext::GetRivalSetting(bool& OutSetting) {
}

void UCustomMatchLobbyContext::GetReturnLobbyAllMember(bool& OutComplete) {
}

EFriendMatchLobbyJoinResult UCustomMatchLobbyContext::GetJoinResult() const {
    return EFriendMatchLobbyJoinResult::Success;
}

void UCustomMatchLobbyContext::GetInRace(bool& OutInRace) const {
}

void UCustomMatchLobbyContext::GetGroupSettingComplete(bool& OutComplete) {
}

void UCustomMatchLobbyContext::GetGroupSetting(TMap<FString, int32>& OutGroupSetting) {
}

void UCustomMatchLobbyContext::GetFinishNextRaceSetting(bool& OutIsFinished) {
}

void UCustomMatchLobbyContext::DebugRuleSettingRandomize() {
}

void UCustomMatchLobbyContext::CreateWithSquad(USquadContext* InSquadContext, int32 MaxMember) {
}

bool UCustomMatchLobbyContext::CheckPermission(const FLobbyId& InLobbyId, EFriendMatchLobbyJoinResult& OutResult) {
    return false;
}

void UCustomMatchLobbyContext::BlockMember(ULobbyMemberContextBase* MemberContext) {
}


