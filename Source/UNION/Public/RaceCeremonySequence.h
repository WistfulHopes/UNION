#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachine.h"
#include "ERaceCeremonySequenceExitCode.h"
#include "ERaceCeremonySequenceState.h"
#include "RaceCeremonySequence.generated.h"

class ARaceSequence;

UCLASS(Abstract, Blueprintable)
class UNION_API ARaceCeremonySequence : public AHierarchicalStateMachine {
    GENERATED_BODY()
public:
    ARaceCeremonySequence(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRaceSequence(ARaceSequence* Sequence);
    
    UFUNCTION(BlueprintCallable)
    void SetNextCeremonyState(ERaceCeremonySequenceState InState);
    
    UFUNCTION(BlueprintCallable)
    void SetCeremonyExitCode(ERaceCeremonySequenceExitCode InValue);
    
};

