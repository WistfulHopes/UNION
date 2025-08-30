#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "OnReadFestaPointCompleteDelegate.h"
#include "OnReadLegendCompeCompleteDelegate.h"
#include "OnReadRankMatchCompleteDelegate.h"
#include "OnReadTimeTrialCompleteDelegate.h"
#include "RankingSubsystem.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API URankingSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    URankingSubsystem();

    UFUNCTION(BlueprintCallable)
    bool GetRankingTimeTrial(const FString& FilePathFull, FOnReadTimeTrialComplete OnComplete);
    
    UFUNCTION(BlueprintCallable)
    bool GetRankingRankMatch(const FString& FilePathFull, FOnReadRankMatchComplete OnComplete);
    
    UFUNCTION(BlueprintCallable)
    bool GetRankingLegendCompe(const FString& FilePathFull, FOnReadLegendCompeComplete OnComplete);
    
    UFUNCTION(BlueprintCallable)
    bool GetRankingFestaPoint(const FString& FilePathFull, FOnReadFestaPointComplete OnComplete);
    
};

