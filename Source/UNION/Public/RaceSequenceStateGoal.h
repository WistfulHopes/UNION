#pragma once
#include "CoreMinimal.h"
#include "RaceSequenceStateBase.h"
#include "RaceSequenceStateGoal.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URaceSequenceStateGoal : public URaceSequenceStateBase {
    GENERATED_BODY()
public:
    URaceSequenceStateGoal(const FObjectInitializer& ObjectInitializer);

};

