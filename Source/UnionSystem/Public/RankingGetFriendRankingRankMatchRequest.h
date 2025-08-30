#pragma once
#include "CoreMinimal.h"
#include "RankingGetFriendRankingRankMatchRequest.generated.h"

USTRUCT(BlueprintType)
struct FRankingGetFriendRankingRankMatchRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> friendPuids;
    
    UNIONSYSTEM_API FRankingGetFriendRankingRankMatchRequest();
};

