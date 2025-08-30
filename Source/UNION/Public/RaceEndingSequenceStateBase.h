#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachineStateComponent.h"
#include "ERaceEndingSequenceState.h"
#include "RaceEndingSequenceStateBase.generated.h"

class ARaceEndingSequence;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URaceEndingSequenceStateBase : public UHierarchicalStateMachineStateComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERaceEndingSequenceState DefaultMenuState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARaceEndingSequence* OwnerRaceEndingSequence;
    
public:
    URaceEndingSequenceStateBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNextRaceEndingSequenceState(ERaceEndingSequenceState InState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARaceEndingSequence* GetOwnerRaceEndingSequence() const;
    
};

