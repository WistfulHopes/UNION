#pragma once
#include "CoreMinimal.h"
#include "RaceResultSequenceStateBase.h"
#include "RaceResultSequenceStateGhostSave.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URaceResultSequenceStateGhostSave : public URaceResultSequenceStateBase {
    GENERATED_BODY()
public:
    URaceResultSequenceStateGhostSave(const FObjectInitializer& ObjectInitializer);

};

