#pragma once
#include "CoreMinimal.h"
#include "ETopMenuSequenceState.generated.h"

UENUM(BlueprintType)
enum class ETopMenuSequenceState : uint8 {
    Idle,
    EventScene = 5,
    TopMenuDodonpaEvent,
    PreNotice = 63,
    NoticeEventEnd,
    GetDLCFreeContent,
    NoticePopup,
    EventInfomation,
    SelectCharaMachine = 2,
    CustomizeGadget = 38,
    Garage = 35,
    FriendList = 44,
    Etcetera = 40,
    LobbyPlayerList = 60,
    PlayerProfile = 45,
    TopMenuTop = 72,
    TipsWindow,
    Store,
    SelectPlayMode,
    SelectPlayerNum,
    SelectGameMode,
    Exit,
};

