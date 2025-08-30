#pragma once
#include "CoreMinimal.h"
#include "MatchmakingRequestContext.h"
#include "MatchmakingContext_ForMember.generated.h"

class UCommonLobbyContext;

UCLASS(Blueprintable)
class UNION_API UMatchmakingContext_ForMember : public UMatchmakingRequestContext {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommonLobbyContext* OwnerLobbyContext;
    
public:
    UMatchmakingContext_ForMember();

    UFUNCTION(BlueprintCallable)
    void InitializeWithOwnerLobby(UCommonLobbyContext* LobbyContext, bool bIsPublicLobby);
    
};

