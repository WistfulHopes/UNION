#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachine.h"
#include "EMenuSequenceMainState.h"
#include "EMenuSequenceSubState.h"
#include "RankMatchMenuSequence.generated.h"

UCLASS(Blueprintable)
class UNION_API ARankMatchMenuSequence : public AHierarchicalStateMachine {
    GENERATED_BODY()
public:
    ARankMatchMenuSequence(const FObjectInitializer& ObjectInitializer);

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

