#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ERateRank.h"
#include "RateRankBonusList.h"
#include "ResultRateRank.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UResultRateRank : public UUserWidget {
    GENERATED_BODY()
public:
    UResultRateRank();

    UFUNCTION(BlueprintCallable)
    void PlayRateRank_RankUpVoice(ERateRank NextRank);
    
    UFUNCTION(BlueprintCallable)
    void PlayRateRank_GaugeUpDownVoice(ERateRank NowRateRank, float NowRate, float NextRate, float Bonus);
    
    UFUNCTION(BlueprintCallable)
    static FRateRankBonusList GetRateRankBonusList(bool& Get_bIsGetReward);
    
};

