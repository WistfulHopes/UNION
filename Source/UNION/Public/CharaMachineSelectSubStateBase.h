#pragma once
#include "CoreMinimal.h"
#include "EMachineSelectControlState.h"
#include "MenuSequenceSubStateBase.h"
#include "CharaMachineSelectSubStateBase.generated.h"

class ACharaMachineSelectSequence;
class UCharaMachineSelectsBase;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UCharaMachineSelectSubStateBase : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EMachineSelectControlState> MachineSelectControlState;
    
public:
    UCharaMachineSelectSubStateBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UnregisterInputReceivers();
    
    UFUNCTION(BlueprintCallable)
    void SetupFooter();
    
    UFUNCTION(BlueprintCallable)
    void Setup();
    
    UFUNCTION(BlueprintCallable)
    void SetSaveRequest(bool IsSave);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void RegisterInputReceivers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACharaMachineSelectSequence* GetSequence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCharaMachineSelectsBase* GetCharaMachineSelectWindow() const;
    
};

