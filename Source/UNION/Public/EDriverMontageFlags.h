#pragma once
#include "CoreMinimal.h"
#include "EDriverMontageFlags.generated.h"

UENUM(BlueprintType)
enum class EDriverMontageFlags : uint8 {
    None,
    Play,
    Stop,
};

