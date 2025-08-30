#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ERateRank.h"
#include "RateRankBonus.h"
#include "RewardGetWindowParam.h"
#include "ResultRateRankSubRateWindow.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UResultRateRankSubRateWindow : public UUserWidget {
    GENERATED_BODY()
public:
    UResultRateRankSubRateWindow();

    UFUNCTION(BlueprintCallable)
    static void SaveRateReward(const TArray<FRewardGetWindowParam>& RewardGetWindowParamList);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FRewardGetWindowParam> GetRateRewardParamList(bool bIsGetReward, ERateRank NowRank);
    
    UFUNCTION(BlueprintCallable)
    FRateRankBonus GetRatePromotionBonus();
    
};

