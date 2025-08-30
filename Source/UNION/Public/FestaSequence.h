#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachine.h"
#include "FestaSequence.generated.h"

UCLASS(Blueprintable)
class UNION_API AFestaSequence : public AHierarchicalStateMachine {
    GENERATED_BODY()
public:
    AFestaSequence(const FObjectInitializer& ObjectInitializer);

};

