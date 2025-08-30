#pragma once
#include "CoreMinimal.h"
#include "RaceSequenceStateBase.h"
#include "RaceSequenceStateGadgetPlate.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URaceSequenceStateGadgetPlate : public URaceSequenceStateBase {
    GENERATED_BODY()
public:
    URaceSequenceStateGadgetPlate(const FObjectInitializer& ObjectInitializer);

};

