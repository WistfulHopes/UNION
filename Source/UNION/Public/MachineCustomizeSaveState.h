#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachineStateComponent.h"
#include "MachineCustomizeSaveState.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UMachineCustomizeSaveState : public UHierarchicalStateMachineStateComponent {
    GENERATED_BODY()
public:
    UMachineCustomizeSaveState(const FObjectInitializer& ObjectInitializer);

};

