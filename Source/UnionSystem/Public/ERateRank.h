#pragma once
#include "CoreMinimal.h"
#include "ERateRank.generated.h"

UENUM(BlueprintType)
enum class ERateRank : uint8 {
    None,
    Eminus,
    E,
    Eplus,
    Dminus,
    D,
    Dplus,
    Cminus,
    C,
    Cplus,
    Bminus,
    B,
    Bplus,
    Aminus,
    A,
    Aplus,
    S1,
    S2,
    S3,
    S4,
    S5,
    S6,
    S7,
    S8,
    S9,
    S10,
    Max,
    Num,
};

