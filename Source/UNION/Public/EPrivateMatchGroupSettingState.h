#pragma once
#include "CoreMinimal.h"
#include "EPrivateMatchGroupSettingState.generated.h"

UENUM(BlueprintType)
enum class EPrivateMatchGroupSettingState : uint8 {
    Idle,
    SelectGroupPartyRace = 13,
    SettingComplete,
    Exit,
};

