#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RaceCheatManagerMemberInterface.h"
#include "CheatItem.generated.h"

UCLASS(Blueprintable)
class UCheatItem : public UObject, public IRaceCheatManagerMemberInterface {
    GENERATED_BODY()
public:
    UCheatItem();

private:
    UFUNCTION(BlueprintCallable)
    void Execute_ShowItemCount(const TArray<FString>& args);
    
    UFUNCTION(BlueprintCallable)
    void Execute_SetItemSlimeAutoUserInput(const TArray<FString>& args);
    
    UFUNCTION(BlueprintCallable)
    void Execute_SetItemRocketPunchForceNoReflect(const TArray<FString>& args);
    
    UFUNCTION(BlueprintCallable)
    void Execute_SetItemHitToMachine(const TArray<FString>& args);
    
    UFUNCTION(BlueprintCallable)
    void Execute_SetItemHitToItem(const TArray<FString>& args);
    
    UFUNCTION(BlueprintCallable)
    void Execute_SetItemCapacity(const TArray<FString>& args);
    
    UFUNCTION(BlueprintCallable)
    void Execute_DebugItemCountStop(const TArray<FString>& args);
    
    UFUNCTION(BlueprintCallable)
    void Execute_DebugItemCount(const TArray<FString>& args);
    
    UFUNCTION(BlueprintCallable)
    void Execute_AllRacerUseItemMode(const TArray<FString>& args);
    

    // Fix for true pure virtual functions not being implemented
};

