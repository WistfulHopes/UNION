#pragma once
#include "CoreMinimal.h"
#include "EBreakObjType.generated.h"

UENUM(BlueprintType)
enum class EBreakObjType : uint8 {
    NONE,
    PILLAR,
    CHIP_A,
    CHIP_B,
    CACTUS,
    COOKIE,
    ROADSIGN,
    CONSTRUCTIONITEM,
    ASTEROID,
    CRYSTAL,
    BLOCK,
    Num,
};

