#pragma once
#include "CoreMinimal.h"
#include "EFriendListType.generated.h"

UENUM(BlueprintType)
enum class EFriendListType : uint8 {
    PFFriendPlayed,
    PFFriendNotPlayed,
    FriendNowPlaying,
    FriendNotPlaying,
    SendRequest,
    ReceiveRequest,
    RecentPlayer,
    LobbyInvitation,
    StatusSetting,
    PrivacySetting,
    Block,
    PFFriend,
    Num,
    None = 255,
};

