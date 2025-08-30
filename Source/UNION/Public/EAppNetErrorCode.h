#pragma once
#include "CoreMinimal.h"
#include "EAppNetErrorCode.generated.h"

UENUM(BlueprintType)
enum class EAppNetErrorCode : uint8 {
    None,
    Unknown,
    LobbyError,
    MatchmakingError,
};

