#pragma once
#include "CoreMinimal.h"
#include "EMCEventPointUpChance.generated.h"

UENUM(BlueprintType)
enum class EMCEventPointUpChance : uint8 {
    None,
    AllUp,
    OnlyTop,
    LuckySeven,
    TopThree,
    EvenNumOnly,
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

