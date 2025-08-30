#pragma once
#include "CoreMinimal.h"
#include "GhostGetRankingGhostDataResponse.generated.h"

USTRUCT(BlueprintType)
struct FGhostGetRankingGhostDataResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString signedUrl;
    
    UNIONSYSTEM_API FGhostGetRankingGhostDataResponse();
};

