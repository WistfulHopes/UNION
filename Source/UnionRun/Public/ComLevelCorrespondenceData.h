#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EComLotteryRateDataTableType.h"
#include "EComPointDistanceTableType.h"
#include "ComLevelCorrespondenceData.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FComLevelCorrespondenceData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ComLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EComLotteryRateDataTableType ComLotteryRateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EComPointDistanceTableType PointDistanceGroup;
    
    FComLevelCorrespondenceData();
};

