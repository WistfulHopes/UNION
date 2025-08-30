#pragma once
#include "CoreMinimal.h"
#include "ERacerDamageNotifyType.generated.h"

UENUM(BlueprintType)
enum class ERacerDamageNotifyType : uint8 {
    None,
    TimeElapsed,
    FinishedSucceed,
    FinishedOverwritten = 4,
    AttackSucced = 32,
    AttackFailed = 16,
    AttackMissingShot = 64,
    Num,
};

