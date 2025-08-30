#pragma once
#include "CoreMinimal.h"
#include "ERegionIpAbstract.generated.h"

UENUM(BlueprintType)
enum class ERegionIpAbstract : uint8 {
    REG_AFRINIC,
    REG_APNIC,
    REG_ARIN,
    REG_LACNIC,
    REG_RIPE_NCC,
    REG_ND,
};

