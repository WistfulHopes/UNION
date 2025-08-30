#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachine.h"
#include "MenuSequenceUIInterface.h"
#include "EndingSequence.generated.h"

UCLASS(Blueprintable)
class UNION_API AEndingSequence : public AHierarchicalStateMachine, public IMenuSequenceUIInterface {
    GENERATED_BODY()
public:
    AEndingSequence(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

