#pragma once
#include "CoreMinimal.h"
#include "EUnionWarpType.generated.h"

UENUM(BlueprintType)
enum class EUnionWarpType : uint8 {
    None,
    ChangeDomain,
    ShortCut,
    FootCut,
    RespotObject,
    GroundFlags,
    WorldEnd,
    ReverseRun,
    RepeatRespot,
    ForceMoveItemStack,
    ForceMoveItemBlock,
    IllegalCheckPoint,
    Distance,
    LowPosition,
    DiffirentPath,
    PrevDomain,
    MAX,
};

