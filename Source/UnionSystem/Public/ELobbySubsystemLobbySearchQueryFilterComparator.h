#pragma once
#include "CoreMinimal.h"
#include "ELobbySubsystemLobbySearchQueryFilterComparator.generated.h"

UENUM(BlueprintType)
enum class ELobbySubsystemLobbySearchQueryFilterComparator : uint8 {
    Equal,
    NotEqual,
    LessThan,
    LessThanOrEqual,
    GreaterThan,
    GreaterThanOrEqual,
};

