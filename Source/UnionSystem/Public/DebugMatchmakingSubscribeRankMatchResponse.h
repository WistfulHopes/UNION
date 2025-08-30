#pragma once
#include "CoreMinimal.h"
#include "DebugMatchmakingCommonResponse_Subscribe.h"
#include "DebugMatchmakingSubscribeRankMatchResponse.generated.h"

USTRUCT(BlueprintType)
struct FDebugMatchmakingSubscribeRankMatchResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LobbyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ticketId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugMatchmakingCommonResponse_Subscribe subscribe;
    
    UNIONSYSTEM_API FDebugMatchmakingSubscribeRankMatchResponse();
};

