#pragma once
#include "CoreMinimal.h"
#include "EKeyConfigOperationType.generated.h"

UENUM(BlueprintType)
enum class EKeyConfigOperationType : uint8 {
    TypeA,
    TypeB,
    TypeC,
    Custom,
    Num,
};

