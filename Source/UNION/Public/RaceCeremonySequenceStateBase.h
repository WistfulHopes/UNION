#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachineStateComponent.h"
#include "ERaceCeremonySequenceState.h"
#include "RaceCeremonySequenceStateBase.generated.h"

class ARaceCeremonySequence;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URaceCeremonySequenceStateBase : public UHierarchicalStateMachineStateComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERaceCeremonySequenceState DefaultMenuState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARaceCeremonySequence* OwnerRaceCeremonySequence;
    
public:
    URaceCeremonySequenceStateBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNextRaceCeremonySequenceState(ERaceCeremonySequenceState InState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARaceCeremonySequence* GetOwnerRaceCeremonySequence() const;
    
};

