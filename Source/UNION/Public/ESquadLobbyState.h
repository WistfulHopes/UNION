#pragma once
#include "CoreMinimal.h"
#include "ESquadLobbyState.generated.h"

UENUM(BlueprintType)
enum class ESquadLobbyState : uint8 {
    None,
    InSquadLobby,
    InPublicLobby,
};

