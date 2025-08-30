#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ChallengePointReward.h"
#include "ChallengeStatsData.h"
#include "ChallengeStruct.h"
#include "EChallengeCategory.h"
#include "EChallengeId.h"
#include "EChallengeProgressState.h"
#include "ChallengeStatsUtility.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UChallengeStatsUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UChallengeStatsUtility();

    UFUNCTION(BlueprintCallable)
    static void SetChallengeStats(EChallengeId InChallengeId, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetChallengeProgressState(const EChallengeId InChallengeId, const EChallengeProgressState InProgressState);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCompleteChallengeCategory(const EChallengeCategory InCategory);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCompleteChallenge(const EChallengeId InChallengeId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsChallengeCategoryNewIcon(const EChallengeCategory InCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsChallengeAcquiredStateCheck();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetSpecialChallengeClearCount();
    
    UFUNCTION(BlueprintCallable)
    static FChallengePointReward GetPointReward(int32 ItemGetBgIdx, int32 ItemGetPointIdx);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetChallengeStatsCount(const EChallengeId InChallengeId);
    
    UFUNCTION(BlueprintCallable)
    static FChallengeStatsData GetChallengeStats(const EChallengeId InChallengeId);
    
    UFUNCTION(BlueprintCallable)
    static EChallengeProgressState GetChallengeProgressState(const EChallengeId InChallengeId);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetChallengeProgressCount();
    
    UFUNCTION(BlueprintCallable)
    static FChallengeStruct GetChallengeData(const EChallengeId InChallengeId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EChallengeCategory GetChallengeCategory(const EChallengeId InId);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FChallengeStatsData> GetCategoryStats(const EChallengeCategory InCategory);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCategoryClearCount(const EChallengeCategory InCategory);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FChallengeStruct> GetCategoryChallengeData(const EChallengeCategory InCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<EChallengeId> GetCategoryChallenge(const EChallengeCategory InCategory);
    
    UFUNCTION(BlueprintCallable)
    static void CheckAllChallengeStats();
    
    UFUNCTION(BlueprintCallable)
    static void ChallengeProgressUpdateCategory(const EChallengeCategory InCategory);
    
    UFUNCTION(BlueprintCallable)
    static void AddChallengeStats(EChallengeId InChallengeId, int32 InValue);
    
};

