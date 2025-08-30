#pragma once
#include "CoreMinimal.h"
#include "MatchmakingDescribeResponse_MatchPlayerInfo.generated.h"

USTRUCT(BlueprintType)
struct FMatchmakingDescribeResponse_MatchPlayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FairPlayPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 fairPlayPointInside;
    
    UNIONSYSTEM_API FMatchmakingDescribeResponse_MatchPlayerInfo();
};

