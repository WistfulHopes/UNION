#pragma once
#include "CoreMinimal.h"
#include "RankingGetRankingFestaPointResponse.generated.h"

USTRUCT(BlueprintType)
struct FRankingGetRankingFestaPointResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString signedUrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString updatedAt;
    
    UNIONSYSTEM_API FRankingGetRankingFestaPointResponse();
};

