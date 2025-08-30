#pragma once
#include "CoreMinimal.h"
#include "ECommonMenuButtonType.generated.h"

UENUM(BlueprintType)
enum class ECommonMenuButtonType : uint8 {
    None,
    GrandPrix,
    Party,
    TimeTrial,
    RankMatch,
    FriendMatch,
    Festa,
    Legend,
    InviteFriends,
    GadgetCustomize,
    Garage,
    FriendList,
    Etcetera,
    CharaMachine,
    PlayerInfo,
    Config,
    GameSettings,
    Challenge,
    JukeBox,
    Credit,
    Credit2,
    Hint,
    Ready,
    Achievement,
    FriendShip,
    Store,
    Max,
};

