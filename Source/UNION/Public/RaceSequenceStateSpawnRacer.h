#pragma once
#include "CoreMinimal.h"
#include "RaceSequenceStateBase.h"
#include "RaceSequenceStateSpawnRacer.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URaceSequenceStateSpawnRacer : public URaceSequenceStateBase {
    GENERATED_BODY()
public:
    URaceSequenceStateSpawnRacer(const FObjectInitializer& ObjectInitializer);

};

