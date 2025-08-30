#pragma once
#include "CoreMinimal.h"
#include "LobbyKeepAliveResponse.generated.h"

USTRUCT(BlueprintType)
struct FLobbyKeepAliveResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString updatedAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpirationTimeSec;
    
    UNIONSYSTEM_API FLobbyKeepAliveResponse();
};

