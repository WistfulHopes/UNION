#pragma once
#include "CoreMinimal.h"
#include "ManaEventPointInfo.h"
#include "OnUnionManaPlayerEventPointDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUnionManaPlayerEventPoint, FManaEventPointInfo, EventPointInfo);

