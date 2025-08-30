#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachineStateComponent.h"
#include "ERaceErrorHandlingState.h"
#include "RaceErrorHandlingSequenceStateBase.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URaceErrorHandlingSequenceStateBase : public UHierarchicalStateMachineStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERaceErrorHandlingState DefaultSequenceState;
    
public:
    URaceErrorHandlingSequenceStateBase(const FObjectInitializer& ObjectInitializer);

};

