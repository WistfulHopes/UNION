#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachineStateComponent.h"
#include "GadgetCustomize2InitState.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UGadgetCustomize2InitState : public UHierarchicalStateMachineStateComponent {
    GENERATED_BODY()
public:
    UGadgetCustomize2InitState(const FObjectInitializer& ObjectInitializer);

};

