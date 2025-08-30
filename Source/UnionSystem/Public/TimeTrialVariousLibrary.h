#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EDriverId.h"
#include "ESpeedClassId.h"
#include "EStageId.h"
#include "ETimeTrialClearRankId.h"
#include "ReplayHeader.h"
#include "ReplaySaveInfo.h"
#include "TimeTrialLapTimes.h"
#include "TimeTrialRankData.h"
#include "TimeTrialResultRewardTableData.h"
#include "UserGadgetPresetData.h"
#include "UserMachineCustomizeData.h"
#include "UserTimeTrialRaceData.h"
#include "TimeTrialVariousLibrary.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UNIONSYSTEM_API UTimeTrialVariousLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTimeTrialVariousLibrary();

    UFUNCTION(BlueprintCallable)
    static bool isTimeTrialResultReward(int32 MedalCount, UDataTable* ResultRewardDataTable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTimeTrialRankCleared(const ETimeTrialClearRankId InId);
    
    UFUNCTION(BlueprintCallable)
    static bool IsReplayGhostReleased(const FReplaySaveInfo& InGhostData);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGhostVersionHeaderCheck(const int32& InStageVersion, const FReplayHeader& InGhostHeader);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGhostVersionCheck(const int32& InStageVersion, const ESpeedClassId InSpeedClass);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGhostResultReleased(const FUserTimeTrialRaceData InResultData);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetTimeTrialTargetTime(ESpeedClassId InSpeedClass, EStageId InStageId);
    
    UFUNCTION(BlueprintCallable)
    static FTimeTrialRankData GetTimeTrialRankData(const int32 InClockCount, const EStageId InStageId, const ESpeedClassId InSpeedClassId);
    
    UFUNCTION(BlueprintCallable)
    static FTimeTrialLapTimes GetTimeTrialBestTimeData(const EStageId InStageId, const ESpeedClassId InSpeedClassId);
    
    UFUNCTION(BlueprintCallable)
    static bool GetRewardData(int32 MedalCount, FTimeTrialResultRewardTableData& OutRewardData);
    
    UFUNCTION(BlueprintCallable)
    static FTimeTrialResultRewardTableData GetNextRewardData(int32 MedalCount, int32& OutRewardCount, int32& OutRewardMax, bool& OutIsValid);
    
    UFUNCTION(BlueprintCallable)
    static FTimeTrialResultRewardTableData GetCurrentRewardData();
    
    UFUNCTION(BlueprintCallable)
    static void ConvertUserTimeTrialRaceData(const FTimeTrialLapTimes& InLapTimes, const EDriverId InDriverId, const FUserMachineCustomizeData& InMachineCustomizeData, const FUserGadgetPresetData& InGadgetPresetData, ETimeTrialClearRankId InClearRank, FUserTimeTrialRaceData& OutRaceData);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckIsTargetTimeClear(const int32 InClockCount, const EStageId InStageId, const ESpeedClassId InSpeedClassId, ETimeTrialClearRankId& OutClearRank);
    
    UFUNCTION(BlueprintCallable)
    static void CheckHashGhostResultMatch(const ESpeedClassId InSpeedClass, const EStageId InStageId, bool& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckForNewRecord(const int32 InClockCount, const EStageId InStageId, const ESpeedClassId InSpeedClassId, bool& OutMedalAcquistion);
    
};

