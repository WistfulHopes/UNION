#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachine.h"
#include "EReadySequenceState.h"
#include "ReadySequence.generated.h"

UCLASS(Blueprintable)
class UNION_API AReadySequence : public AHierarchicalStateMachine {
    GENERATED_BODY()
public:
    AReadySequence(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNextReadyState(EReadySequenceState InState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EReadySequenceState GetCurrentReadyState() const;
    
};

