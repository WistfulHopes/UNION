#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachineStateComponent.h"
#include "ERaceResultSequenceState.h"
#include "RaceResultSequenceStateBase.generated.h"

class ARaceResultSequence;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URaceResultSequenceStateBase : public UHierarchicalStateMachineStateComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERaceResultSequenceState DefaultMenuState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARaceResultSequence* OwnerRaceResultSequence;
    
public:
    URaceResultSequenceStateBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNextRaceResultSequenceState(ERaceResultSequenceState InState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARaceResultSequence* GetOwnerRaceResultSequence() const;
    
};

