#pragma once
#include "CoreMinimal.h"
#include "OnUnionRaceEventObjectDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUnionRaceEventObject, UObject*, Object);

