#pragma once
#include "CoreMinimal.h"
#include "CustomMatchLobbyMemberContext.h"
#include "FriendMatchLobbyMemberContext.generated.h"

UCLASS(Blueprintable)
class UNION_API UFriendMatchLobbyMemberContext : public UCustomMatchLobbyMemberContext {
    GENERATED_BODY()
public:
    UFriendMatchLobbyMemberContext();

};

