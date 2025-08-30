#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachineStateComponent.h"
#include "EMenuSequenceMainState.h"
#include "EMenuSequenceSubState.h"
#include "OnChangeStateDelegateDelegate.h"
#include "MenuSequenceSubStateBase.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UMenuSequenceSubStateBase : public UHierarchicalStateMachineStateComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMenuSequenceSubState DefaultMenuState;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeStateDelegate OnBackStateEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeStateDelegate OnExitStateEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OwnerSequence;
    
public:
    UMenuSequenceSubStateBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNextMenuSequenceSubState(EMenuSequenceSubState InState);
    
    UFUNCTION(BlueprintCallable)
    void SetNextMenuSequenceState(EMenuSequenceMainState InState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOwnerSequence() const;
    
};

