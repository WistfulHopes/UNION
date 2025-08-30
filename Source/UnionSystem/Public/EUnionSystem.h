#pragma once
#include "CoreMinimal.h"
#include "EUnionSystem.generated.h"

UENUM(BlueprintType)
enum class EUnionSystem : uint8 {
    Object,
    Sound,
    Event,
    Debug,
    ConsoleCommand,
    OnlineMatchDebug,
    Log,
    GyroDebug,
    RemoteDebug,
    OnlineAutoDebug,
    Num,
};

