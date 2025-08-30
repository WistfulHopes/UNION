#pragma once
#include "CoreMinimal.h"
#include "ECarPartsVeriation.generated.h"

UENUM(BlueprintType)
enum class ECarPartsVeriation : uint8 {
    CarPartsVeriationNone,
    CarPartsVeriationA,
    CarPartsVeriationB,
    CarPartsVeriationC,
};

