#pragma once
#include "CoreMinimal.h"
#include "OptionSequenceBase.h"
#include "OptionRaceSequence.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UOptionRaceSequence : public UOptionSequenceBase {
    GENERATED_BODY()
public:
    UOptionRaceSequence(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnIndicatorDecisionEvent(uint8 kind, uint8 Val);
    
};

