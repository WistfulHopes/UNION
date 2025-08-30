#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachine.h"
#include "ERaceEndingSequenceState.h"
#include "RaceEndingSequence.generated.h"

UCLASS(Blueprintable)
class UNION_API ARaceEndingSequence : public AHierarchicalStateMachine {
    GENERATED_BODY()
public:
    ARaceEndingSequence(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNextEndingState(ERaceEndingSequenceState InState);
    
};

