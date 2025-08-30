#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachineStateComponent.h"
#include "EDebugStartMenuSequenceState.h"
#include "DebugStartMenuSequenceStateBase.generated.h"

class ADebugStartMenuSequence;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UDebugStartMenuSequenceStateBase : public UHierarchicalStateMachineStateComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDebugStartMenuSequenceState DefaultMenuState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADebugStartMenuSequence* OwnerDebugStartMenuSequence;
    
public:
    UDebugStartMenuSequenceStateBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNextDebugStartMenuSequenceState(EDebugStartMenuSequenceState InState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADebugStartMenuSequence* GetOwnerDebugStartMenuSequence() const;
    
};

