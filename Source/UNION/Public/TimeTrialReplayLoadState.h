#pragma once
#include "CoreMinimal.h"
#include "EStageId.h"
#include "MenuSequenceSubStateBase.h"
#include "TimeTrialReplayLoadState.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UTimeTrialReplayLoadState : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
    UTimeTrialReplayLoadState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ReplayDataLoad(const EStageId StageId);
    
    UFUNCTION(BlueprintCallable)
    bool IsReplayDataLoad();
    
};

