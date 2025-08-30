#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LotteryRateData.h"
#include "GroupRaceRuleLotteryRateRankGroupData.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGroupRaceRuleLotteryRateRankGroupData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLotteryRateData LotteryRateData_RankGroup1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLotteryRateData LotteryRateData_RankGroup2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLotteryRateData LotteryRateData_RankGroup3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLotteryRateData LotteryRateData_RankGroup4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLotteryRateData LotteryRateData_RankGroup5;
    
    FGroupRaceRuleLotteryRateRankGroupData();
};

