#pragma once
#include "CoreMinimal.h"
#include "EIrregularEventId.generated.h"

UENUM(BlueprintType)
enum class EIrregularEventId : uint8 {
    None,
    MiniMachine,
    QuickDriftCharge,
    StaticItemCategory,
    UnlimitedRocketPunches,
    ItemBoxFull,
    DashGateFull,
    UnlimitedThornBalls,
    UnlimitedBlackBomb,
    UnlimitedSlicer,
    UnlimitedWhiteBoost,
    UnlimitedMonsterTruck,
    UnlimitedSplash,
    Num,
};

