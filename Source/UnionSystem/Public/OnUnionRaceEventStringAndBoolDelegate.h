#pragma once
#include "CoreMinimal.h"
#include "OnUnionRaceEventStringAndBoolDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUnionRaceEventStringAndBool, const FString&, Value1, bool, Value2);

