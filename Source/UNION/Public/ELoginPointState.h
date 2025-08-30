#pragma once
#include "CoreMinimal.h"
#include "ELoginPointState.generated.h"

UENUM(BlueprintType)
enum class ELoginPointState : uint8 {
    NoneState,
    TitleState,
    OnlineButtonPressState,
    TimeTrialState,
};

