#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CheatTimeTrial.generated.h"

UCLASS(Blueprintable)
class UNION_API UCheatTimeTrial : public UObject {
    GENERATED_BODY()
public:
    UCheatTimeTrial();

    UFUNCTION(BlueprintCallable, Exec)
    void SetTimeTrialClearRank(int32 InSpeedClassId, int32 InStageId, int32 InRankId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetMainAllExceptOneTimeTrialClearRank(int32 InSpeedClassId, int32 InRankId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCurrentStageVersion(int32 InStageVersion);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCrossWorldAllExceptOneTimeTrialClearRank(int32 InSpeedClassId, int32 InRankId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAllTimeTrialClearRank(int32 InRankId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetAllTimeTrialClearRank();
    
};

