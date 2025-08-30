#pragma once
#include "CoreMinimal.h"
#include "EFestaRaceRule.generated.h"

UENUM(BlueprintType)
enum class EFestaRaceRule : uint8 {
    NoFesta,
    DefaultFestaRule,
    RingFestaRule,
    ItemFestaRule,
};

