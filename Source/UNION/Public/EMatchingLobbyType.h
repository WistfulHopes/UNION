#pragma once
#include "CoreMinimal.h"
#include "EMatchingLobbyType.generated.h"

UENUM(BlueprintType)
enum class EMatchingLobbyType : uint8 {
    None,
    Rank,
    Friend,
    Frined_NSW,
    Festa,
    Legend,
    Squad,
};

