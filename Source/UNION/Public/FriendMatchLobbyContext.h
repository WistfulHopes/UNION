#pragma once
#include "CoreMinimal.h"
#include "LobbyOperationResult.h"
#include "CustomMatchLobbyContext.h"
#include "FriendMatchLobbyContext.generated.h"

UCLASS(Blueprintable)
class UNION_API UFriendMatchLobbyContext : public UCustomMatchLobbyContext {
    GENERATED_BODY()
public:
    UFriendMatchLobbyContext();

    UFUNCTION(BlueprintCallable)
    void OnKickBlockMemberComplete(bool bSuccessful, const FLobbyOperationResult& Result);
    
};

