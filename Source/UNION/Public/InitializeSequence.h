#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachine.h"
#include "InitializeSequence.generated.h"

UCLASS(Blueprintable)
class UNION_API AInitializeSequence : public AHierarchicalStateMachine {
    GENERATED_BODY()
public:
    AInitializeSequence(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void StartLoadingAnime();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdateStateEnterMenu(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateStateBoot(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateStateBody(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnInitStateEnterMenu();
    
    UFUNCTION(BlueprintCallable)
    void OnInitStateBoot();
    
    UFUNCTION(BlueprintCallable)
    void OnInitStateBody();
    
    UFUNCTION(BlueprintCallable)
    void OnExitStateEnterMenu();
    
public:
    UFUNCTION(BlueprintCallable)
    static bool IsLoadedMenuResidentAsset();
    
    UFUNCTION(BlueprintCallable)
    static void ExecuteLoadSequence(FName LevelName, float CheckInterval);
    
    UFUNCTION(BlueprintCallable)
    static void EndLoadingAnime();
    
};

