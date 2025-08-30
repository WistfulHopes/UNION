#pragma once
#include "CoreMinimal.h"
#include "ELocalStorageStatus.generated.h"

UENUM(BlueprintType)
enum class ELocalStorageStatus : uint8 {
    OK,
    FileNotFound,
    ErrorRead,
    ErrorWrite,
    ErrorDelete,
    Unexpected,
    Unimplemented,
};

