#pragma once
#include "CoreMinimal.h"
#include "EBlockPlayerErrorCode.generated.h"

UENUM(BlueprintType)
enum class EBlockPlayerErrorCode : uint8 {
    None,
    OverLimit,
    NetworkError,
    InternalError,
    AlreadyRegistered,
};

