#pragma once
#include "CoreMinimal.h"
#include "MenuSequenceSubStateBase.h"
#include "TimeTrialRankingState.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UTimeTrialRankingState : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
    UTimeTrialRankingState(const FObjectInitializer& ObjectInitializer);

};

