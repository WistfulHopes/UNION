#pragma once
#include "CoreMinimal.h"
#include "ELobbyType.generated.h"

UENUM(BlueprintType)
enum class ELobbyType : uint8 {
    Invalid,
    RankMatch,
    Festa,
    FriendMatch,
    LegendCompe,
    Wireless,
    Squad,
};

