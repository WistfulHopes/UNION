#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HierarchicalStateMachineStateInfo.h"
#include "HierarchicalStateMachine.generated.h"

class AHierarchicalStateMachine;
class UChildActorComponent;

UCLASS(Abstract, Blueprintable)
class UNIONLIB_API AHierarchicalStateMachine : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StateMachineName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* ChildStateMachineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHierarchicalStateMachine* ChildStateMachine;
    
public:
    AHierarchicalStateMachine(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SetNextStateUsingName(FName InNextStateName);
    
    UFUNCTION(BlueprintCallable)
    void SetNextState(int32 InNextState);
    
    UFUNCTION(BlueprintCallable)
    void SetExitCode(int32 InExitCode);
    
    UFUNCTION(BlueprintCallable)
    void RegisterStateInfoMap(const TMap<int32, FHierarchicalStateMachineStateInfo>& InStateInfoMap);
    
    UFUNCTION(BlueprintCallable)
    int32 RegisterStateInfo(int32 InState, const FHierarchicalStateMachineStateInfo& InStateInfo);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdate(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitialize();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFinalize();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFinalized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStateNameAsString(int32 InState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetStateName(int32 InState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStateMachineNameAsString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStateCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetExitCode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentStateTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentStateNameAsString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentStateName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentStateFrame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHierarchicalStateMachine* GetChildStateMachine() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BuildHierarchicalStateMachineNames(TArray<FString>& OutStringArray) const;
    
    UFUNCTION(BlueprintCallable)
    int32 AddStateInfo(const FHierarchicalStateMachineStateInfo& InStateInfo);
    
};

