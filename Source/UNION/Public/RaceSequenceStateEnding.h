#pragma once
#include "CoreMinimal.h"
#include "RaceSequenceStateBase.h"
#include "RaceSequenceStateEnding.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URaceSequenceStateEnding : public URaceSequenceStateBase {
    GENERATED_BODY()
public:
    URaceSequenceStateEnding(const FObjectInitializer& ObjectInitializer);

};

