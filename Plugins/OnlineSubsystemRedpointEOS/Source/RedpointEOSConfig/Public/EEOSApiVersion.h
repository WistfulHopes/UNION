#pragma once
#include "CoreMinimal.h"
#include "EEOSApiVersion.generated.h"

UENUM(BlueprintType)
enum class EEOSApiVersion : uint8 {
    v2023_10_27,
    v2022_10_28,
    v2022_05_20,
    v2022_02_11,
};

