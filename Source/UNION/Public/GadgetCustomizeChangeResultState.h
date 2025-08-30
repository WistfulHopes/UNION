#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachineStateComponent.h"
#include "GadgetCustomizeChangeResultState.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UGadgetCustomizeChangeResultState : public UHierarchicalStateMachineStateComponent {
    GENERATED_BODY()
public:
    UGadgetCustomizeChangeResultState(const FObjectInitializer& ObjectInitializer);

};

