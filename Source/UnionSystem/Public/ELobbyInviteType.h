#pragma once
#include "CoreMinimal.h"
#include "ELobbyInviteType.generated.h"

UENUM(BlueprintType)
enum class ELobbyInviteType : uint8 {
    None,
    FriendInvite,
    SearchLobbyId,
};

