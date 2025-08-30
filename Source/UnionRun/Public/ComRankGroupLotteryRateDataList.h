#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EComLotteryRateDataTableType.h"
#include "RankGroupLotteryRateDataTableList.h"
#include "ComRankGroupLotteryRateDataList.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FComRankGroupLotteryRateDataList : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EComLotteryRateDataTableType ComLotteryRateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRankGroupLotteryRateDataTableList Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRankGroupLotteryRateDataTableList Special;
    
    FComRankGroupLotteryRateDataList();
};

