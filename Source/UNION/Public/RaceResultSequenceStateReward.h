#pragma once
#include "CoreMinimal.h"
#include "RaceResultSequenceStateBase.h"
#include "RaceResultSequenceStateReward.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URaceResultSequenceStateReward : public URaceResultSequenceStateBase {
    GENERATED_BODY()
public:
    URaceResultSequenceStateReward(const FObjectInitializer& ObjectInitializer);

};

