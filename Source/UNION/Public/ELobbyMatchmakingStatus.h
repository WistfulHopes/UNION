#pragma once
#include "CoreMinimal.h"
#include "ELobbyMatchmakingStatus.generated.h"

UENUM(BlueprintType)
enum class ELobbyMatchmakingStatus : uint8 {
    Invalid,
    Idle,
    Start,
    Matched,
    Cancel,
    Fail,
    Reset,
};

