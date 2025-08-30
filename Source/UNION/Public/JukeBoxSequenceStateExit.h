#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachineStateComponent.h"
#include "JukeBoxSequenceStateExit.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UJukeBoxSequenceStateExit : public UHierarchicalStateMachineStateComponent {
    GENERATED_BODY()
public:
    UJukeBoxSequenceStateExit(const FObjectInitializer& ObjectInitializer);

};

