#pragma once
#include "CoreMinimal.h"
#include "EGimmickComPathType.generated.h"

UENUM(BlueprintType)
enum class EGimmickComPathType : uint8 {
    NONE,
    DARK_GAIA_PHOENIX_LW,
    DARK_GAIA_PHOENIX_RW,
    TENTACLE_L,
    TENTACLE_R,
    BUCKET_WHEEL_OVER,
    BUCKET_WHEEL_UNDER,
    DEATH_EGG_LP,
    DEATH_EGG_RP,
    BIG_TRAIN_SIDE1,
    BIG_TRAIN_SIDE2,
    BIG_TRAIN_UNDER,
    ENEMY04002_LEFT,
    ENEMY04002_RIGHT,
    POLISHING_MACHINE_L,
    POLISHING_MACHINE_R,
    Max,
};

