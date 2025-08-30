#pragma once
#include "CoreMinimal.h"
#include "OnUnionRaceEventFloatDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUnionRaceEventFloat, float, Value);

