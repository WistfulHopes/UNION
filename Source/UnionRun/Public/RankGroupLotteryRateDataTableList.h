#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELotteryRateType.h"
#include "RankGroupLotteryRateDataTable.h"
#include "RankGroupLotteryRateDataTableList.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FRankGroupLotteryRateDataTableList : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELotteryRateType LotteryRateType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRankGroupLotteryRateDataTable RankGroupLotteryRateDataTable__RankGroup1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRankGroupLotteryRateDataTable RankGroupLotteryRateDataTable__RankGroup2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRankGroupLotteryRateDataTable RankGroupLotteryRateDataTable__RankGroup3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRankGroupLotteryRateDataTable RankGroupLotteryRateDataTable__RankGroup4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRankGroupLotteryRateDataTable RankGroupLotteryRateDataTable__RankGroup5;
    
    FRankGroupLotteryRateDataTableList();
};

