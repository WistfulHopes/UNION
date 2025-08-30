#pragma once
#include "CoreMinimal.h"
#include "EOnlineSequenceState.generated.h"

UENUM(BlueprintType)
enum class EOnlineSequenceState : uint8 {
    Idle,
    Squad = 54,
    RankMatch,
    Festa,
    FriendMatch,
    LegendCompe,
    OnlineLobby,
    DodonpaEvent = 6,
    PreNotice = 63,
    OnlineTop = 72,
    Login,
    CheckPFInvitation,
    Exit,
};

