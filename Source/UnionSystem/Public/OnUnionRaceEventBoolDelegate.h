#pragma once
#include "CoreMinimal.h"
#include "OnUnionRaceEventBoolDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUnionRaceEventBool, bool, Value);

