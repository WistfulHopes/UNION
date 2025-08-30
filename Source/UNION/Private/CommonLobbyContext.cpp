#include "CommonLobbyContext.h"
#include "CommonLobbyMemberContext.h"
#include "Templates/SubclassOf.h"

UCommonLobbyContext::UCommonLobbyContext() {
    this->LobbyMemberContextClass = UCommonLobbyMemberContext::StaticClass();
    this->MatchmakingContext = NULL;
    this->SelectableCourseMax = 4;
}

void UCommonLobbyContext::UpdateCurrentSendResultSaveCount() {
}

void UCommonLobbyContext::SyncRaceHostUserId() {
}

bool UCommonLobbyContext::SyncEntryRaceId(const FString& InEntryRaceId) {
    return false;
}

void UCommonLobbyContext::StartPlatformGameMatch(const FString& ActivityId) {
}

bool UCommonLobbyContext::ShouldPlatformInvite(const FString& Platform) const {
    return false;
}

void UCommonLobbyContext::SetUseCOM(bool bUseCOM) {
}

void UCommonLobbyContext::SetupGroup() {
}

void UCommonLobbyContext::SetSpeedClass(ESpeedClassId SpeedClass) {
}

void UCommonLobbyContext::SetSelectedRaceType(ERaceType RaceType) {
}

void UCommonLobbyContext::SetRaceStageSettings(int32 courseId, int32 SelectedPlayerOnlineIndex, const TArray<FAnotherStageLotteryResult>& AnotherStages) {
}

void UCommonLobbyContext::SetRaceCycleFlag(bool bValue) {
}

void UCommonLobbyContext::SetOnlineRandomSeedString(const FString& SeedString) {
}

void UCommonLobbyContext::SetOnlineRandomSeeds(const TArray<int32>& NewOnlineRandomSeeds) {
}

void UCommonLobbyContext::SetOnlineRandomSeed(int32 Index, int32 Seed) {
}

void UCommonLobbyContext::SetLobbyInitData(const FLobbyInitData& InLobbyInitData, const TArray<FAnotherStageLotteryResult>& AnotherStages) {
}

void UCommonLobbyContext::SetCompleteLobbySetting(bool bFlag) {
}

void UCommonLobbyContext::SendInvitationWithPlatform(const FUniqueNetIdRepl& UserId, const FUniqueNetIdRepl& ExternalUserId, FLobbySubsystemOnLobbyOperationComplete OnComplete) {
}

void UCommonLobbyContext::SendInvitation(const FUniqueNetIdRepl& UserId, FLobbySubsystemOnLobbyOperationComplete OnComplete) {
}

void UCommonLobbyContext::ResetRPCCounter() {
}

void UCommonLobbyContext::ResetLocalData() {
}

void UCommonLobbyContext::ResetEntryRaceId() {
}

void UCommonLobbyContext::PromoteMemberBestChoice(FLobbySubsystemOnLobbyOperationComplete OnComplete) {
}

void UCommonLobbyContext::OnLobbyOperationCompleteWithError(bool bSuccessful, const FLobbyOperationResult& Result) {
}

bool UCommonLobbyContext::NotifySendResultSave() {
    return false;
}

bool UCommonLobbyContext::IsSendResultSaveBeforeSetupCallback() {
    return false;
}

bool UCommonLobbyContext::IsRaceHostLocalUser() const {
    return false;
}

bool UCommonLobbyContext::IsRaceHost(const FString& InUserId) const {
    return false;
}

bool UCommonLobbyContext::IsInviteBlocked(const FLobbyOperationResult& SendInvitationResult) {
    return false;
}

bool UCommonLobbyContext::IsAlreadyCalledRaceSetting() {
    return false;
}

bool UCommonLobbyContext::IsAllMemberInLobby() const {
    return false;
}

void UCommonLobbyContext::GetUseCOM(bool& bOutResult) const {
}

void UCommonLobbyContext::GetSpeedClass(ESpeedClassId& SpeedClass) const {
}

void UCommonLobbyContext::GetSelectedRaceType(ERaceType& RaceType) const {
}

void UCommonLobbyContext::GetSelectableCourseIds(TArray<EStageId>& OutResult) const {
}

ELobbyType UCommonLobbyContext::GetRealLobbyTypeEnum() const {
    return ELobbyType::Invalid;
}

void UCommonLobbyContext::GetRaceStageSettings(TArray<FAppRaceStageSetting>& OutResult) const {
}

void UCommonLobbyContext::GetRaceHostUserId(FString& RaceHostUserId) const {
}

void UCommonLobbyContext::GetRaceHostCandidateUserIds(TArray<FString>& OutArray) const {
}

void UCommonLobbyContext::GetRaceCycleFlag(bool& bOutValue) {
}

void UCommonLobbyContext::GetOnlineRandomSeeds(TArray<int32>& OutResult) const {
}

void UCommonLobbyContext::GetMemberUserIdFromRacerIndex(int32 RacerIndex, FUniqueNetIdRepl& OutUserId) const {
}

bool UCommonLobbyContext::GetMemberRacerIndexFromUserId(const FUniqueNetIdRepl& InUserId, int32& OutRacerIndex) const {
    return false;
}

ULobbyMemberContextBase* UCommonLobbyContext::GetMemberFromRacerIndexByClass(int32 RacerIndex, TSubclassOf<ULobbyMemberContextBase> MemberContextClass) const {
    return NULL;
}

ULobbyMemberContextBase* UCommonLobbyContext::GetMemberFromRacerIndex(int32 RacerIndex) const {
    return NULL;
}

int32 UCommonLobbyContext::GetLocalMemberOnlineIndex() const {
    return 0;
}

float UCommonLobbyContext::GetLocalMatchmakingCompleteTime() const {
    return 0.0f;
}

void UCommonLobbyContext::GetLobbyInitData(FLobbyInitData& OutLobbyInitData) const {
}

FString UCommonLobbyContext::GetEntryRaceId() const {
    return TEXT("");
}

void UCommonLobbyContext::GetCompleteLobbySetting(bool& bOutFlag) const {
}

void UCommonLobbyContext::EndPlatformGameMatch(const TArray<FCommon_UserOrderData>& UserOrder) {
}

void UCommonLobbyContext::ConfirmMatchingUsers() {
}

void UCommonLobbyContext::CheckMatchmakingStatus() {
}

bool UCommonLobbyContext::CanLobbyMessaging() const {
    return false;
}

void UCommonLobbyContext::ApplyGroup() {
}


