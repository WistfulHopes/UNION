#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachineStateComponent.h"
#include "GadgetCustomizeInitState.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UGadgetCustomizeInitState : public UHierarchicalStateMachineStateComponent {
    GENERATED_BODY()
public:
    UGadgetCustomizeInitState(const FObjectInitializer& ObjectInitializer);

};

