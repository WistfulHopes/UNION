#pragma once
#include "CoreMinimal.h"
#include "DebugMatchmakingCommonResponse_Subscribe.h"
#include "DebugMatchmakingSubscribeFestaResponse.generated.h"

USTRUCT(BlueprintType)
struct FDebugMatchmakingSubscribeFestaResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LobbyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ticketId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugMatchmakingCommonResponse_Subscribe subscribe;
    
    UNIONSYSTEM_API FDebugMatchmakingSubscribeFestaResponse();
};

