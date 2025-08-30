#pragma once
#include "CoreMinimal.h"
#include "EPartyRaceCourseSwitchState.generated.h"

UENUM(BlueprintType)
enum class EPartyRaceCourseSwitchState : uint8 {
    ON,
    OFF,
    Unreleased,
    Num,
};

