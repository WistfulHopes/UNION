#pragma once
#include "CoreMinimal.h"
#include "RaceSequenceStateBase.h"
#include "RaceSequenceStateResult.generated.h"

class UUnionRacers;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URaceSequenceStateResult : public URaceSequenceStateBase {
    GENERATED_BODY()
public:
    URaceSequenceStateResult(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateResultData();
    
    UFUNCTION(BlueprintCallable)
    void UpdateRecentPlayerData();
    
    UFUNCTION(BlueprintCallable)
    void SetResultDataByRacers(UUnionRacers* InRacers);
    
    UFUNCTION(BlueprintCallable)
    void SetPartyRaceRivalWinLoseResult();
    
    UFUNCTION(BlueprintCallable)
    void SetGrandPrixCompleteResult(const int32 LocalPlayerControllerId);
    
    UFUNCTION(BlueprintCallable)
    void SaveResultRewardAndPoint();
    
    UFUNCTION(BlueprintCallable)
    bool IsRewardUpdateNeeded();
    
};

