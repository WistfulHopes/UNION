#pragma once
#include "CoreMinimal.h"
#include "LobbyGenerateLobbyRequest.generated.h"

USTRUCT(BlueprintType)
struct FLobbyGenerateLobbyRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString eosLobbyId;
    
    UNIONSYSTEM_API FLobbyGenerateLobbyRequest();
};

