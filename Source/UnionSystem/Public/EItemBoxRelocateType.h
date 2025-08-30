#pragma once
#include "CoreMinimal.h"
#include "EItemBoxRelocateType.generated.h"

UENUM(BlueprintType)
enum class EItemBoxRelocateType : uint8 {
    Normal,
    RankMatch,
    LegendMatch,
    Festa,
    FriendMatch,
    LocalCommunication,
};

