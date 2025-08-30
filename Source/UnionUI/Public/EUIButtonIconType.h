#pragma once
#include "CoreMinimal.h"
#include "EUIButtonIconType.generated.h"

UENUM(BlueprintType)
enum class EUIButtonIconType : uint8 {
    EIT_BTN_CONT_CROSS,
    EIT_BTN_CONT_BTN,
    EIT_BTN_KEY,
    EIT_BTN_KEY_CROSS,
    Num,
};

