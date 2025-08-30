#pragma once
#include "CoreMinimal.h"
#include "EEtceteraSequenceMainState.generated.h"

UENUM(BlueprintType)
enum class EEtceteraSequenceMainState : uint8 {
    Idle,
    EtceteraTop,
    SelectMainMenu,
    FullGameStore,
    Option = 42,
    Challenge = 51,
    SetHonor,
    Friendship,
    Hint,
    Jukebox,
    DLC,
    Credit,
    Exit,
};

