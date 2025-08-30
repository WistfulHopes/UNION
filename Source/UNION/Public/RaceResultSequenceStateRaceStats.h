#pragma once
#include "CoreMinimal.h"
#include "RaceResultSequenceStateBase.h"
#include "RaceResultSequenceStateRaceStats.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URaceResultSequenceStateRaceStats : public URaceResultSequenceStateBase {
    GENERATED_BODY()
public:
    URaceResultSequenceStateRaceStats(const FObjectInitializer& ObjectInitializer);

};

