#pragma once
#include "CoreMinimal.h"
#include "EPlayerInfoSubWindowBtnType.generated.h"

UENUM(BlueprintType)
enum class EPlayerInfoSubWindowBtnType : uint8 {
    Profile,
    Kick,
    Friend,
    Block,
    Report,
};

