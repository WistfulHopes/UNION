#pragma once
#include "CoreMinimal.h"
#include "EGetUserProfileError.generated.h"

UENUM(BlueprintType)
enum class EGetUserProfileError : uint8 {
    None,
    AccessLimit,
    Busy,
    TooMuchRequest,
    InitError,
    PlatformFunctionError,
    TooManyData,
};

