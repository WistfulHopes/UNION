#pragma once
#include "CoreMinimal.h"
#include "OnUnionRaceEventIntDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUnionRaceEventInt, int32, Value);

