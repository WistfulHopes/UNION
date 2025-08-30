#pragma once
#include "CoreMinimal.h"
#include "EUserStickerFlagBits.generated.h"

UENUM(BlueprintType)
enum class EUserStickerFlagBits : uint8 {
    None,
    ReverseU,
    ReverseV,
    ReverseUV,
};

