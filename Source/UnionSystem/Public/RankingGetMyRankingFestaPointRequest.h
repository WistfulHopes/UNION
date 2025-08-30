#pragma once
#include "CoreMinimal.h"
#include "RankingGetMyRankingFestaPointRequest.generated.h"

USTRUCT(BlueprintType)
struct FRankingGetMyRankingFestaPointRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 festaId;
    
    UNIONSYSTEM_API FRankingGetMyRankingFestaPointRequest();
};

