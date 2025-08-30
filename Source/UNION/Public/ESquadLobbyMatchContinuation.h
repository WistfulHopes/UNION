#pragma once
#include "CoreMinimal.h"
#include "ESquadLobbyMatchContinuation.generated.h"

UENUM(BlueprintType)
enum class ESquadLobbyMatchContinuation : uint8 {
    NotAnswered,
    Continue,
    Quit,
};

