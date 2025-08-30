#pragma once
#include "CoreMinimal.h"
#include "ELobbyContextStatus.generated.h"

UENUM(BlueprintType)
enum class ELobbyContextStatus : uint8 {
    Idle,
    Creating,
    Joining,
    PendingExit,
    PendingDestroy,
    Searching,
    UpdatingLobby,
};

