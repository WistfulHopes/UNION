#pragma once
#include "CoreMinimal.h"
#include "EMCEventSwitch.generated.h"

UENUM(BlueprintType)
enum class EMCEventSwitch : uint8 {
    PointUpChance,
    TravelCourseChange,
    Irregular,
    FesOnly_GadgetPieceGet,
    FesOnly_ItemGet,
};

