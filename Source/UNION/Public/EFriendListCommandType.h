#pragma once
#include "CoreMinimal.h"
#include "EFriendListCommandType.generated.h"

UENUM(BlueprintType)
enum class EFriendListCommandType : uint8 {
    Request,
    RequestFromSearch,
    RequestCancel,
    Accept,
    Reject,
    Remove,
    Search,
    Block,
    BlockCancel,
    LobbyInvitation,
    LobbyInvitationFromSearch,
    RacerInfo,
    PFProfile,
    LobbyInvitationAccept,
    LobbyIdSearch,
    RejectLobbyInvitation,
    PlayerIconList,
    ItemSetting,
    BlockList,
    FairPlayPoint,
    Cancel,
    Num,
    None = 255,
};

