#pragma once
#include "CoreMinimal.h"
#include "EOptionSequenceMainState.generated.h"

UENUM(BlueprintType)
enum class EOptionSequenceMainState : uint8 {
    Invalid,
    GameSettings = 42,
    Challenge = 51,
    SetHonor,
    BEGIN_OFFSET = 72,
    Idle,
    OptionTop,
    SelectMainOption,
    Friendship,
    Hint,
    Jukebox,
    DLC,
    Credit,
    Exit,
};

