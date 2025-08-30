#pragma once
#include "CoreMinimal.h"
#include "LotteryItemBoxRateData.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FLotteryItemBoxRateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NormalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DoubleBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpecialBox;
    
    FLotteryItemBoxRateData();
};

