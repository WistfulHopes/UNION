#pragma once
#include "CoreMinimal.h"
#include "EMenuSequenceMainState.generated.h"

UENUM(BlueprintType)
enum class EMenuSequenceMainState : uint8 {
    Idle,
    Initialize,
    Title,
    SaveAndLoadPlayLog,
    LoadAssets,
    TopMenu,
    GrandPrix,
    Party,
    TimeTrial,
    Online,
    Wireless,
    Ending,
    Exit,
};

