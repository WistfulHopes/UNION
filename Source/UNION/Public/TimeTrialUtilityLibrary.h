#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EDriverId.h"
#include "EGrandPrixId.h"
#include "ESpeedClassId.h"
#include "EStageId.h"
#include "ETimeTrialClearRankId.h"
#include "ETimeTrialWinLoseDispId.h"
#include "TimeTrialUtilityLibrary.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class UNION_API UTimeTrialUtilityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTimeTrialUtilityLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetTimeTrialMedalAcquisitionPerStage(ESpeedClassId InSpeedClass, const EStageId InStageId, bool bInAcquisition);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlatformUserId(const FString& InPlatformUserId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText LapTimeText(const int32 InMillimeterSecondTime);
    
    UFUNCTION(BlueprintCallable)
    static bool IsTimeTrialMedalComplete(ESpeedClassId InSpeedClass);
    
    UFUNCTION(BlueprintCallable)
    static bool IsStageIdIndexActive(const int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static bool IsStageIdActive(const EStageId InStageId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetTotalTimeTrialMedalMax();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetTotalTimeTrialMedalCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetTotalExtndTimeTrialMedalMax();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetTotalExtndTimeTrialMedalCount();
    
    UFUNCTION(BlueprintCallable)
    static ETimeTrialWinLoseDispId GetTimeTrialWinLoseId(ESpeedClassId InSpeedClass, EStageId InStageId, bool bGhostOnline);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetTimeTrialMedalCountMainStage(ESpeedClassId InSpeedClass, int32& OutSRankCount);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetTimeTrialMedalCountCrossWorld(ESpeedClassId InSpeedClass, int32& OutSRankCount);
    
    UFUNCTION(BlueprintCallable)
    static bool GetTimeTrialMedalAcquisitionPerStage(ESpeedClassId InSpeedClass, const EStageId InStageId);
    
    UFUNCTION(BlueprintCallable)
    static TArray<bool> GetTimeTrialMedalAcquisitionPerGrandPrix(ESpeedClassId InSpeedClass, const EGrandPrixId InGrandprixId, TArray<ETimeTrialClearRankId>& OutTimeTrialRanks);
    
    UFUNCTION(BlueprintCallable)
    static TArray<bool> GetTimeTrialMedalAcquisitionPerCrossWorld(ESpeedClassId InSpeedClass, TArray<ETimeTrialClearRankId>& OutTimeTrialRanks);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetTimeTrialMedalAcquisitionPerClass(ESpeedClassId InSpeedClass, bool bIsExtnd);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPlatformUserId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<EStageId> GetMainStages();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<EStageId> GetExthdStages();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<EStageId> GetCrossWorldStages();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetClassTimeTrialMedalMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetClassExtndTimeTrialMedalMax();
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* GetCharacterIconTexture(const EDriverId InDriverId);
    
private:
    UFUNCTION(BlueprintCallable)
    static TArray<EStageId> FindStagesWithoutGhostUpload(const ESpeedClassId InSpeedClassId);
    
public:
    UFUNCTION(BlueprintCallable)
    static bool FindAllWithoutGhostUpload(TArray<EStageId>& OutSonicSpeedList, TArray<EStageId>& OutSuperSonicSpeedList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText ConvertClockCountToLapTimeText(const int32 InClockCount);
    
};

