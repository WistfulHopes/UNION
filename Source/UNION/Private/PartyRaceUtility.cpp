#include "PartyRaceUtility.h"

UPartyRaceUtility::UPartyRaceUtility() {
}

void UPartyRaceUtility::UpdateResultDataNoProgress() {
}

void UPartyRaceUtility::UpdateResultData() {
}

void UPartyRaceUtility::UpdateDonpaResultData() {
}

void UPartyRaceUtility::SetRivalTeamIdAndWinCount(ERivalTeamId InTeamID, int32 InWinCount) {
}

void UPartyRaceUtility::SetRivalTeamCutinNextPlayRequested(bool Value) {
}

void UPartyRaceUtility::SetRivalTeamAllEliminatedCount(int32 Count) {
}

void UPartyRaceUtility::SetResultRivalTeamEliminated(bool Value) {
}

void UPartyRaceUtility::SetRacersGroupingForPartyRace(ERaceSettingGrouping RaceSettingGrouping) {
}

void UPartyRaceUtility::SetPartyRaceRivalExists(bool Exists) {
}

void UPartyRaceUtility::SetPartyRaceCustomRivalExists(bool Exists) {
}

void UPartyRaceUtility::SetPartyRaceClassSelected(bool Value) {
}

void UPartyRaceUtility::SetLastCutinRivalTeamId(ERivalTeamId RivalTeamId) {
}

void UPartyRaceUtility::SetCustomRuleFromPreset(const FPartyRacePresetSetting& RacePresetSetting, FCustomRaceSetting& RaceSetting) {
}

void UPartyRaceUtility::ResetRivalTeamWinCount(ERivalTeamId RivalTeamId) {
}

void UPartyRaceUtility::ResetRivalTeamEliminatedCount(ERivalTeamId RivalTeamId) {
}

void UPartyRaceUtility::ResetAllRivalTeamWinCount() {
}

void UPartyRaceUtility::ResetAllRivalTeamEliminatedCount() {
}

FRewardAchievementData UPartyRaceUtility::MakeResultRivalTeamRewardAchievementData() {
    return FRewardAchievementData{};
}

bool UPartyRaceUtility::IsResultRivalTeamPlayerWin() {
    return false;
}

bool UPartyRaceUtility::IsRacerAwardRivalTeamWin() {
    return false;
}

bool UPartyRaceUtility::IsPartyRaceRivalExists() {
    return false;
}

bool UPartyRaceUtility::IsPartyRaceMissionExistsGameMode() {
    return false;
}

bool UPartyRaceUtility::IsPartyRaceCustomRivalExists() {
    return false;
}

bool UPartyRaceUtility::IsPartyRaceClassSelected() {
    return false;
}

int32 UPartyRaceUtility::IncRivalTeamWinCount(ERivalTeamId RivalTeamId) {
    return 0;
}

int32 UPartyRaceUtility::IncRivalTeamEliminatedCount(ERivalTeamId RivalTeamId) {
    return 0;
}

ERivalTeamId UPartyRaceUtility::GetSelectedRivalTeamId() {
    return ERivalTeamId::Alpha01;
}

int32 UPartyRaceUtility::GetRivalTeamWinRewardNecessaryWinCount(ERivalTeamId RivalTeamId, int32 EliminatedCount, int32 RewardIndex) {
    return 0;
}

bool UPartyRaceUtility::GetRivalTeamWinRewardDisplayData(ERivalTeamId RivalTeamId, int32 EliminatedCount, int32 RewardIndex, ERewardType& OutRewardType, TSoftObjectPtr<UTexture2D>& OutRewardSoftTexture, int32& OutNumRewards) {
    return false;
}

bool UPartyRaceUtility::GetRivalTeamWinRewardData(ERivalTeamId RivalTeamId, int32 EliminatedCount, int32 RewardIndex, ERewardType& OutRewardType, int32& OutRewardId, int32& OutNumRewards) {
    return false;
}

void UPartyRaceUtility::GetRivalTeamWinRacerAwardData(UDataTable* RaceParkHonorDataTable, int32 InRivalLevel, FRewardRedStarRingHonorTableRow& OutRewardHonor) {
}

int32 UPartyRaceUtility::GetRivalTeamWinCount(ERivalTeamId RivalTeamId) {
    return 0;
}

FText UPartyRaceUtility::GetRivalTeamName(ERivalTeamId RivalTeamId) {
    return FText::GetEmpty();
}

