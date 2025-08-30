#pragma once
#include "CoreMinimal.h"
#include "EOptionRaceCell.generated.h"

UENUM(BlueprintType)
enum class EOptionRaceCell : uint8 {
    CameraType,
    FPS,
    TeamRankAndMap,
    ItemInfoVisible,
    RaceSerif,
    DriftAndTrick,
    Gadget,
    RingAndMeter,
    RaceRank,
    ItemSlot,
};

