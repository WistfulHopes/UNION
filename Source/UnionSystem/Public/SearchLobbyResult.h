#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "LobbyId.h"
#include "OnlineErrorBP.h"
#include "SearchLobbyResult.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FSearchLobbyResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineErrorBP Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLobbyId> LobbyIds;
    
    FSearchLobbyResult();
};

