#pragma once
#include "CoreMinimal.h"
#include "ECircleState.generated.h"

UENUM(BlueprintType)
enum class ECircleState : uint8 {
    Idle,
    Move,
    SuckWait,
    Suck,
    RespawnWait,
};

