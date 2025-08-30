#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachineStateComponent.h"
#include "ReadyInputWaitState.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UReadyInputWaitState : public UHierarchicalStateMachineStateComponent {
    GENERATED_BODY()
public:
    UReadyInputWaitState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsAllPlayerChecked();
    
};

