#pragma once
#include "CoreMinimal.h"
#include "EFriendListOnlineSettingType.generated.h"

UENUM(BlueprintType)
enum class EFriendListOnlineSettingType : uint8 {
    PlayerIcon,
    PlayStatus,
    FairPlayPoint,
    BlockList,
    CrossPlay,
    PermitFriendApply,
    PermitPlayerIdSearch,
    AcceptLobbyInvitation,
    AcceptLobbyInvitationRace,
    Num,
    None = 255,
};

