#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachineStateComponent.h"
#include "JukeBoxSequenceStateSettingBGM.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UJukeBoxSequenceStateSettingBGM : public UHierarchicalStateMachineStateComponent {
    GENERATED_BODY()
public:
    UJukeBoxSequenceStateSettingBGM(const FObjectInitializer& ObjectInitializer);

};

