#pragma once
#include "CoreMinimal.h"
#include "ERaceErrorHandlingState.generated.h"

UENUM(BlueprintType)
enum class ERaceErrorHandlingState : uint8 {
    Idle,
    AddFairPoint,
    QuitLobby,
    Handling,
    EOSLogout,
    Exit,
};

