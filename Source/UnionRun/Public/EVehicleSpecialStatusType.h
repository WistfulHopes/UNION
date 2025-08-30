#pragma once
#include "CoreMinimal.h"
#include "EVehicleSpecialStatusType.generated.h"

UENUM(BlueprintType)
enum class EVehicleSpecialStatusType : uint8 {
    Invalid,
    ItemSlime,
    ItemJadeGhost,
    ItemVioletVoid,
    ItemDarkChao,
    ItemAnchor,
    ItemWarpRing,
    ItemMagnet,
    ItemBodyCut,
    ItemYellowDrill,
    ItemCyanLaser,
    ItemMonsterTruck,
    ItemShield,
    ItemWeight,
    ItemSlicer,
    GimmickPaint,
    ImmuneItemDamage,
    UltimateDriftBoost,
    FootCut,
    TeamBoost,
};

