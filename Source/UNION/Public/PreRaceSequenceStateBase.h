#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachineStateComponent.h"
#include "EPreRaceSequenceState.h"
#include "PreRaceSequenceStateBase.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UPreRaceSequenceStateBase : public UHierarchicalStateMachineStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPreRaceSequenceState DefaultSequenceState;
    
public:
    UPreRaceSequenceStateBase(const FObjectInitializer& ObjectInitializer);

};

