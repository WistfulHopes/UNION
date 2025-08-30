#pragma once
#include "CoreMinimal.h"
#include "EResponseCodeAbstract.generated.h"

UENUM(BlueprintType)
enum class EResponseCodeAbstract : uint8 {
    RES_SUCCESS,
    RES_FAILURE_COMMUNICATION,
    RES_FAILURE_SECURITY,
    RES_FAILURE_ACCOUNT,
    RES_FAILURE_OPERATION,
    RES_FAILURE_FRIEND,
    RES_FAILURE_MATCHING,
    RES_FAILURE_SANCTION,
    RES_FAILURE_INTERNAL,
    RES_FAILURE_MAINTENANCE,
};

