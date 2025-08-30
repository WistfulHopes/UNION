#include "UnionStatsManager.h"

UUnionStatsManager::UUnionStatsManager() {
}

void UUnionStatsManager::SetSaveRedStarRings(TArray<bool> InRSRs) {
}

void UUnionStatsManager::RequestAddRaceDetailsParameter(const EStatsEventId StatsEventId, const int32 AddValue) {
}

void UUnionStatsManager::RequestAddMachinesParameter(const EStatsEventId StatsEventId, const EMachineId MachineId, const int32 AddValue) {
}

void UUnionStatsManager::RequestAddDriversParameter(const EStatsEventId StatsEventId, const EDriverId DriverId, const int32 AddValue) {
}

void UUnionStatsManager::OnSetHonorList(const FHonorCommendationDataSetList& list) {
}

bool UUnionStatsManager::IsRaceRedStarRingDisplay() {
    return false;
}

TArray<FCommon_HistoryData_CharacterUsage> UUnionStatsManager::GetTopThreeCharactersUsageAddOne(EDriverId AddOneDriverId) {
    return TArray<FCommon_HistoryData_CharacterUsage>();
}

int32 UUnionStatsManager::GetStatsEventValue(const EStatsEventId StatsEventId) {
    return 0;
}

TArray<bool> UUnionStatsManager::GetSaveRedStarRings() {
    return TArray<bool>();
}

void UUnionStatsManager::GetResultHonorList(int32 RacerIndex, TArray<FHonorCommendationData>& OutDataList) {
}

bool UUnionStatsManager::GetMultiPlayBonus() const {
    return false;
}

int32 UUnionStatsManager::GetMachineStatsEventValue(const EStatsEventId StatsEventId, const EMachineId MachineId) {
    return 0;
}

void UUnionStatsManager::GetCharacterStatsEventValueTopThree(TArray<EDriverId>& TopThreeIds, TArray<int32>& TopThreeCounts) {
}

int32 UUnionStatsManager::GetCharacterStatsEventValue(const EStatsEventId StatsEventId, const EDriverId DriverId) {
    return 0;
}


