#pragma once
#include "CoreMinimal.h"
#include "EGrandPrixProgressId.generated.h"

UENUM(BlueprintType)
enum class EGrandPrixProgressId : uint8 {
    None,
    Bronze_Ticket,
    Bronze,
    Silver_Ticket,
    Silver,
    Gold_Ticket,
    Gold,
    Num,
};

