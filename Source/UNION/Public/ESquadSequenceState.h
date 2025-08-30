#pragma once
#include "CoreMinimal.h"
#include "ESquadSequenceState.generated.h"

UENUM(BlueprintType)
enum class ESquadSequenceState : uint8 {
    Idle,
    SquadTop,
    FriendList,
    PlayerProfile,
    Exit,
};

