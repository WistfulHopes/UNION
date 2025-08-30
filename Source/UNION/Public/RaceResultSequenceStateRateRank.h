#pragma once
#include "CoreMinimal.h"
#include "RaceResultSequenceStateBase.h"
#include "RaceResultSequenceStateRateRank.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URaceResultSequenceStateRateRank : public URaceResultSequenceStateBase {
    GENERATED_BODY()
public:
    URaceResultSequenceStateRateRank(const FObjectInitializer& ObjectInitializer);

};

