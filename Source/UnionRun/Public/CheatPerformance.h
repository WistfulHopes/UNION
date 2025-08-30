#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RaceCheatManagerMemberInterface.h"
#include "CheatPerformance.generated.h"

UCLASS(Blueprintable)
class UCheatPerformance : public UObject, public IRaceCheatManagerMemberInterface {
    GENERATED_BODY()
public:
    UCheatPerformance();

private:
    UFUNCTION(BlueprintCallable)
    void Execute_RaceTestConfig_SetAutoUnrealInsights(const TArray<FString>& args);
    
    UFUNCTION(BlueprintCallable)
    void Execute_DebugRayCastStop(const TArray<FString>& args);
    
    UFUNCTION(BlueprintCallable)
    void Execute_DebugRayCast(const TArray<FString>& args);
    
    UFUNCTION(BlueprintCallable)
    void Execute_CheatPerformanceSetSeq(const TArray<FString>& args);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void CheckRaceCheatManagerTick(int32 on);
    

    // Fix for true pure virtual functions not being implemented
};

