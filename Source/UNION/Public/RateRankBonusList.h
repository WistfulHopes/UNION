#pragma once
#include "CoreMinimal.h"
#include "RateRankBonus.h"
#include "RateRankBonusList.generated.h"

USTRUCT(BlueprintType)
struct FRateRankBonusList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRateRankBonus> list;
    
    UNION_API FRateRankBonusList();
};

