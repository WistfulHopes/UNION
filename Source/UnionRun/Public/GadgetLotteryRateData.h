#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EGadgetId.h"
#include "RankGroupLotteryRateDataTableList.h"
#include "GadgetLotteryRateData.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGadgetLotteryRateData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGadgetId gadgetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRankGroupLotteryRateDataTableList RankGroupLotteryRateDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRankGroupLotteryRateDataTableList SpecialBox_RankGroupLotteryRateDataTable;
    
    FGadgetLotteryRateData();
};

