#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachine.h"
#include "GadgetCustomizeSequence.generated.h"

UCLASS(Blueprintable)
class UNION_API AGadgetCustomizeSequence : public AHierarchicalStateMachine {
    GENERATED_BODY()
public:
    AGadgetCustomizeSequence(const FObjectInitializer& ObjectInitializer);

};

