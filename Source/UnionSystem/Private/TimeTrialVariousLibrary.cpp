#include "TimeTrialVariousLibrary.h"

UTimeTrialVariousLibrary::UTimeTrialVariousLibrary() {
}

bool UTimeTrialVariousLibrary::isTimeTrialResultReward(int32 MedalCount, UDataTable* ResultRewardDataTable) {
    return false;
}

bool UTimeTrialVariousLibrary::IsTimeTrialRankCleared(const ETimeTrialClearRankId InId) {
    return false;
}

bool UTimeTrialVariousLibrary::IsReplayGhostReleased(const FReplaySaveInfo& InGhostData) {
    return false;
}

bool UTimeTrialVariousLibrary::IsGhostVersionHeaderCheck(const int32& InStageVersion, const FReplayHeader& InGhostHeader) {
    return false;
}

bool UTimeTrialVariousLibrary::IsGhostVersionCheck(const int32& InStageVersion, const ESpeedClassId InSpeedClass) {
    return false;
}

bool UTimeTrialVariousLibrary::IsGhostResultReleased(const FUserTimeTrialRaceData InResultData) {
    return false;
}

int32 UTimeTrialVariousLibrary::GetTimeTrialTargetTime(ESpeedClassId InSpeedClass, EStageId InStageId) {
    return 0;
}

FTimeTrialRankData UTimeTrialVariousLibrary::GetTimeTrialRankData(const int32 InClockCount, const EStageId InStageId, const ESpeedClassId InSpeedClassId) {
    return FTimeTrialRankData{};
}

FTimeTrialLapTimes UTimeTrialVariousLibrary::GetTimeTrialBestTimeData(const EStageId InStageId, const ESpeedClassId InSpeedClassId) {
    return FTimeTrialLapTimes{};
}

bool UTimeTrialVariousLibrary::GetRewardData(int32 MedalCount, FTimeTrialResultRewardTableData& OutRewardData) {
    return false;
}

FTimeTrialResultRewardTableData UTimeTrialVariousLibrary::GetNextRewardData(int32 MedalCount, int32& OutRewardCount, int32& OutRewardMax, bool& OutIsValid) {
    return FTimeTrialResultRewardTableData{};
}

FTimeTrialResultRewardTableData UTimeTrialVariousLibrary::GetCurrentRewardData() {
    return FTimeTrialResultRewardTableData{};
}

void UTimeTrialVariousLibrary::ConvertUserTimeTrialRaceData(const FTimeTrialLapTimes& InLapTimes, const EDriverId InDriverId, const FUserMachineCustomizeData& InMachineCustomizeData, const FUserGadgetPresetData& InGadgetPresetData, ETimeTrialClearRankId InClearRank, FUserTimeTrialRaceData& OutRaceData) {
}

bool UTimeTrialVariousLibrary::CheckIsTargetTimeClear(const int32 InClockCount, const EStageId InStageId, const ESpeedClassId InSpeedClassId, ETimeTrialClearRankId& OutClearRank) {
    return false;
}

void UTimeTrialVariousLibrary::CheckHashGhostResultMatch(const ESpeedClassId InSpeedClass, const EStageId InStageId, bool& OutResult) {
}

bool UTimeTrialVariousLibrary::CheckForNewRecord(const int32 InClockCount, const EStageId InStageId, const ESpeedClassId InSpeedClassId, bool& OutMedalAcquistion) {
    return false;
}


