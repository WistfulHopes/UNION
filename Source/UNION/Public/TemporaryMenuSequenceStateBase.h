#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachineStateComponent.h"
#include "EMenuSequenceMainState.h"
#include "TemporaryMenuSequenceStateBase.generated.h"

class ATemporaryMenuSequence;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UTemporaryMenuSequenceStateBase : public UHierarchicalStateMachineStateComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMenuSequenceMainState DefaultMenuState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATemporaryMenuSequence* OwnerMenuSequence;
    
public:
    UTemporaryMenuSequenceStateBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNextMenuSequenceState(EMenuSequenceMainState InState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATemporaryMenuSequence* GetOwnerMenuSequence() const;
    
};

