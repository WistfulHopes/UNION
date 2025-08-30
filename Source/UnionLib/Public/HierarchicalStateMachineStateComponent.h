#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HierarchicalStateMachineStateComponent.generated.h"

class AHierarchicalStateMachine;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNIONLIB_API UHierarchicalStateMachineStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoRegistration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultStateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AHierarchicalStateMachine> ChildStateMachineClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateEvenWhenPaused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedInitFadeOut;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHierarchicalStateMachine* OwnerStateMachine;
    
public:
    UHierarchicalStateMachineStateComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetNextState(int32 InNextState);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetNeedInitFadeOut(bool InNeed);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetExitCode(int32 InExitCode);
    
public:
    UFUNCTION(BlueprintCallable)
    void RegisterState(int32 InOverrideState, FName InOverrideStateName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateState(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitState();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStateNameAsString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetStateName() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStateCount() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetState() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHierarchicalStateMachine* GetOwnerStateMachine() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextState() const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool GetNeedInitFadeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetDefaultState() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentStateTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentStateFrame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHierarchicalStateMachine* GetChildStateMachine() const;
    
};

