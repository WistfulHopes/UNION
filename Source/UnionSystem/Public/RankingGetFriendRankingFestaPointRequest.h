#pragma once
#include "CoreMinimal.h"
#include "RankingGetFriendRankingFestaPointRequest.generated.h"

USTRUCT(BlueprintType)
struct FRankingGetFriendRankingFestaPointRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 festaId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> friendPuids;
    
    UNIONSYSTEM_API FRankingGetFriendRankingFestaPointRequest();
};

