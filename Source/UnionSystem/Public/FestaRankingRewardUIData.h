#pragma once
#include "CoreMinimal.h"
#include "FestaRankingRewardUIData.generated.h"

USTRUCT(BlueprintType)
struct FFestaRankingRewardUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HonorId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ticketNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 upper;
    
    UNIONSYSTEM_API FFestaRankingRewardUIData();
};

