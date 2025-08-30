#pragma once
#include "CoreMinimal.h"
#include "MatchmakingUnsubscribeRequest.generated.h"

USTRUCT(BlueprintType)
struct FMatchmakingUnsubscribeRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LobbyId;
    
    UNIONSYSTEM_API FMatchmakingUnsubscribeRequest();
};

