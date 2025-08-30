#pragma once
#include "CoreMinimal.h"
#include "MatchmakingStopRequest.generated.h"

USTRUCT(BlueprintType)
struct FMatchmakingStopRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LobbyId;
    
    UNIONSYSTEM_API FMatchmakingStopRequest();
};

