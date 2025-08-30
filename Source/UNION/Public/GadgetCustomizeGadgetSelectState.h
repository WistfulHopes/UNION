#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachineStateComponent.h"
#include "GadgetCustomizeGadgetSelectState.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UGadgetCustomizeGadgetSelectState : public UHierarchicalStateMachineStateComponent {
    GENERATED_BODY()
public:
    UGadgetCustomizeGadgetSelectState(const FObjectInitializer& ObjectInitializer);

};

