#pragma once
#include "CoreMinimal.h"
#include "StateMachineExitStateDelegateDelegate.h"
#include "StateMachineInitStateDelegateDelegate.h"
#include "StateMachineUpdateStateDelegateDelegate.h"
#include "HierarchicalStateMachineStateInfo.generated.h"

class AHierarchicalStateMachine;

USTRUCT(BlueprintType)
struct UNIONLIB_API FHierarchicalStateMachineStateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateMachineInitStateDelegate OnInitState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateMachineUpdateStateDelegate OnUpdateState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateMachineExitStateDelegate OnExitState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AHierarchicalStateMachine> ChildStateMachineClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateEvenWhenPaused;
    
    FHierarchicalStateMachineStateInfo();
};

