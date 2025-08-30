#pragma once
#include "CoreMinimal.h"
#include "LobbyRemoveLobbyRequest.generated.h"

USTRUCT(BlueprintType)
struct FLobbyRemoveLobbyRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ShortLobbyId;
    
    UNIONSYSTEM_API FLobbyRemoveLobbyRequest();
};

