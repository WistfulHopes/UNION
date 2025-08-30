#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DistanceGroupLotteryRateDataTable.h"
#include "RankGroupLotteryRateDataTable.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FRankGroupLotteryRateDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDistanceGroupLotteryRateDataTable LotteryRateDatas_1stLap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDistanceGroupLotteryRateDataTable LotteryRateDatas_2ndLap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDistanceGroupLotteryRateDataTable LotteryRateDatas_3rdLap;
    
    FRankGroupLotteryRateDataTable();
};

