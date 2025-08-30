#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "OnlineErrorBP.h"
#include "LobbyOperationResult.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FLobbyOperationResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineErrorBP Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl UserId;
    
    FLobbyOperationResult();
};

