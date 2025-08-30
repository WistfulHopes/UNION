#pragma once
#include "CoreMinimal.h"
#include "MariaAsyncCompletedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FMariaAsyncCompletedDelegate, bool, Success);

