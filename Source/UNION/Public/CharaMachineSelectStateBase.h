#pragma once
#include "CoreMinimal.h"
#include "OnBackEventDelegate.h"
#include "ECharaMachineSelectState.h"
#include "EMenuSequenceSubState.h"
#include "MenuSequenceSubStateBase.h"
#include "CharaMachineSelectStateBase.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UCharaMachineSelectStateBase : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBackEvent OnMachineSelectFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharaMachineSelectState DefaultCharaMachineSelectState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsExitCharaMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMenuSequenceSubState StartState;
    
    UCharaMachineSelectStateBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMessageBarVisible(bool bInIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MatchingTimeOut(float InTimeOutTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDefaultCharaMachineSelectState() const;
    
};

