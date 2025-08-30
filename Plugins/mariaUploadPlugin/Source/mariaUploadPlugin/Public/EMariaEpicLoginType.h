#pragma once
#include "CoreMinimal.h"
#include "EMariaEpicLoginType.generated.h"

UENUM(BlueprintType)
enum class EMariaEpicLoginType : uint8 {
    Auto,
    AccountPortal,
    ExchangeCode,
    Developer,
};

