#pragma once
#include "CoreMinimal.h"
#include "EMariaInitializeAuthResult.h"
#include "MariaInitializeAuthCompletedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMariaInitializeAuthCompletedDelegate, EMariaInitializeAuthResult, Result);

