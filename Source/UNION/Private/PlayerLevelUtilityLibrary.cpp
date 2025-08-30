#include "PlayerLevelUtilityLibrary.h"

UPlayerLevelUtilityLibrary::UPlayerLevelUtilityLibrary() {
}

void UPlayerLevelUtilityLibrary::UseDonpaTicket(int32 InUseTicket) {
}

void UPlayerLevelUtilityLibrary::SetRedStarRing(int32 RedStarRingNum) {
}

void UPlayerLevelUtilityLibrary::SetRatePoint(int32 Point) {
}

void UPlayerLevelUtilityLibrary::SetRateHighPoint(int32 Point) {
}

void UPlayerLevelUtilityLibrary::SetPlayerTotalRaceCount(int32 InPlayerTotalRaceCount) {
}

void UPlayerLevelUtilityLibrary::SetPlayerLevel(int32 PlayerLevel) {
}

void UPlayerLevelUtilityLibrary::SetPlayerFestaPoint(int32 InPoint) {
}

void UPlayerLevelUtilityLibrary::SetPlayerAddRaceCount(int32 InAddCount) {
}

void UPlayerLevelUtilityLibrary::SetLocalDataFestaId(int32 festaId) {
}

void UPlayerLevelUtilityLibrary::SetFinalResultFestaRanking_Empty() {
}

void UPlayerLevelUtilityLibrary::SetFinalResultFestaRanking(int32 Ranking) {
}

void UPlayerLevelUtilityLibrary::SetDonpaTicket(int32 DonpaTicketNum) {
}

void UPlayerLevelUtilityLibrary::SaveResult(UDataTable* RewardRedStarRingDataTable, UDataTable* RewardRedStarRingHonorDataTable, const TArray<ERewardRedStarRingType>& RewardRedStarRingTypes, const TArray<FHonorCommendationData>& RSRHonorList, FPlayerLevelInfo& OutPlayerLevelInfo, TArray<FRewardRedStarRingData>& OutRedStarRingData, UDataTable* LevelUpDataTable) {
}

bool UPlayerLevelUtilityLibrary::PreCheckLevelUp(int32 RedStarRingNum, UDataTable* LevelUpDataTable) {
    return false;
}

bool UPlayerLevelUtilityLibrary::IsSetFinalResultFestaRanking() {
    return false;
}

bool UPlayerLevelUtilityLibrary::IsEmptyFinalResultFestaRanking() {
    return false;
}

void UPlayerLevelUtilityLibrary::IncPlayerTotalRaceCount() {
}

void UPlayerLevelUtilityLibrary::IncPlayerAddRaceCount() {
}

int32 UPlayerLevelUtilityLibrary::GetUseDonpaTicket() {
    return 0;
}

int32 UPlayerLevelUtilityLibrary::GetTotalDonpaTicket() {
    return 0;
}

int32 UPlayerLevelUtilityLibrary::GetRSRDonpaTicket(UDataTable* RewardRedStarRingDataTable, const EStageId InStageId) {
    return 0;
}

int32 UPlayerLevelUtilityLibrary::GetRequiredRedStarRingForLevelUp(int32 PlayerLevel, UDataTable* LevelUpDataTable) {
    return 0;
}

int32 UPlayerLevelUtilityLibrary::GetRedStarRing() {
    return 0;
}

int32 UPlayerLevelUtilityLibrary::GetRateHighPoint() {
    return 0;
}

int32 UPlayerLevelUtilityLibrary::GetPlayerTotalRaceCount() {
    return 0;
}

int32 UPlayerLevelUtilityLibrary::GetPlayerLevel() {
    return 0;
}

int32 UPlayerLevelUtilityLibrary::GetPlayerFestaPoint() {
    return 0;
}

int32 UPlayerLevelUtilityLibrary::GetPlayerAddRaceCount() {
    return 0;
}

int32 UPlayerLevelUtilityLibrary::GetLocalDataFestaId() {
    return 0;
}

int32 UPlayerLevelUtilityLibrary::GetFinalResultFestaRanking() {
    return 0;
}

int32 UPlayerLevelUtilityLibrary::GetDonpaTicketMax() {
    return 0;
}

int32 UPlayerLevelUtilityLibrary::GetDonpaTicket() {
    return 0;
}

int32 UPlayerLevelUtilityLibrary::GetBeforePlayerRaceCount() {
    return 0;
}

bool UPlayerLevelUtilityLibrary::FindRewardRedStarRingHonorTableRow(UDataTable* RewardRedStarRingHonorTableRow, const FHonorCommendationData& HonorCommendationData, FRewardRedStarRingHonorTableRow& OutData) {
    return false;
}

void UPlayerLevelUtilityLibrary::ClearPlayerAddRaceCount() {
}

void UPlayerLevelUtilityLibrary::AddRedStarRing(int32 RedStarRingNum, FPlayerLevelInfo& OutPlayerLevelInfo, UDataTable* LevelUpDataTable) {
}

void UPlayerLevelUtilityLibrary::AddPlayerFestaPoint(int32 AddPoint) {
}

void UPlayerLevelUtilityLibrary::AddDonpaTicket(int32 InAddTicket) {
}


