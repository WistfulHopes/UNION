#pragma once
#include "CoreMinimal.h"
#include "RaceCeremonySequenceStateBase.h"
#include "EventStateAfterCeremony.generated.h"

class ARaceSequence;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UEventStateAfterCeremony : public URaceCeremonySequenceStateBase {
    GENERATED_BODY()
public:
    UEventStateAfterCeremony(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRaceSequence(ARaceSequence* Sequence);
    
};

