#pragma once
#include "CoreMinimal.h"
#include "EOnlineGameMode.generated.h"

UENUM(BlueprintType)
enum class EOnlineGameMode : uint8 {
    None,
    RankMatch,
    FriendMatch,
    Festa,
    Legend,
    Max,
};

