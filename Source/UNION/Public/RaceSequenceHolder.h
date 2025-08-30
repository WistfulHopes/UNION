#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachineHolder.h"
#include "EGameModeId.h"
#include "RaceSequenceHolder.generated.h"

UCLASS(Blueprintable)
class UNION_API ARaceSequenceHolder : public AHierarchicalStateMachineHolder {
    GENERATED_BODY()
public:
    ARaceSequenceHolder(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopForceFeedbackLocalPlayerAll();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelectMenuRetry() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGameModeId GetNextGameMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEndIndexForTimeTrial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEndIndexForParty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEndIndexForMatchRace() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEndIndexForGrandPrix() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEndIndexForDebugModeMatchRace() const;
    
    UFUNCTION(BlueprintCallable)
    int32 DoCategorizeMenuSelect();
    
};

