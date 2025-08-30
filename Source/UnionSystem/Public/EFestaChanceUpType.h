#pragma once
#include "CoreMinimal.h"
#include "EFestaChanceUpType.generated.h"

UENUM(BlueprintType)
enum class EFestaChanceUpType : uint8 {
    None,
    PointDoubleUp,
    DonpaThreeTickets,
    RandomGadjet,
    Num,
};

