#pragma once
#include "CoreMinimal.h"
#include "RateRankBonus.generated.h"

USTRUCT(BlueprintType)
struct FRateRankBonus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Point;
    
    UNION_API FRateRankBonus();
};

