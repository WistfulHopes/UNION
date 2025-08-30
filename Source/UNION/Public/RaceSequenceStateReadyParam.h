#pragma once
#include "CoreMinimal.h"
#include "RaceSequenceStateBase.h"
#include "RaceSequenceStateReadyParam.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URaceSequenceStateReadyParam : public URaceSequenceStateBase {
    GENERATED_BODY()
public:
    URaceSequenceStateReadyParam(const FObjectInitializer& ObjectInitializer);

};

