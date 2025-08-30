#pragma once
#include "CoreMinimal.h"
#include "EPartyRaceItemSwitchState.generated.h"

UENUM(BlueprintType)
enum class EPartyRaceItemSwitchState : uint8 {
    BOTH_ON,
    BOTH_OFF,
    ONLY_GROUPE_0,
    ONLY_GROUPE_1,
    ONLY_GROUPE_2,
};

