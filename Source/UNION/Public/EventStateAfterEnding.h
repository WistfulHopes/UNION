#pragma once
#include "CoreMinimal.h"
#include "RaceEndingSequenceStateBase.h"
#include "EventStateAfterEnding.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UEventStateAfterEnding : public URaceEndingSequenceStateBase {
    GENERATED_BODY()
public:
    UEventStateAfterEnding(const FObjectInitializer& ObjectInitializer);

};

