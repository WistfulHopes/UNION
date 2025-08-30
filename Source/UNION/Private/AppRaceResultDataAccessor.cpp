#include "AppRaceResultDataAccessor.h"

UAppRaceResultDataAccessor::UAppRaceResultDataAccessor() {
}

void UAppRaceResultDataAccessor::SetResultSilenceSESoundHandle(const FSoundHandle& SoundHandle) {
}

void UAppRaceResultDataAccessor::SetResultRacerRatePoint(int32 RacerIndex, int32 RatePoint) {
}

void UAppRaceResultDataAccessor::SetRecord(int32 InPlayerIndex, int32 InNewRecord, bool bInForceUpdate, bool& bOutUpdated, EOutputExecsPin_SuccessFailed& OutExecsPin) {
}

void UAppRaceResultDataAccessor::SetRank(int32 InPlayerIndex, int32 InNewRank, EOutputExecsPin_SuccessFailed& OutExecsPin) {
}

void UAppRaceResultDataAccessor::SetOfflineResultForcePressed(bool bIsUse) {
}

void UAppRaceResultDataAccessor::SetMCEventBonusData(const FMCEventBonusData MCEventBonusData) {
}

void UAppRaceResultDataAccessor::SetFestaStreakReward(ERewardType rewardType, int32 rewardId) {
}

void UAppRaceResultDataAccessor::SetFestaMyTeamFriendCount(int32 FriendCount) {
}

void UAppRaceResultDataAccessor::SetFestaAddDonpaTicketNum(int32 AddNum) {
}

void UAppRaceResultDataAccessor::SetEnableResultSilenceSE(const bool bEnable) {
}

void UAppRaceResultDataAccessor::SetAppRaceResultData(const FAppRaceResultData& NewData) {
}

void UAppRaceResultDataAccessor::SetAppRacePlayerResultData(int32 InPlayerIndex, const FAppRacePlayerResultData& InNewData, EOutputExecsPin_SuccessFailed& OutExecsPin) {
}

void UAppRaceResultDataAccessor::SaveFestaRewardItemData(UNetMasterDataManageSubsystem* MasterSubsystem, int32 RewardIndex, FRewardGetWindowParam& OutRewardGetWindowParam, bool bIsSaveReward) {
}

void UAppRaceResultDataAccessor::RollbackResult() {
}

void UAppRaceResultDataAccessor::ResetTeamBonusResultPoint() {
}

void UAppRaceResultDataAccessor::ResetRaceResult() {
}

bool UAppRaceResultDataAccessor::IsTopCountWinnerRacer() {
    return false;
}

void UAppRaceResultDataAccessor::InitializeRaceResult() {
}

bool UAppRaceResultDataAccessor::GetWinRivalTotalRankForPartyRace() {
    return false;
}

bool UAppRaceResultDataAccessor::GetWinRivalTotalRank() {
    return false;
}

bool UAppRaceResultDataAccessor::GetWinMyselfTotalRankForPartyRace() {
    return false;
}

void UAppRaceResultDataAccessor::GetTeamResultRankList(TArray<int32>& OutTeamRankList) {
}

int32 UAppRaceResultDataAccessor::GetRivalTotalRank() {
    return 0;
}

void UAppRaceResultDataAccessor::GetResultWinnerTeam(TArray<int32>& OutTeamNoList) {
}

void UAppRaceResultDataAccessor::GetResultTopCountStateTeam(TArray<ETopCountState>& OutTopCountStateList) {
}

FSoundHandle UAppRaceResultDataAccessor::GetResultSilenceSESoundHandle() {
    return FSoundHandle{};
}

float UAppRaceResultDataAccessor::GetResultRankingForcePressedTime() {
    return 0.0f;
}

int32 UAppRaceResultDataAccessor::GetResultRacerRatePoint(int32 RacerIndex) {
    return 0;
}

float UAppRaceResultDataAccessor::GetResultNormalForcePressedTime() {
    return 0.0f;
}

float UAppRaceResultDataAccessor::GetResultForcePressedTime(const FString& KeyName) {
    return 0.0f;
}

void UAppRaceResultDataAccessor::GetResultCalcTeamPoint(TArray<int32>& OutCalcTeamPointList, int32& OutMaxPoint) {
}

void UAppRaceResultDataAccessor::GetRecord(int32 InPlayerIndex, int32& OutRecord, EOutputExecsPin_SuccessFailed& OutExecsPin) {
}

void UAppRaceResultDataAccessor::GetRank(int32 InPlayerIndex, int32& OutRank, EOutputExecsPin_SuccessFailed& OutExecsPin) {
}

bool UAppRaceResultDataAccessor::GetOnlineCacheLobbyMemberData(UObject* WorldContextObject, int32 OnlineIndex, FResultCacheLobbyMemberData& OutData) {
    return false;
}

bool UAppRaceResultDataAccessor::GetOfflineResultForcePressed() {
    return false;
}

void UAppRaceResultDataAccessor::GetFestaStreakReward(ERewardType& OutRewardType, int32& OutRewardId) {
}

void UAppRaceResultDataAccessor::GetFestaResultRewardInfo(FFestaResultRewardInfo& OutInfo) {
}

int32 UAppRaceResultDataAccessor::GetFestaMyTeamFriendCount() {
    return 0;
}

int32 UAppRaceResultDataAccessor::GetFestaAddDonpaTicketNum() {
    return 0;
}

int32 UAppRaceResultDataAccessor::GetBestTotalRankRacerIndexInOnlinePlayer() {
    return 0;
}

int32 UAppRaceResultDataAccessor::GetBestTotalRankInOnlinePlayer() {
    return 0;
}

int32 UAppRaceResultDataAccessor::GetBestTotalRankInLocalPlayer() {
    return 0;
}

void UAppRaceResultDataAccessor::GetAppRaceResultData(FAppRaceResultData& OutData) {
}

void UAppRaceResultDataAccessor::GetAppRacePlayerResultData_OnlineCache(UObject* WorldContextObject, int32 InRacerIndex, FAppRacePlayerResultData& OutData, EOutputExecsPin_SuccessFailed& OutExecsPin) {
}

void UAppRaceResultDataAccessor::GetAppRacePlayerResultData(int32 InPlayerIndex, FAppRacePlayerResultData& OutData, EOutputExecsPin_SuccessFailed& OutExecsPin) {
}

void UAppRaceResultDataAccessor::AddTeamResultPoint(int32 TeamIndex, int32 AddPoint) {
}

void UAppRaceResultDataAccessor::AddTeamBonusResultPoint(int32 TeamIndex, int32 AddPoint) {
}

TArray<int32> UAppRaceResultDataAccessor::AddResultTeamPoint(const TArray<int32>& InTeamPointList, const TArray<int32>& InTeamPointList2) {
    return TArray<int32>();
}


