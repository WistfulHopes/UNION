#pragma once
#include "CoreMinimal.h"
#include "EMCEventIrregularGate.generated.h"

UENUM(BlueprintType)
enum class EMCEventIrregularGate : uint8 {
    None,
    IrregularRandom,
    IrregularMini,
    IrregularDriftCharge,
    IrregularFixedItemCategory,
    IrregularOnlyRocketPunch,
    IrregularOnlyThornBalls,
    DLC_01,
    DLC_02,
    DLC_03,
    DLC_04,
    DLC_05,
    DLC_06,
    DLC_07,
    DLC_08,
    DLC_09,
    DLC_10,
};

