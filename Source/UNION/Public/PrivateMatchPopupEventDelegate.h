#pragma once
#include "CoreMinimal.h"
#include "PrivateMatchPopupEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPrivateMatchPopupEvent, bool, bJoin);

