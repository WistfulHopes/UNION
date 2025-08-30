#pragma once
#include "CoreMinimal.h"
#include "LobbyRemoveLobbyResponse.generated.h"

USTRUCT(BlueprintType)
struct FLobbyRemoveLobbyResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isRemove;
    
    UNIONSYSTEM_API FLobbyRemoveLobbyResponse();
};

