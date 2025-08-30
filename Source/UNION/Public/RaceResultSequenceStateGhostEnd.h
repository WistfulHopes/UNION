#pragma once
#include "CoreMinimal.h"
#include "RaceResultSequenceStateBase.h"
#include "RaceResultSequenceStateGhostEnd.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URaceResultSequenceStateGhostEnd : public URaceResultSequenceStateBase {
    GENERATED_BODY()
public:
    URaceResultSequenceStateGhostEnd(const FObjectInitializer& ObjectInitializer);

};

