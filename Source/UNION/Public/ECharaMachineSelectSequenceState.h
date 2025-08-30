#pragma once
#include "CoreMinimal.h"
#include "ECharaMachineSelectSequenceState.generated.h"

UENUM(BlueprintType)
enum class ECharaMachineSelectSequenceState : uint8 {
    Idle,
    CharaSelect,
    MachineSelect,
    TodayRecord,
    Exit,
};

