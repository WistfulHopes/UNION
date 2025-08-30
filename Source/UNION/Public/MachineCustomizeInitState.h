#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachineStateComponent.h"
#include "MachineCustomizeInitState.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UMachineCustomizeInitState : public UHierarchicalStateMachineStateComponent {
    GENERATED_BODY()
public:
    UMachineCustomizeInitState(const FObjectInitializer& ObjectInitializer);

};

