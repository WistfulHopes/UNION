#pragma once
#include "CoreMinimal.h"
#include "LobbyGenerateLobbyResponse.generated.h"

USTRUCT(BlueprintType)
struct FLobbyGenerateLobbyResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ShortLobbyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString generateAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpirationTimeSec;
    
    UNIONSYSTEM_API FLobbyGenerateLobbyResponse();
};

