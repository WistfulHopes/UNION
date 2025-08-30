#pragma once
#include "CoreMinimal.h"
#include "EFriendMatchLobbyJoinResult.generated.h"

UENUM(BlueprintType)
enum class EFriendMatchLobbyJoinResult : uint8 {
    Success,
    Failure,
    InRace,
    WaitingToJoin,
    TooManyPlayers,
    Kicked,
    Blocked,
    Joining,
    NotFound,
    RomVersion,
};

