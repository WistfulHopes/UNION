#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachineStateComponent.h"
#include "EBootSequenceState.h"
#include "BootSequenceStateBase.generated.h"

class ABootSequence;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UBootSequenceStateBase : public UHierarchicalStateMachineStateComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBootSequenceState DefaultMenuState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABootSequence* OwnerBootSequence;
    
public:
    UBootSequenceStateBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNextBootSequenceState(EBootSequenceState InState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABootSequence* GetOwnerBootSequence() const;
    
};

