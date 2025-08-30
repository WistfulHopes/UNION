#pragma once
#include "CoreMinimal.h"
#include "EPartyRaceSelectPresetState.generated.h"

UENUM(BlueprintType)
enum class EPartyRaceSelectPresetState : uint8 {
    SelectPreset,
    SelectPresetWithRulePreview,
    ConfirmWindow,
    SettingItemSwitch,
    SettingDetailRule,
};

