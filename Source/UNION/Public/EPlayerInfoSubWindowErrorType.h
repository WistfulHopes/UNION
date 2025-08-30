#pragma once
#include "CoreMinimal.h"
#include "EPlayerInfoSubWindowErrorType.generated.h"

UENUM(BlueprintType)
enum class EPlayerInfoSubWindowErrorType : uint8 {
    Unknown,
    NotExistsLobbyPlayer,
    NotAddBlockedPlayerOverLimit,
    NotAddBlockedPlayer,
    FriendAlready,
    FriendRequestAlready,
    FriendListMaxTarget,
    FriendListMax,
    FriendAcceptAlready,
    Num,
};

