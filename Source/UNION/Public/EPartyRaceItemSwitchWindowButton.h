#pragma once
#include "CoreMinimal.h"
#include "EPartyRaceItemSwitchWindowButton.generated.h"

UENUM(BlueprintType)
enum class EPartyRaceItemSwitchWindowButton : uint8 {
    RANDOM,
    ALL_ON,
    ALL_OFF,
};

