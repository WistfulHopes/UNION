#pragma once
#include "CoreMinimal.h"
#include "MatchmakingCommonResponse_Subscribe.h"
#include "MatchmakingSubscribeFestaResponse.generated.h"

USTRUCT(BlueprintType)
struct FMatchmakingSubscribeFestaResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LobbyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ticketId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatchmakingCommonResponse_Subscribe subscribe;
    
    UNIONSYSTEM_API FMatchmakingSubscribeFestaResponse();
};

