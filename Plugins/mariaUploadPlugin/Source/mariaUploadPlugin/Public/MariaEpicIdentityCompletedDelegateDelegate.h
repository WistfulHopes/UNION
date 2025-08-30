#pragma once
#include "CoreMinimal.h"
#include "MariaEpicIdentityCompletedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMariaEpicIdentityCompletedDelegate, bool, Success);

