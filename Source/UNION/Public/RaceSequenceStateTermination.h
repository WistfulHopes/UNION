#pragma once
#include "CoreMinimal.h"
#include "EGameModeId.h"
#include "RaceSequenceStateBase.h"
#include "RaceSequenceStateTermination.generated.h"

class AHierarchicalStateMachine;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URaceSequenceStateTermination : public URaceSequenceStateBase {
    GENERATED_BODY()
public:
    URaceSequenceStateTermination(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestQuitLobbyNative();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRaceTermination();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBackToMenu() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHierarchicalStateMachine* GetRootStateMachine() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetReservedExitCode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGameModeId GetNextGameMode() const;
    
    UFUNCTION(BlueprintCallable)
    void EndTerminationState();
    
};

