#pragma once
#include "CoreMinimal.h"
#include "RaceSequenceStateBase.h"
#include "JudgeEndingState.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UJudgeEndingState : public URaceSequenceStateBase {
    GENERATED_BODY()
public:
    UJudgeEndingState(const FObjectInitializer& ObjectInitializer);

};

