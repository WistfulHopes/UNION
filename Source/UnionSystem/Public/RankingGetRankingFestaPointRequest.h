#pragma once
#include "CoreMinimal.h"
#include "RankingGetRankingFestaPointRequest.generated.h"

USTRUCT(BlueprintType)
struct FRankingGetRankingFestaPointRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 festaId;
    
    UNIONSYSTEM_API FRankingGetRankingFestaPointRequest();
};

