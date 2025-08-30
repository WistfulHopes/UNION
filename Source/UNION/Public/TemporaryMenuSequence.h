#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachine.h"
#include "EMenuSequenceMainState.h"
#include "EMenuSequenceSubState.h"
#include "TemporaryMenuSequence.generated.h"

UCLASS(Blueprintable)
class UNION_API ATemporaryMenuSequence : public AHierarchicalStateMachine {
    GENERATED_BODY()
public:
    ATemporaryMenuSequence(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNextSubMenuSequenceState(EMenuSequenceSubState InState);
    
    UFUNCTION(BlueprintCallable)
    void SetNextMenuSequenceState(EMenuSequenceMainState InState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateIdle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateExit();
    
};

