#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachineStateComponent.h"
#include "GadgetCustomizeAttachCompleteState.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UGadgetCustomizeAttachCompleteState : public UHierarchicalStateMachineStateComponent {
    GENERATED_BODY()
public:
    UGadgetCustomizeAttachCompleteState(const FObjectInitializer& ObjectInitializer);

};

