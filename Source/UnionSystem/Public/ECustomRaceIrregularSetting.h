#pragma once
#include "CoreMinimal.h"
#include "ECustomRaceIrregularSetting.generated.h"

UENUM(BlueprintType)
enum class ECustomRaceIrregularSetting : uint8 {
    Nothing,
    Shuffle,
    AddObject,
    UnlimitedItem,
    QuickDriftCharge,
};

