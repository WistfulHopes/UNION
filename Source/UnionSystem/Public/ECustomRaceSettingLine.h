#pragma once
#include "CoreMinimal.h"
#include "ECustomRaceSettingLine.generated.h"

UENUM(BlueprintType)
enum class ECustomRaceSettingLine : uint8 {
    SpeedClass,
    GroupSetting,
    MatchRule,
    RaceCount,
    TopPointSettlement,
    ComSpeed,
    Handicap,
    ItemAppearanceRule,
    CourseSelecting,
    MCEvent,
    MCEventSwitchArr,
    GadgetUsing,
    AutoGetItem,
    Irregular,
    PointUpChance,
    RingLost,
    TripleCourse,
    ObjectPlacementType,
    FestaRaceRule,
    GroupRaceRule,
    RaceBonus,
    GoalPoint,
};

