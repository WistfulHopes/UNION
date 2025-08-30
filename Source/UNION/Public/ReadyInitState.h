#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachineStateComponent.h"
#include "ReadyInitState.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UReadyInitState : public UHierarchicalStateMachineStateComponent {
    GENERATED_BODY()
public:
    UReadyInitState(const FObjectInitializer& ObjectInitializer);

};

