#pragma once
#include "CoreMinimal.h"
#include "ESceneDriverAnimationId.generated.h"

UENUM(BlueprintType)
enum class ESceneDriverAnimationId : uint8 {
    IdleLoop,
    RivalIdleLoop,
    RivalTauntStart,
    RivalTauntLoop,
    RivalAnnoyedStart,
    RivalAnnoyedLoop,
    RivalConfidenceStart,
    RivalConfidenceLoop,
    RivalUniqueStart,
    RivalUniqueLoop,
    CeremonyWin01,
    CeremonyWin02,
    CeremonyWin03,
    HoverIdleLoop,
    HoverRivalIdleLoop,
    HoverRivalTauntStart,
    HoverRivalTauntLoop,
    HoverRivalAnnoyedStart,
    HoverRivalAnnoyedLoop,
    HoverRivalConfidenceStart,
    HoverRivalConfidenceLoop,
    HoverRivalUniqueStart,
    HoverRivalUniqueLoop,
    Num,
};

