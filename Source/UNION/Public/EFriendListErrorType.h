#pragma once
#include "CoreMinimal.h"
#include "EFriendListErrorType.generated.h"

UENUM(BlueprintType)
enum class EFriendListErrorType : uint8 {
    NotFoundPlayer,
    BlockPlayer,
    NotFoundLobby,
    RequestAlready,
    ListMax,
    SetNotAccept,
    ListMaxTarget,
    AcceptAlready,
    RequestCancel,
    LobbyMemberMax,
    JoinLobbyAlready,
    InviteAlready,
    SetNotInvite,
    SetNotCrossPlay,
    NotExistLobby,
    CurrentJoinLobby,
    SetNotCrossPlayHost,
    JoinLobbyFailed,
    BlockListMax,
    NetworkError,
    NetworkErrorReturnTopMenu,
    FriendAlready,
    BlockAlready,
    Num,
};

