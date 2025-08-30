#pragma once
#include "CoreMinimal.h"
#include "ECommonLobbyMemberState.generated.h"

UENUM(BlueprintType)
enum class ECommonLobbyMemberState : uint8 {
    InLobby,
    InRace,
};

