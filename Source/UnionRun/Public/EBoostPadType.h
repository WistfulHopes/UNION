#pragma once
#include "CoreMinimal.h"
#include "EBoostPadType.generated.h"

UENUM(BlueprintType)
enum class EBoostPadType : uint8 {
    A,
    B,
    C,
    Gate,
    Air,
    BankA,
    BankB,
    IrregularCar,
    IrregularBoat,
    IrregularPlane,
    Num,
};

