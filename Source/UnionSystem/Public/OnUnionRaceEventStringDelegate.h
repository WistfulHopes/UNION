#pragma once
#include "CoreMinimal.h"
#include "OnUnionRaceEventStringDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUnionRaceEventString, const FString&, Value);

