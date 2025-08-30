#pragma once
#include "CoreMinimal.h"
#include "EBootSequenceState.generated.h"

UENUM(BlueprintType)
enum class EBootSequenceState : uint8 {
    Idle,
    SignInPlatform,
    InitializePlatform,
    CheckGDKCrossPlay,
    CheckPSParentalControl,
    CheckContent,
    Exit,
};

