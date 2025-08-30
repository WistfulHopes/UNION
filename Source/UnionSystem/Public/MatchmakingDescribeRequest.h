#pragma once
#include "CoreMinimal.h"
#include "MatchmakingDescribeRequest.generated.h"

USTRUCT(BlueprintType)
struct FMatchmakingDescribeRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LobbyId;
    
    UNIONSYSTEM_API FMatchmakingDescribeRequest();
};

