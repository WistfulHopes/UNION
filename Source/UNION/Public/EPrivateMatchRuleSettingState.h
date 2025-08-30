#pragma once
#include "CoreMinimal.h"
#include "EPrivateMatchRuleSettingState.generated.h"

UENUM(BlueprintType)
enum class EPrivateMatchRuleSettingState : uint8 {
    Idle,
    SelectPartyRacePreset = 10,
    SelectClass = 1,
    SettingPartyRace = 11,
    RivalTeamSelect = 14,
    Exit,
};

