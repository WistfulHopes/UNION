#pragma once
#include "CoreMinimal.h"
#include "RankingGetFriendRankingLegendCompeRequest.generated.h"

USTRUCT(BlueprintType)
struct FRankingGetFriendRankingLegendCompeRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 compeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> friendPuids;
    
    UNIONSYSTEM_API FRankingGetFriendRankingLegendCompeRequest();
};

