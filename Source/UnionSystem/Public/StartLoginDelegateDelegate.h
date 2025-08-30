#pragma once
#include "CoreMinimal.h"
#include "StartLoginDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FStartLoginDelegate, bool, Error, bool, SavedataDeleted);

