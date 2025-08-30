#pragma once
#include "CoreMinimal.h"
#include "LobbyGetEosLobbyIdResponse.generated.h"

USTRUCT(BlueprintType)
struct FLobbyGetEosLobbyIdResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString eosLobbyId;
    
    UNIONSYSTEM_API FLobbyGetEosLobbyIdResponse();
};