void UPartyRaceUtility::GetRivalTeamMainMembers(ERivalTeamId RivalTeamId, TArray<EDriverId>& OutDriverIds) {
}

EMachineId UPartyRaceUtility::GetRivalTeamMachineId(ERivalTeamId RivalTeamId) {
    return EMachineId::SPD_01;
}

int32 UPartyRaceUtility::GetRivalTeamLevel(ERivalTeamId RivalTeamId) {
    return 0;
}

ERivalTeamId UPartyRaceUtility::GetRivalTeamIdFromRaceRivalDriverIds() {
    return ERivalTeamId::Alpha01;
}

bool UPartyRaceUtility::GetRivalTeamEliminatedRewardDisplayData(ERivalTeamId RivalTeamId, ERewardType& OutRewardType, TSoftObjectPtr<UTexture2D>& OutRewardSoftTexture, int32& OutNumRewards) {
    return false;
}

int32 UPartyRaceUtility::GetRivalTeamEliminatedCount(ERivalTeamId RivalTeamId) {
    return 0;
}

bool UPartyRaceUtility::GetRivalTeamCutinNextPlayRequested() {
    return false;
}

int32 UPartyRaceUtility::GetRivalTeamAllEliminatedCount() {
    return 0;
}

ERivalTeamId UPartyRaceUtility::GetResultRivalTeamId() {
    return ERivalTeamId::Alpha01;
}

bool UPartyRaceUtility::GetResultRivalTeamEliminated() {
    return false;
}

void UPartyRaceUtility::GetPresetRuleDataTableRowFromPresetId(EPartyRacePreset PresetId, FPartyRacePresetSetting& RacePresetSetting) {
}

int32 UPartyRaceUtility::GetPartyRaceNumOccurringMissions() {
    return 0;
}

void UPartyRaceUtility::GetPartyRaceMissionResultDisplayInfoBP(int32 MissionIndex, FName& OutMissionId, int32& OutScore, bool& OutCompleted) {
}

int32 UPartyRaceUtility::GetPartyRaceMaxMissionsOccur() {
    return 0;
}

int32 UPartyRaceUtility::GetNumWinsNeededToEliminateRivalTeam(ERivalTeamId RivalTeamId, int32 EliminatedCount) {
    return 0;
}

int32 UPartyRaceUtility::GetNumRivalTeamWinReward() {
    return 0;
}

void UPartyRaceUtility::GetMultiPlayBonusRacerAwardData(UDataTable* RaceParkHonorDataTable, FRewardRedStarRingHonorTableRow& OutRewardHonor) {
}

int32 UPartyRaceUtility::GetMaxRivalTeamLevel() {
    return 0;
}

ERivalTeamId UPartyRaceUtility::GetLastCutinRivalTeamId() {
    return ERivalTeamId::Alpha01;
}

int32 UPartyRaceUtility::GetCurrentAdjustedRivalTeamLevel() {
    return 0;
}

int32 UPartyRaceUtility::GetAdjustedRivalTeamLevelByID(ERivalTeamId RivalTeamId) {
    return 0;
}

bool UPartyRaceUtility::FindRivalTeamWinRewardDataByWinCount(ERivalTeamId RivalTeamId, int32 EliminatedCount, int32 winCount, ERewardType& OutRewardType, int32& OutRewardId, int32& OutNumRewards) {
    return false;
}

bool UPartyRaceUtility::FindPartyRaceMissionDataBP(const FName& MissionId, FPartyRaceMissionData& OutMissionData) {
    return false;
}

int32 UPartyRaceUtility::CountPrimalRivalTeams() {
    return 0;
}

int32 UPartyRaceUtility::CountEliminatedPrimalRivalTeams() {
    return 0;
}

void UPartyRaceUtility::ConvertCustomRaceSettingToPartyRacePresetSetting(const FCustomRaceSetting& RaceSetting, FPartyRacePresetSetting& RacePresetSetting) {
}

void UPartyRaceUtility::ClearSelectedRivalTeamId() {
}

void UPartyRaceUtility::ChooseRivalTeamMembers(int32 NumMembers) {
}

ERivalTeamId UPartyRaceUtility::ChooseRivalTeam() {
    return ERivalTeamId::Alpha01;
}

bool UPartyRaceUtility::CheckRule(ECustomRaceSettingLine Rule) {
    return false;
}

bool UPartyRaceUtility::CheckGroupRule(int32 PlayerCount) {
    return false;
}

bool UPartyRaceUtility::CheckDoingResultRivalTeamEliminatedEvent() {
    return false;
}


