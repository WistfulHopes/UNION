#pragma once
#include "CoreMinimal.h"
#include "ERaceType.generated.h"

UENUM(BlueprintType)
enum class ERaceType : uint8 {
    TravelRace,
    Travel3Main,
    MainTimeTrial,
    AnotherTimeTrial,
    FreeRun,
    Num,
};

