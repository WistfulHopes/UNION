#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachine.h"
#include "MenuSequenceUIInterface.h"
#include "PlayerInfoMenuSequence.generated.h"

UCLASS(Blueprintable)
class UNION_API APlayerInfoMenuSequence : public AHierarchicalStateMachine, public IMenuSequenceUIInterface {
    GENERATED_BODY()
public:
    APlayerInfoMenuSequence(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateIdle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateExit();
    

    // Fix for true pure virtual functions not being implemented
};

