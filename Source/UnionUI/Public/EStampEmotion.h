#pragma once
#include "CoreMinimal.h"
#include "EStampEmotion.generated.h"

UENUM(BlueprintType)
enum class EStampEmotion : uint8 {
    ESE_HELLO,
    ESE_TAUNT,
    ESE_SORROW,
    ESE_NICE,
    ESE_SPECIAL,
    ESE_SPECIALTWO,
    Num,
};

