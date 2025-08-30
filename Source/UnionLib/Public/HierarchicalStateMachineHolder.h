#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HierarchicalStateMachineHolder.generated.h"

class AHierarchicalStateMachine;
class UChildActorComponent;

UCLASS(Blueprintable)
class UNIONLIB_API AHierarchicalStateMachineHolder : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoActivateStateMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AHierarchicalStateMachine> RootStateMachineClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHierarchicalStateMachine* RootStateMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* RootStateMachineComponent;
    
public:
    AHierarchicalStateMachineHolder(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFinalize();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStateMachineActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHierarchicalStateMachine* GetRootStateMachine() const;
    
    UFUNCTION(BlueprintCallable)
    void ActivateStateMachine();
    
};

