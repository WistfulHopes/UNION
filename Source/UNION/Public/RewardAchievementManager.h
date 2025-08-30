#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ERewardAchievementDriverType.h"
#include "ERewardAchievementType.h"
#include "RewardAchievementManager.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UNION_API URewardAchievementManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* RewardAchievementDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* RewardAchievementDriverDataTable;
    
    URewardAchievementManager();

    UFUNCTION(BlueprintCallable)
    void SetRewardGetDisplayRequest(ERewardAchievementType InRewardAchievementType);
    
    UFUNCTION(BlueprintCallable)
    void SetRewardAchievementRankMatch();
    
    UFUNCTION(BlueprintCallable)
    void SetRewardAchievementGrandPrix();
    
    UFUNCTION(BlueprintCallable)
    void SetRewardAchievementByType(ERewardAchievementType InRewardAchievementType, bool bInNoRequest);
    
    UFUNCTION(BlueprintCallable)
    void SetRewardAchievementByDriverType(ERewardAchievementDriverType InRewardAchievementDriverType, bool bInNoRequest);
    
    UFUNCTION(BlueprintCallable)
    void SetRewardAchievement();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSetRewardAchievement() const;
    
    UFUNCTION(BlueprintCallable)
    bool CheckRewardAchievementDriverCondition(ERewardAchievementDriverType InRewardAchievementDriverType);
    
    UFUNCTION(BlueprintCallable)
    bool CheckRewardAchievementCondition(ERewardAchievementType InRewardAchievementType);
    
    UFUNCTION(BlueprintCallable)
    bool CheckGetRewardAchievement(ERewardAchievementType InRewardAchievementType);
    
};

