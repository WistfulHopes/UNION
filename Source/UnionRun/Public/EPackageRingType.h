#pragma once
#include "CoreMinimal.h"
#include "EPackageRingType.generated.h"

UENUM(BlueprintType)
enum class EPackageRingType : uint8 {
    Num5,
    Num10,
    Num20,
    Num30,
    Num40,
    Num50,
    Special,
    Max,
};

