#pragma once
#include "CoreMinimal.h"
#include "EPartyRacePreset.h"
#include "PrivateMatchRulePresetSelect_SendRuleDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPrivateMatchRulePresetSelect_SendRule, EPartyRacePreset, RulePreset);

