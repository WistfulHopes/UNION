#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachine.h"
#include "EDebugStartMenuSequenceState.h"
#include "DebugStartMenuSequence.generated.h"

UCLASS(Blueprintable)
class UNION_API ADebugStartMenuSequence : public AHierarchicalStateMachine {
    GENERATED_BODY()
public:
    ADebugStartMenuSequence(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNextDebugStartMenuSequenceState(EDebugStartMenuSequenceState InState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateIdle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateExit();
    
};

