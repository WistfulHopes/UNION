#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachineStateComponent.h"
#include "JukeBoxSequenceStateEnter.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UJukeBoxSequenceStateEnter : public UHierarchicalStateMachineStateComponent {
    GENERATED_BODY()
public:
    UJukeBoxSequenceStateEnter(const FObjectInitializer& ObjectInitializer);

};

