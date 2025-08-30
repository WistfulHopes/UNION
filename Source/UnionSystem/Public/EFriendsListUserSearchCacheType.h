#pragma once
#include "CoreMinimal.h"
#include "EFriendsListUserSearchCacheType.generated.h"

UENUM(BlueprintType)
enum class EFriendsListUserSearchCacheType : uint8 {
    SearchPlayerID,
    SearchLobbyID,
    PFFriend,
    LobbyInvitation,
    BlockPlayer,
    RecentPlayer,
};

