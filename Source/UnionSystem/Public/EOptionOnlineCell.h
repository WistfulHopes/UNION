#pragma once
#include "CoreMinimal.h"
#include "EOptionOnlineCell.generated.h"

UENUM(BlueprintType)
enum class EOptionOnlineCell : uint8 {
    PlayStatus,
    CrossPlay,
    FriendRequest,
    IdSearch,
    InviteLobby,
    InviteLobbyInRace,
};

