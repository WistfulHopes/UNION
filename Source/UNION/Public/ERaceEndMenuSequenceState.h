#pragma once
#include "CoreMinimal.h"
#include "ERaceEndMenuSequenceState.generated.h"

UENUM(BlueprintType)
enum class ERaceEndMenuSequenceState : uint8 {
    Idle,
    CheckLobbyInvite,
    Select,
    UserReport,
    Waiting,
    ShowPopup,
    QuitPublicLobby,
    Exit,
};

