#pragma once
#include "CoreMinimal.h"
#include "ERateRank.h"
#include "RateRankUIData.generated.h"

USTRUCT(BlueprintType)
struct FRateRankUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RateUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RateDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERateRank RateRankUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERateRank RateRankDown;
    
    UNION_API FRateRankUIData();
};

