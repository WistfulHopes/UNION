#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachineStateComponent.h"
#include "JukeBoxSequenceStateSelectBGM.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UJukeBoxSequenceStateSelectBGM : public UHierarchicalStateMachineStateComponent {
    GENERATED_BODY()
public:
    UJukeBoxSequenceStateSelectBGM(const FObjectInitializer& ObjectInitializer);

};

