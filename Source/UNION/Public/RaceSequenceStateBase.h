#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachineStateComponent.h"
#include "ERaceSequenceState.h"
#include "RaceSequenceStateBase.generated.h"

class ARaceSequence;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URaceSequenceStateBase : public UHierarchicalStateMachineStateComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERaceSequenceState DefaultMenuState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARaceSequence* OwnerRaceSequence;
    
public:
    URaceSequenceStateBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    bool StartTimeoutTimer(float TimeoutTime);
    
public:
    UFUNCTION(BlueprintCallable)
    bool SetNextRaceSequenceState(ERaceSequenceState InState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTimeout();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARaceSequence* GetOwnerRaceSequence() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearTimeoutTimer();
    
};

