#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EGroupRaceItemLotteryCorrectionType.h"
#include "GroupRaceRuleLotteryRateRankGroupData.h"
#include "GroupRaceRuleLotteryRateData.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGroupRaceRuleLotteryRateData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGroupRaceItemLotteryCorrectionType CorrectionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGroupRaceRuleLotteryRateRankGroupData NormalBoxRankGroupData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGroupRaceRuleLotteryRateRankGroupData SpecialBoxRankGroupData;
    
    FGroupRaceRuleLotteryRateData();
};

