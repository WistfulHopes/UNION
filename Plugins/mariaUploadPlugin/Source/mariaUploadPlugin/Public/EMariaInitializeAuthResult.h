#pragma once
#include "CoreMinimal.h"
#include "EMariaInitializeAuthResult.generated.h"

UENUM(BlueprintType)
enum class EMariaInitializeAuthResult : uint8 {
    Pending,
    Success,
    Error,
    Cancelled,
    NeedRetry,
    NoUsers,
    FailAuth,
    AuthServer,
    NSAUnavailable,
    Unregistered,
    Banned,
    ExternalError,
    NSAccountLink,
    NeedInteraction,
    InapropriateCall = 255,
};

