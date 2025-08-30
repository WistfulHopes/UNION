#pragma once
#include "CoreMinimal.h"
#include "EFooterMainTextType.generated.h"

UENUM(BlueprintType)
enum class EFooterMainTextType : uint8 {
    OK,
    Next,
    Back,
    Cancel,
    Skip,
    LongCancel,
    Confirm,
    LongSkip,
};

