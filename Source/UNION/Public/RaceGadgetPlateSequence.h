#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachine.h"
#include "RaceGadgetPlateSequence.generated.h"

UCLASS(Abstract, Blueprintable)
class UNION_API ARaceGadgetPlateSequence : public AHierarchicalStateMachine {
    GENERATED_BODY()
public:
    ARaceGadgetPlateSequence(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateSelect(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateIdle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateExit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateSelect();
    
};

