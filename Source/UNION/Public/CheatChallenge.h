#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CheatChallenge.generated.h"

UCLASS(Blueprintable)
class UCheatChallenge : public UObject {
    GENERATED_BODY()
public:
    UCheatChallenge();

    UFUNCTION(BlueprintCallable, Exec)
    static void SpecialChallengeClear();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetChallengeStats(int32 InChallengeIndex, int32 InStatsCount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetChallengeIsUnlockSpecial(bool InUnlock);
    
    UFUNCTION(BlueprintCallable, Exec)
    static void MainChallengeClear();
    
    UFUNCTION(BlueprintCallable, Exec)
    static void AllChallengeReset();
    
    UFUNCTION(BlueprintCallable, Exec)
    static void AllChallengeProgressLog();
    
    UFUNCTION(BlueprintCallable, Exec)
    static void AllChallengeClear();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddChallengeStats(int32 InChallengeIndex, int32 InAddStats);
    
};

