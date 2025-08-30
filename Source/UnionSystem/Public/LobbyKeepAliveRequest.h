#pragma once
#include "CoreMinimal.h"
#include "LobbyKeepAliveRequest.generated.h"

USTRUCT(BlueprintType)
struct FLobbyKeepAliveRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ShortLobbyId;
    
    UNIONSYSTEM_API FLobbyKeepAliveRequest();
};

