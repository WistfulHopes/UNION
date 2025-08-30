#pragma once
#include "CoreMinimal.h"
#include "LobbyGetEosLobbyIdRequest.generated.h"

USTRUCT(BlueprintType)
struct FLobbyGetEosLobbyIdRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ShortLobbyId;
    
    UNIONSYSTEM_API FLobbyGetEosLobbyIdRequest();
};

