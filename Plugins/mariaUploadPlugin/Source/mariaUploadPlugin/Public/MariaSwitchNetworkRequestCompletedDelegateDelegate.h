#pragma once
#include "CoreMinimal.h"
#include "MariaSwitchNetworkRequestCompletedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMariaSwitchNetworkRequestCompletedDelegate, bool, Available);

